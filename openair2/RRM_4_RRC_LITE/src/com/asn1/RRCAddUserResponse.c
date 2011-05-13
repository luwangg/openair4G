/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRM-RRC-Definitions"
 * 	found in "/homes/gauthier/PROJETS/OPENAIR4G/openair2/RRM_4_RRC_LITE/src/com/asn1/rrc-rrm.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "RRCAddUserResponse.h"

static asn_TYPE_member_t asn_MBR_RRCAddUserResponse_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCAddUserResponse, transactionId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransactionId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"transactionId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCAddUserResponse, rrm_Response_Status),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OpenAir_RRM_Response_Status,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrm-Response-Status"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCAddUserResponse, rrm_Response_Reason),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OpenAir_RRM_Response_Reason,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrm-Response-Reason"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCAddUserResponse, e_NodeB_Identity),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_NodeB_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-NodeB-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCAddUserResponse, c_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OpenAir_C_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"c-RNTI"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCAddUserResponse, radioResourceConfigDedicatedE_NodeB),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigDedicated,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"radioResourceConfigDedicatedE-NodeB"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCAddUserResponse, radioResourceConfigDedicatedMobile),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigDedicated,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"radioResourceConfigDedicatedMobile"
		},
};
static int asn_MAP_RRCAddUserResponse_oms_1[] = { 5, 6 };
static ber_tlv_tag_t asn_DEF_RRCAddUserResponse_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RRCAddUserResponse_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* transactionId at 127 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rrm-Response-Status at 128 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rrm-Response-Reason at 129 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* e-NodeB-Identity at 130 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* c-RNTI at 131 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* radioResourceConfigDedicatedE-NodeB at 132 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* radioResourceConfigDedicatedMobile at 133 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRCAddUserResponse_specs_1 = {
	sizeof(struct RRCAddUserResponse),
	offsetof(struct RRCAddUserResponse, _asn_ctx),
	asn_MAP_RRCAddUserResponse_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_RRCAddUserResponse_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RRCAddUserResponse = {
	"RRCAddUserResponse",
	"RRCAddUserResponse",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RRCAddUserResponse_tags_1,
	sizeof(asn_DEF_RRCAddUserResponse_tags_1)
		/sizeof(asn_DEF_RRCAddUserResponse_tags_1[0]), /* 1 */
	asn_DEF_RRCAddUserResponse_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCAddUserResponse_tags_1)
		/sizeof(asn_DEF_RRCAddUserResponse_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RRCAddUserResponse_1,
	7,	/* Elements count */
	&asn_SPC_RRCAddUserResponse_specs_1	/* Additional specs */
};

