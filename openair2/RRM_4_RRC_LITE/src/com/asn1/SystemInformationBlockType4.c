/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/homes/gauthier/PROJETS/OPENAIR4G/openair2/RRM_4_RRC_LITE/src/foreign/generated_c_asn1_rrc/ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER -fcompound-names -fnative-types`
 */

#include "SystemInformationBlockType4.h"

static asn_TYPE_member_t asn_MBR_SystemInformationBlockType4_1[] = {
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType4, intraFreqNeighCellList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqNeighCellList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"intraFreqNeighCellList"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType4, intraFreqBlackCellList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IntraFreqBlackCellList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"intraFreqBlackCellList"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType4, csg_PhysCellIdRange),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellIdRange,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"csg-PhysCellIdRange"
		},
};
static int asn_MAP_SystemInformationBlockType4_oms_1[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_SystemInformationBlockType4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intraFreqNeighCellList at 898 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* intraFreqBlackCellList at 899 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* csg-PhysCellIdRange at 900 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType4_specs_1 = {
	sizeof(struct SystemInformationBlockType4),
	offsetof(struct SystemInformationBlockType4, _asn_ctx),
	asn_MAP_SystemInformationBlockType4_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType4_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	2,	/* Start extensions */
	4	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType4 = {
	"SystemInformationBlockType4",
	"SystemInformationBlockType4",
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
	asn_DEF_SystemInformationBlockType4_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType4_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType4_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType4_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType4_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType4_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SystemInformationBlockType4_1,
	3,	/* Elements count */
	&asn_SPC_SystemInformationBlockType4_specs_1	/* Additional specs */
};

