/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SchedulingInfo_H_
#define	_SchedulingInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>
#include "SIB-MappingInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SchedulingInfo__si_Periodicity {
	SchedulingInfo__si_Periodicity_rf8	= 0,
	SchedulingInfo__si_Periodicity_rf16	= 1,
	SchedulingInfo__si_Periodicity_rf32	= 2,
	SchedulingInfo__si_Periodicity_rf64	= 3,
	SchedulingInfo__si_Periodicity_rf128	= 4,
	SchedulingInfo__si_Periodicity_rf256	= 5,
	SchedulingInfo__si_Periodicity_rf512	= 6
} e_SchedulingInfo__si_Periodicity;

/* SchedulingInfo */
typedef struct SchedulingInfo {
	ENUMERATED_t	 si_Periodicity;
	SIB_MappingInfo_t	 sib_MappingInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SchedulingInfo_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_si_Periodicity_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SchedulingInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _SchedulingInfo_H_ */
