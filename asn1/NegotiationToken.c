/*
 * Generated by asn1c-0.9.22.1409 (http://lionet.info/asn1c)
 * From ASN.1 module "SPNEGO"
 * 	found in "spnego.asn1"
 * 	`asn1c -fnative-types -fskeletons-copy`
 */

#include <asn_internal.h>

#include "NegotiationToken.h"

static asn_per_constraints_t asn_PER_type_NegotiationToken_constr_1 = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NegotiationToken_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NegotiationToken, choice.negTokenInit),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NegTokenInit,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"negTokenInit"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NegotiationToken, choice.negTokenResp),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NegTokenResp,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"negTokenResp"
		},
};
static asn_TYPE_tag2member_t asn_MAP_NegotiationToken_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* negTokenInit at 10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* negTokenResp at 12 */
};
static asn_CHOICE_specifics_t asn_SPC_NegotiationToken_specs_1 = {
	sizeof(struct NegotiationToken),
	offsetof(struct NegotiationToken, _asn_ctx),
	offsetof(struct NegotiationToken, present),
	sizeof(((struct NegotiationToken *)0)->present),
	asn_MAP_NegotiationToken_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_NegotiationToken = {
	"NegotiationToken",
	"NegotiationToken",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_NegotiationToken_constr_1,
	asn_MBR_NegotiationToken_1,
	2,	/* Elements count */
	&asn_SPC_NegotiationToken_specs_1	/* Additional specs */
};

