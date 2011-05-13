/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/homes/gauthier/PROJETS/OPENAIR4G/openair2/RRM_4_RRC_LITE/src/foreign/generated_c_asn1_rrc/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_DL_CCCH_MessageType_H_
#define	_DL_CCCH_MessageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRCConnectionReestablishment.h"
#include "RRCConnectionReestablishmentReject.h"
#include "RRCConnectionReject.h"
#include "RRCConnectionSetup.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_CCCH_MessageType_PR {
	DL_CCCH_MessageType_PR_NOTHING,	/* No components present */
	DL_CCCH_MessageType_PR_c1,
	DL_CCCH_MessageType_PR_messageClassExtension
} DL_CCCH_MessageType_PR;
typedef enum DL_CCCH_MessageType__c1_PR {
	DL_CCCH_MessageType__c1_PR_NOTHING,	/* No components present */
	DL_CCCH_MessageType__c1_PR_rrcConnectionReestablishment,
	DL_CCCH_MessageType__c1_PR_rrcConnectionReestablishmentReject,
	DL_CCCH_MessageType__c1_PR_rrcConnectionReject,
	DL_CCCH_MessageType__c1_PR_rrcConnectionSetup
} DL_CCCH_MessageType__c1_PR;

/* DL-CCCH-MessageType */
typedef struct DL_CCCH_MessageType {
	DL_CCCH_MessageType_PR present;
	union DL_CCCH_MessageType_u {
		struct DL_CCCH_MessageType__c1 {
			DL_CCCH_MessageType__c1_PR present;
			union DL_CCCH_MessageType__c1_u {
				RRCConnectionReestablishment_t	 rrcConnectionReestablishment;
				RRCConnectionReestablishmentReject_t	 rrcConnectionReestablishmentReject;
				RRCConnectionReject_t	 rrcConnectionReject;
				RRCConnectionSetup_t	 rrcConnectionSetup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} c1;
		struct DL_CCCH_MessageType__messageClassExtension {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_CCCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_CCCH_MessageType;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_CCCH_MessageType_H_ */
#include <asn_internal.h>
