/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/homes/gauthier/PROJETS/OPENAIR4G/openair2/RRM_4_RRC_LITE/src/foreign/generated_c_asn1_rrc/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "CarrierFreqGERAN.h"

static asn_TYPE_member_t asn_MBR_CarrierFreqGERAN_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqGERAN, arfcn),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueGERAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"arfcn"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqGERAN, bandIndicator),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BandIndicatorGERAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"bandIndicator"
		},
};
static ber_tlv_tag_t asn_DEF_CarrierFreqGERAN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CarrierFreqGERAN_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* arfcn at 1766 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* bandIndicator at 1768 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CarrierFreqGERAN_specs_1 = {
	sizeof(struct CarrierFreqGERAN),
	offsetof(struct CarrierFreqGERAN, _asn_ctx),
	asn_MAP_CarrierFreqGERAN_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CarrierFreqGERAN = {
	"CarrierFreqGERAN",
	"CarrierFreqGERAN",
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
	asn_DEF_CarrierFreqGERAN_tags_1,
	sizeof(asn_DEF_CarrierFreqGERAN_tags_1)
		/sizeof(asn_DEF_CarrierFreqGERAN_tags_1[0]), /* 1 */
	asn_DEF_CarrierFreqGERAN_tags_1,	/* Same as above */
	sizeof(asn_DEF_CarrierFreqGERAN_tags_1)
		/sizeof(asn_DEF_CarrierFreqGERAN_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CarrierFreqGERAN_1,
	2,	/* Elements count */
	&asn_SPC_CarrierFreqGERAN_specs_1	/* Additional specs */
};

