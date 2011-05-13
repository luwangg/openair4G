/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/homes/gauthier/PROJETS/OPENAIR4G/openair2/RRM_4_RRC_LITE/src/foreign/generated_c_asn1_rrc/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_BlackCellsToAddMod_H_
#define	_BlackCellsToAddMod_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "PhysCellIdRange.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* BlackCellsToAddMod */
typedef struct BlackCellsToAddMod {
	long	 cellIndex;
	PhysCellIdRange_t	 physCellIdRange;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BlackCellsToAddMod_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BlackCellsToAddMod;

#ifdef __cplusplus
}
#endif

#endif	/* _BlackCellsToAddMod_H_ */
#include <asn_internal.h>
