/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     src/proto/grpc/gcp/altscontext.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef SRC_PROTO_GRPC_GCP_ALTSCONTEXT_PROTO_UPBDEFS_H_
#define SRC_PROTO_GRPC_GCP_ALTSCONTEXT_PROTO_UPBDEFS_H_

#include "upb/def.h"
#include "upb/port_def.inc"
#ifdef __cplusplus
extern "C" {
#endif

#include "upb/def.h"

#include "upb/port_def.inc"

extern upb_def_init src_proto_grpc_gcp_altscontext_proto_upbdefinit;

UPB_INLINE const upb_msgdef *grpc_gcp_AltsContext_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &src_proto_grpc_gcp_altscontext_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "grpc.gcp.AltsContext");
}

UPB_INLINE const upb_msgdef *grpc_gcp_AltsContext_PeerAttributesEntry_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &src_proto_grpc_gcp_altscontext_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "grpc.gcp.AltsContext.PeerAttributesEntry");
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* SRC_PROTO_GRPC_GCP_ALTSCONTEXT_PROTO_UPBDEFS_H_ */
