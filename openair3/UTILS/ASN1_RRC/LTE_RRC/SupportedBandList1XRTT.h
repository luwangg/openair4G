/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SupportedBandList1XRTT_H_
#define	_SupportedBandList1XRTT_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BandclassCDMA2000.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SupportedBandList1XRTT */
typedef struct SupportedBandList1XRTT {
	A_SEQUENCE_OF(BandclassCDMA2000_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SupportedBandList1XRTT_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SupportedBandList1XRTT;

#ifdef __cplusplus
}
#endif

#endif	/* _SupportedBandList1XRTT_H_ */
