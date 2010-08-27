/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER`
 */

#include <asn_internal.h>

#include "PhysCellIdRange.h"

static int
range_3_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_ENUMERATED.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using ENUMERATED,
 * so here we adjust the DEF accordingly.
 */
static void
range_3_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_ENUMERATED.free_struct;
	td->print_struct   = asn_DEF_ENUMERATED.print_struct;
	td->ber_decoder    = asn_DEF_ENUMERATED.ber_decoder;
	td->der_encoder    = asn_DEF_ENUMERATED.der_encoder;
	td->xer_decoder    = asn_DEF_ENUMERATED.xer_decoder;
	td->xer_encoder    = asn_DEF_ENUMERATED.xer_encoder;
	td->uper_decoder   = asn_DEF_ENUMERATED.uper_decoder;
	td->uper_encoder   = asn_DEF_ENUMERATED.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_ENUMERATED.per_constraints;
	td->elements       = asn_DEF_ENUMERATED.elements;
	td->elements_count = asn_DEF_ENUMERATED.elements_count;
     /* td->specifics      = asn_DEF_ENUMERATED.specifics;	// Defined explicitly */
}

static void
range_3_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	range_3_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
range_3_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	range_3_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
range_3_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	range_3_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
range_3_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	range_3_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
range_3_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	range_3_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
range_3_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	range_3_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
range_3_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	range_3_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
range_3_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	range_3_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_range_constr_3 = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_range_value2enum_3[] = {
	{ 0,	2,	"n4" },
	{ 1,	2,	"n8" },
	{ 2,	3,	"n12" },
	{ 3,	3,	"n16" },
	{ 4,	3,	"n24" },
	{ 5,	3,	"n32" },
	{ 6,	3,	"n48" },
	{ 7,	3,	"n64" },
	{ 8,	3,	"n84" },
	{ 9,	3,	"n96" },
	{ 10,	4,	"n128" },
	{ 11,	4,	"n168" },
	{ 12,	4,	"n252" },
	{ 13,	4,	"n504" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static unsigned int asn_MAP_range_enum2value_3[] = {
	2,	/* n12(2) */
	10,	/* n128(10) */
	3,	/* n16(3) */
	11,	/* n168(11) */
	4,	/* n24(4) */
	12,	/* n252(12) */
	5,	/* n32(5) */
	0,	/* n4(0) */
	6,	/* n48(6) */
	13,	/* n504(13) */
	7,	/* n64(7) */
	1,	/* n8(1) */
	8,	/* n84(8) */
	9,	/* n96(9) */
	15,	/* spare1(15) */
	14	/* spare2(14) */
};
static asn_INTEGER_specifics_t asn_SPC_range_specs_3 = {
	asn_MAP_range_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_range_enum2value_3,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_range_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_range_3 = {
	"range",
	"range",
	range_3_free,
	range_3_print,
	range_3_constraint,
	range_3_decode_ber,
	range_3_encode_der,
	range_3_decode_xer,
	range_3_encode_xer,
	range_3_decode_uper,
	range_3_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_range_tags_3,
	sizeof(asn_DEF_range_tags_3)
		/sizeof(asn_DEF_range_tags_3[0]) - 1, /* 1 */
	asn_DEF_range_tags_3,	/* Same as above */
	sizeof(asn_DEF_range_tags_3)
		/sizeof(asn_DEF_range_tags_3[0]), /* 2 */
	&asn_PER_type_range_constr_3,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_range_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PhysCellIdRange_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PhysCellIdRange, start),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"start"
		},
	{ ATF_POINTER, 1, offsetof(struct PhysCellIdRange, range),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_range_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"range"
		},
};
static int asn_MAP_PhysCellIdRange_oms_1[] = { 1 };
static ber_tlv_tag_t asn_DEF_PhysCellIdRange_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PhysCellIdRange_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* start at 1891 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* range at 1893 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PhysCellIdRange_specs_1 = {
	sizeof(struct PhysCellIdRange),
	offsetof(struct PhysCellIdRange, _asn_ctx),
	asn_MAP_PhysCellIdRange_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_PhysCellIdRange_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PhysCellIdRange = {
	"PhysCellIdRange",
	"PhysCellIdRange",
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
	asn_DEF_PhysCellIdRange_tags_1,
	sizeof(asn_DEF_PhysCellIdRange_tags_1)
		/sizeof(asn_DEF_PhysCellIdRange_tags_1[0]), /* 1 */
	asn_DEF_PhysCellIdRange_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhysCellIdRange_tags_1)
		/sizeof(asn_DEF_PhysCellIdRange_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PhysCellIdRange_1,
	2,	/* Elements count */
	&asn_SPC_PhysCellIdRange_specs_1	/* Additional specs */
};

