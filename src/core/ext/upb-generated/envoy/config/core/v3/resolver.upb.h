/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/core/v3/resolver.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_CONFIG_CORE_V3_RESOLVER_PROTO_UPB_H_
#define ENVOY_CONFIG_CORE_V3_RESOLVER_PROTO_UPB_H_

#include "upb/msg.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_config_core_v3_DnsResolverOptions;
struct envoy_config_core_v3_DnsResolutionConfig;
typedef struct envoy_config_core_v3_DnsResolverOptions envoy_config_core_v3_DnsResolverOptions;
typedef struct envoy_config_core_v3_DnsResolutionConfig envoy_config_core_v3_DnsResolutionConfig;
extern const upb_msglayout envoy_config_core_v3_DnsResolverOptions_msginit;
extern const upb_msglayout envoy_config_core_v3_DnsResolutionConfig_msginit;
struct envoy_config_core_v3_Address;
extern const upb_msglayout envoy_config_core_v3_Address_msginit;


/* envoy.config.core.v3.DnsResolverOptions */

UPB_INLINE envoy_config_core_v3_DnsResolverOptions *envoy_config_core_v3_DnsResolverOptions_new(upb_arena *arena) {
  return (envoy_config_core_v3_DnsResolverOptions *)_upb_msg_new(&envoy_config_core_v3_DnsResolverOptions_msginit, arena);
}
UPB_INLINE envoy_config_core_v3_DnsResolverOptions *envoy_config_core_v3_DnsResolverOptions_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_config_core_v3_DnsResolverOptions *ret = envoy_config_core_v3_DnsResolverOptions_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_config_core_v3_DnsResolverOptions_msginit, arena)) ? ret : NULL;
}
UPB_INLINE envoy_config_core_v3_DnsResolverOptions *envoy_config_core_v3_DnsResolverOptions_parse_ex(const char *buf, size_t size,
                           upb_arena *arena, int options) {
  envoy_config_core_v3_DnsResolverOptions *ret = envoy_config_core_v3_DnsResolverOptions_new(arena);
  return (ret && _upb_decode(buf, size, ret, &envoy_config_core_v3_DnsResolverOptions_msginit, arena, options))
      ? ret : NULL;
}
UPB_INLINE char *envoy_config_core_v3_DnsResolverOptions_serialize(const envoy_config_core_v3_DnsResolverOptions *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_config_core_v3_DnsResolverOptions_msginit, arena, len);
}

UPB_INLINE bool envoy_config_core_v3_DnsResolverOptions_use_tcp_for_dns_lookups(const envoy_config_core_v3_DnsResolverOptions *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), bool); }
UPB_INLINE bool envoy_config_core_v3_DnsResolverOptions_no_default_search_domain(const envoy_config_core_v3_DnsResolverOptions *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(1, 1), bool); }

UPB_INLINE void envoy_config_core_v3_DnsResolverOptions_set_use_tcp_for_dns_lookups(envoy_config_core_v3_DnsResolverOptions *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), bool) = value;
}
UPB_INLINE void envoy_config_core_v3_DnsResolverOptions_set_no_default_search_domain(envoy_config_core_v3_DnsResolverOptions *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(1, 1), bool) = value;
}

/* envoy.config.core.v3.DnsResolutionConfig */

UPB_INLINE envoy_config_core_v3_DnsResolutionConfig *envoy_config_core_v3_DnsResolutionConfig_new(upb_arena *arena) {
  return (envoy_config_core_v3_DnsResolutionConfig *)_upb_msg_new(&envoy_config_core_v3_DnsResolutionConfig_msginit, arena);
}
UPB_INLINE envoy_config_core_v3_DnsResolutionConfig *envoy_config_core_v3_DnsResolutionConfig_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_config_core_v3_DnsResolutionConfig *ret = envoy_config_core_v3_DnsResolutionConfig_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_config_core_v3_DnsResolutionConfig_msginit, arena)) ? ret : NULL;
}
UPB_INLINE envoy_config_core_v3_DnsResolutionConfig *envoy_config_core_v3_DnsResolutionConfig_parse_ex(const char *buf, size_t size,
                           upb_arena *arena, int options) {
  envoy_config_core_v3_DnsResolutionConfig *ret = envoy_config_core_v3_DnsResolutionConfig_new(arena);
  return (ret && _upb_decode(buf, size, ret, &envoy_config_core_v3_DnsResolutionConfig_msginit, arena, options))
      ? ret : NULL;
}
UPB_INLINE char *envoy_config_core_v3_DnsResolutionConfig_serialize(const envoy_config_core_v3_DnsResolutionConfig *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_config_core_v3_DnsResolutionConfig_msginit, arena, len);
}

UPB_INLINE bool envoy_config_core_v3_DnsResolutionConfig_has_resolvers(const envoy_config_core_v3_DnsResolutionConfig *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(8, 16)); }
UPB_INLINE const struct envoy_config_core_v3_Address* const* envoy_config_core_v3_DnsResolutionConfig_resolvers(const envoy_config_core_v3_DnsResolutionConfig *msg, size_t *len) { return (const struct envoy_config_core_v3_Address* const*)_upb_array_accessor(msg, UPB_SIZE(8, 16), len); }
UPB_INLINE bool envoy_config_core_v3_DnsResolutionConfig_has_dns_resolver_options(const envoy_config_core_v3_DnsResolutionConfig *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const envoy_config_core_v3_DnsResolverOptions* envoy_config_core_v3_DnsResolutionConfig_dns_resolver_options(const envoy_config_core_v3_DnsResolutionConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), const envoy_config_core_v3_DnsResolverOptions*); }

UPB_INLINE struct envoy_config_core_v3_Address** envoy_config_core_v3_DnsResolutionConfig_mutable_resolvers(envoy_config_core_v3_DnsResolutionConfig *msg, size_t *len) {
  return (struct envoy_config_core_v3_Address**)_upb_array_mutable_accessor(msg, UPB_SIZE(8, 16), len);
}
UPB_INLINE struct envoy_config_core_v3_Address** envoy_config_core_v3_DnsResolutionConfig_resize_resolvers(envoy_config_core_v3_DnsResolutionConfig *msg, size_t len, upb_arena *arena) {
  return (struct envoy_config_core_v3_Address**)_upb_array_resize_accessor2(msg, UPB_SIZE(8, 16), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct envoy_config_core_v3_Address* envoy_config_core_v3_DnsResolutionConfig_add_resolvers(envoy_config_core_v3_DnsResolutionConfig *msg, upb_arena *arena) {
  struct envoy_config_core_v3_Address* sub = (struct envoy_config_core_v3_Address*)_upb_msg_new(&envoy_config_core_v3_Address_msginit, arena);
  bool ok = _upb_array_append_accessor2(
      msg, UPB_SIZE(8, 16), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}
UPB_INLINE void envoy_config_core_v3_DnsResolutionConfig_set_dns_resolver_options(envoy_config_core_v3_DnsResolutionConfig *msg, envoy_config_core_v3_DnsResolverOptions* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), envoy_config_core_v3_DnsResolverOptions*) = value;
}
UPB_INLINE struct envoy_config_core_v3_DnsResolverOptions* envoy_config_core_v3_DnsResolutionConfig_mutable_dns_resolver_options(envoy_config_core_v3_DnsResolutionConfig *msg, upb_arena *arena) {
  struct envoy_config_core_v3_DnsResolverOptions* sub = (struct envoy_config_core_v3_DnsResolverOptions*)envoy_config_core_v3_DnsResolutionConfig_dns_resolver_options(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_core_v3_DnsResolverOptions*)_upb_msg_new(&envoy_config_core_v3_DnsResolverOptions_msginit, arena);
    if (!sub) return NULL;
    envoy_config_core_v3_DnsResolutionConfig_set_dns_resolver_options(msg, sub);
  }
  return sub;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_CONFIG_CORE_V3_RESOLVER_PROTO_UPB_H_ */