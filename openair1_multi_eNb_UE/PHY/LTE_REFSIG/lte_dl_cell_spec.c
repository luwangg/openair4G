#ifdef USER_MODE
#include <stdio.h>
#include <stdlib.h>
#endif

#include "defs.h"
#include "PHY/defs.h"

extern unsigned int lte_gold_table[20][2][14];
//#define DEBUG_DL_CELL_SPEC

int lte_dl_cell_spec(mod_sym_t *output,
		     short amp,
		     LTE_DL_FRAME_PARMS *frame_parms,
		     unsigned char eNb_id,
		     unsigned char Ns,
		     unsigned char l,
		     unsigned char p) {

  unsigned char nu,mprime,mprime_dword,mprime_qpsk_symb,m;
  unsigned short k,a;
  mod_sym_t qpsk[4];

#ifdef IFFT_FPGA
  qpsk[0] = 4;
  qpsk[1] = 2;
  qpsk[2] = 3;
  qpsk[3] = 1;
#else
  a = (amp*ONE_OVER_SQRT2_Q15)>>15;
  ((short *)&qpsk[0])[0] = a;
  ((short *)&qpsk[0])[1] = a;
  ((short *)&qpsk[1])[0] = -a;
  ((short *)&qpsk[1])[1] = a;
  ((short *)&qpsk[2])[0] = a;
  ((short *)&qpsk[2])[1] = -a;
  ((short *)&qpsk[3])[0] = -a;
  ((short *)&qpsk[3])[1] = -a;
#endif

  if ((p==0) && (l==0) )
    nu = 0;
  else if ((p==0) && (l>0))
    nu = 3;
  else if ((p==1) && (l==0))
    nu = 3;
  else if ((p==1) && (l>0))
    nu = 0;
  else {
    msg("lte_dl_cell_spec: p %d, l %d -> ERROR\n",p,l);
    return(-1);
  }

  mprime = 110 - frame_parms->N_RB_DL;
  
  k = (nu + frame_parms->nushift+eNb_id);
  if (k > 6)
    k -=6;

#ifdef IFFT_FPGA
  k+=frame_parms->N_RB_DL*6;
#else  
  k+=frame_parms->first_carrier_offset;
#endif
  for (m=0;m<frame_parms->N_RB_DL<<1;m++) {

    mprime_dword     = mprime>>4;
    mprime_qpsk_symb = mprime&0xf;

    // this is r_mprime from 3GPP 36-211 6.10.1.2 
    output[k] = qpsk[(lte_gold_table[Ns][l][mprime_dword]>>(2*mprime_qpsk_symb))&3];
    //output[k] = (lte_gold_table[Ns][l][mprime_dword]>>(2*mprime_qpsk_symb))&3;
#ifdef DEBUG_DL_CELL_SPEC
    printf("Ns %d, l %d, m %d,mprime_dword %d, mprime_qpsk_symbol %d\n",
	   Ns,l,m,mprime_dword,mprime_qpsk_symb);
    printf("index = %d (k %d)\n",(lte_gold_table[Ns][l][mprime_dword]>>(2*mprime_qpsk_symb))&3,k);
#endif 

    mprime++;
#ifdef DEBUG_DL_CELL_SPEC
    if (m<4)
    printf("Ns %d, l %d output[%d] = (%d,%d)\n",Ns,l,k,((short *)&output[k])[0],((short *)&output[k])[1]);
#endif
    k+=6;
#ifdef IFFT_FPGA
    if (k >= frame_parms->N_RB_DL*12) {
      k-=frame_parms->N_RB_DL*12;
    }
#else
    if (k >= frame_parms->ofdm_symbol_size) {
      k++;  // skip DC carrier
      k-=frame_parms->ofdm_symbol_size;
    }
#endif
    //    printf("** k %d\n",k);
  }
  return(0);
}

int lte_dl_cell_spec_rx(int *output,
			 LTE_DL_FRAME_PARMS *frame_parms,
			 unsigned char Ns,
			 unsigned char l,
			 unsigned char p) {


  unsigned char mprime,mprime_dword,mprime_qpsk_symb,m;
  unsigned short k=0;
  unsigned int qpsk[4];
  
  // This includes complex conjugate for channel estimation

  ((short *)&qpsk[0])[0] = ONE_OVER_SQRT2_Q15;
  ((short *)&qpsk[0])[1] = -ONE_OVER_SQRT2_Q15;
  ((short *)&qpsk[1])[0] = -ONE_OVER_SQRT2_Q15;
  ((short *)&qpsk[1])[1] = -ONE_OVER_SQRT2_Q15;
  ((short *)&qpsk[2])[0] = ONE_OVER_SQRT2_Q15;
  ((short *)&qpsk[2])[1] = ONE_OVER_SQRT2_Q15;
  ((short *)&qpsk[3])[0] = -ONE_OVER_SQRT2_Q15;
  ((short *)&qpsk[3])[1] = ONE_OVER_SQRT2_Q15;

  mprime = 110 - frame_parms->N_RB_DL;
  
  for (m=0;m<frame_parms->N_RB_DL<<1;m++) {

    mprime_dword     = mprime>>4;
    mprime_qpsk_symb = mprime&0xf;

    // this is r_mprime from 3GPP 36-211 6.10.1.2 
    output[k] = qpsk[(lte_gold_table[Ns][l][mprime_dword]>>(2*mprime_qpsk_symb))&3];
#ifdef DEBUG_DL_CELL_SPEC
    printf("Ns %d, l %d, m %d,mprime_dword %d, mprime_qpsk_symbol %d\n",
	   Ns,l,m,mprime_dword,mprime_qpsk_symb);
    printf("index = %d (k %d)\n",(lte_gold_table[Ns][l][mprime_dword]>>(2*mprime_qpsk_symb))&3,k);
#endif 

    mprime++;
#ifdef DEBUG_DL_CELL_SPEC
    if (m<4)
    printf("Ns %d l %d output[%d] = (%d,%d)\n",Ns,l,k,((short *)&output[k])[0],((short *)&output[k])[1]);
#endif
    k++;
    //    printf("** k %d\n",k);
  }
  return(0);
}


#ifdef LTE_DL_CELL_SPEC_MAIN



extern int write_output(const char *,const char *,void *,int,int,char);

main() {

  unsigned short Nid_cell=0;
  unsigned int Ncp = 0;
  int output00[1024];
  int output01[1024];
  int output10[1024];
  int output11[1024];

  memset(output00,0,1024*sizeof(int));
  memset(output01,0,1024*sizeof(int));  
  memset(output10,0,1024*sizeof(int));
  memset(output11,0,1024*sizeof(int));

  lte_gold(Nid_cell,Ncp);

  lte_dl_cell_spec(output00,
		   ONE_OVER_SQRT2_Q15,
		   50,
		   Nid_cell,
		   Ncp,
		   0,
		   0,
		   0,
		   0);
  
  lte_dl_cell_spec(output10,
		   ONE_OVER_SQRT2_Q15,
		   50,
		   Nid_cell,
		   Ncp,
		   0,
		   1,
		   0,
		   0);

  lte_dl_cell_spec(output01,
		   ONE_OVER_SQRT2_Q15,
		   50,
		   Nid_cell,
		   Ncp,
		   0,
		   0,
		   1,
		   0);

  lte_dl_cell_spec(output11,
		   ONE_OVER_SQRT2_Q15,
		   50,
		   Nid_cell,
		   Ncp,
		   0,
		   1,
		   1,
		   0);
  

  write_output("dl_cell_spec00.m","dl_cs00",output00,1024,1,1);
  write_output("dl_cell_spec01.m","dl_cs01",output01,1024,1,1);
  write_output("dl_cell_spec10.m","dl_cs10",output10,1024,1,1);  
  write_output("dl_cell_spec11.m","dl_cs11",output11,1024,1,1);
}		   
  
#endif
