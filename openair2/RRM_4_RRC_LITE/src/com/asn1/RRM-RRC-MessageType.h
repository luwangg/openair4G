/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRM-RRC-Definitions"
 * 	found in "/homes/gauthier/PROJETS/OPENAIR4G/openair2/RRM_4_RRC_LITE/src/com/asn1/rrc-rrm.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#ifndef	_RRM_RRC_MessageType_H_
#define	_RRM_RRC_MessageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRCSystemConfigurationResponse.h"
#include "RRCAddUserResponse.h"
#include "RRCAddDataRadioBearerResponse.h"
#include "RRCRemoveUserResponse.h"
#include "RRCRemoveDataRadioBearerResponse.h"
#include "RRCUserReconfiguration.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRM_RRC_MessageType_PR {
	RRM_RRC_MessageType_PR_NOTHING,	/* No components present */
	RRM_RRC_MessageType_PR_c1,
	RRM_RRC_MessageType_PR_messageClassExtension
} RRM_RRC_MessageType_PR;
typedef enum RRM_RRC_MessageType__c1_PR {
	RRM_RRC_MessageType__c1_PR_NOTHING,	/* No components present */
	RRM_RRC_MessageType__c1_PR_rrcSystemConfigurationResponse,
	RRM_RRC_MessageType__c1_PR_rrcAddUserResponse,
	RRM_RRC_MessageType__c1_PR_rrcAddDataRadioBearerResponse,
	RRM_RRC_MessageType__c1_PR_rrcRemoveUserResponse,
	RRM_RRC_MessageType__c1_PR_rrcRemoveDataRadioBearerResponse,
	RRM_RRC_MessageType__c1_PR_rrcUserReconfiguration
} RRM_RRC_MessageType__c1_PR;

/* RRM-RRC-MessageType */
typedef struct RRM_RRC_MessageType {
	RRM_RRC_MessageType_PR present;
	union RRM_RRC_MessageType_u {
		struct RRM_RRC_MessageType__c1 {
			RRM_RRC_MessageType__c1_PR present;
			union RRM_RRC_MessageType__c1_u {
				RRCSystemConfigurationResponse_t	 rrcSystemConfigurationResponse;
				RRCAddUserResponse_t	 rrcAddUserResponse;
				RRCAddDataRadioBearerResponse_t	 rrcAddDataRadioBearerResponse;
				RRCRemoveUserResponse_t	 rrcRemoveUserResponse;
				RRCRemoveDataRadioBearerResponse_t	 rrcRemoveDataRadioBearerResponse;
				RRCUserReconfiguration_t	 rrcUserReconfiguration;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} c1;
		struct RRM_RRC_MessageType__messageClassExtension {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRM_RRC_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRM_RRC_MessageType;

#ifdef __cplusplus
}
#endif

#endif	/* _RRM_RRC_MessageType_H_ */
#include <asn_internal.h>
