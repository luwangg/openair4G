/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../ASN1_files/EUTRA-RRC-Definitions.asn"
 * 	`asn1c -gen-PER`
 */

#include <asn_internal.h>

#include "SchedulingInfo.h"

static int
si_Periodicity_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
si_Periodicity_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
si_Periodicity_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	si_Periodicity_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
si_Periodicity_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	si_Periodicity_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
si_Periodicity_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	si_Periodicity_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
si_Periodicity_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	si_Periodicity_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
si_Periodicity_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	si_Periodicity_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
si_Periodicity_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	si_Periodicity_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
si_Periodicity_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	si_Periodicity_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
si_Periodicity_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	si_Periodicity_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_si_Periodicity_constr_2 = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_si_Periodicity_value2enum_2[] = {
	{ 0,	3,	"rf8" },
	{ 1,	4,	"rf16" },
	{ 2,	4,	"rf32" },
	{ 3,	4,	"rf64" },
	{ 4,	5,	"rf128" },
	{ 5,	5,	"rf256" },
	{ 6,	5,	"rf512" }
};
static unsigned int asn_MAP_si_Periodicity_enum2value_2[] = {
	4,	/* rf128(4) */
	1,	/* rf16(1) */
	5,	/* rf256(5) */
	2,	/* rf32(2) */
	6,	/* rf512(6) */
	3,	/* rf64(3) */
	0	/* rf8(0) */
};
static asn_INTEGER_specifics_t asn_SPC_si_Periodicity_specs_2 = {
	asn_MAP_si_Periodicity_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_si_Periodicity_enum2value_2,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_si_Periodicity_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_si_Periodicity_2 = {
	"si-Periodicity",
	"si-Periodicity",
	si_Periodicity_2_free,
	si_Periodicity_2_print,
	si_Periodicity_2_constraint,
	si_Periodicity_2_decode_ber,
	si_Periodicity_2_encode_der,
	si_Periodicity_2_decode_xer,
	si_Periodicity_2_encode_xer,
	si_Periodicity_2_decode_uper,
	si_Periodicity_2_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_si_Periodicity_tags_2,
	sizeof(asn_DEF_si_Periodicity_tags_2)
		/sizeof(asn_DEF_si_Periodicity_tags_2[0]) - 1, /* 1 */
	asn_DEF_si_Periodicity_tags_2,	/* Same as above */
	sizeof(asn_DEF_si_Periodicity_tags_2)
		/sizeof(asn_DEF_si_Periodicity_tags_2[0]), /* 2 */
	&asn_PER_type_si_Periodicity_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_si_Periodicity_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SchedulingInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SchedulingInfo, si_Periodicity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_si_Periodicity_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"si-Periodicity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SchedulingInfo, sib_MappingInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SIB_MappingInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sib-MappingInfo"
		},
};
static ber_tlv_tag_t asn_DEF_SchedulingInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SchedulingInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* si-Periodicity at 736 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sib-MappingInfo at 738 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SchedulingInfo_specs_1 = {
	sizeof(struct SchedulingInfo),
	offsetof(struct SchedulingInfo, _asn_ctx),
	asn_MAP_SchedulingInfo_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SchedulingInfo = {
	"SchedulingInfo",
	"SchedulingInfo",
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
	asn_DEF_SchedulingInfo_tags_1,
	sizeof(asn_DEF_SchedulingInfo_tags_1)
		/sizeof(asn_DEF_SchedulingInfo_tags_1[0]), /* 1 */
	asn_DEF_SchedulingInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_SchedulingInfo_tags_1)
		/sizeof(asn_DEF_SchedulingInfo_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SchedulingInfo_1,
	2,	/* Elements count */
	&asn_SPC_SchedulingInfo_specs_1	/* Additional specs */
};

