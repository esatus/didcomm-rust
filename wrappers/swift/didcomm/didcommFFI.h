// This file was autogenerated by some hot garbage in the `uniffi` crate.
// Trust me, you don't want to mess with it!

#pragma once

#include <stdbool.h>
#include <stdint.h>

// The following structs are used to implement the lowest level
// of the FFI, and thus useful to multiple uniffied crates.
// We ensure they are declared exactly once, with a header guard, UNIFFI_SHARED_H.
#ifdef UNIFFI_SHARED_H
    // We also try to prevent mixing versions of shared uniffi header structs.
    // If you add anything to the #else block, you must increment the version suffix in UNIFFI_SHARED_HEADER_V3
    #ifndef UNIFFI_SHARED_HEADER_V3
        #error Combining helper code from multiple versions of uniffi is not supported
    #endif // ndef UNIFFI_SHARED_HEADER_V3
#else
#define UNIFFI_SHARED_H
#define UNIFFI_SHARED_HEADER_V3
// ⚠️ Attention: If you change this #else block (ending in `#endif // def UNIFFI_SHARED_H`) you *must* ⚠️
// ⚠️ increment the version suffix in all instances of UNIFFI_SHARED_HEADER_V3 in this file.           ⚠️

typedef struct RustBuffer
{
    int32_t capacity;
    int32_t len;
    uint8_t *_Nullable data;
} RustBuffer;

typedef RustBuffer (*ForeignCallback)(uint64_t, int32_t, RustBuffer);

typedef struct ForeignBytes
{
    int32_t len;
    const uint8_t *_Nullable data;
} ForeignBytes;

// Error definitions
typedef struct RustCallStatus {
    int8_t code;
    RustBuffer errorBuf;
} RustCallStatus;

// ⚠️ Attention: If you change this #else block (ending in `#endif // def UNIFFI_SHARED_H`) you *must* ⚠️
// ⚠️ increment the version suffix in all instances of UNIFFI_SHARED_HEADER_V3 in this file.           ⚠️
#endif // def UNIFFI_SHARED_H

void ffi_didcomm_f269_DIDComm_object_free(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull didcomm_f269_DIDComm_new(
      uint64_t did_resolver,uint64_t secret_resolver,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer didcomm_f269_DIDComm_pack_plaintext(
      void*_Nonnull ptr,RustBuffer msg,uint64_t cb,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer didcomm_f269_DIDComm_pack_signed(
      void*_Nonnull ptr,RustBuffer msg,RustBuffer sign_by,uint64_t cb,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer didcomm_f269_DIDComm_pack_encrypted(
      void*_Nonnull ptr,RustBuffer msg,RustBuffer to,RustBuffer from,RustBuffer sign_by,RustBuffer options,uint64_t cb,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer didcomm_f269_DIDComm_unpack(
      void*_Nonnull ptr,RustBuffer msg,RustBuffer options,uint64_t cb,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer didcomm_f269_DIDComm_pack_from_prior(
      void*_Nonnull ptr,RustBuffer msg,RustBuffer issuer_kid,uint64_t cb,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer didcomm_f269_DIDComm_unpack_from_prior(
      void*_Nonnull ptr,RustBuffer from_prior_jwt,uint64_t cb,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer didcomm_f269_DIDComm_wrap_in_forward(
      void*_Nonnull ptr,RustBuffer msg,RustBuffer headers,RustBuffer to,RustBuffer routing_keys,RustBuffer enc_alg_anon,uint64_t cb,
    RustCallStatus *_Nonnull out_status
    );
void ffi_didcomm_f269_OnDIDResolverResult_object_free(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void didcomm_f269_OnDIDResolverResult_success(
      void*_Nonnull ptr,RustBuffer result,
    RustCallStatus *_Nonnull out_status
    );
void didcomm_f269_OnDIDResolverResult_error(
      void*_Nonnull ptr,RustBuffer err,RustBuffer msg,
    RustCallStatus *_Nonnull out_status
    );
void ffi_didcomm_f269_ExampleDIDResolver_object_free(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull didcomm_f269_ExampleDIDResolver_new(
      RustBuffer known_dids,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer didcomm_f269_ExampleDIDResolver_resolve(
      void*_Nonnull ptr,RustBuffer did,void*_Nonnull cb,
    RustCallStatus *_Nonnull out_status
    );
void ffi_didcomm_f269_OnGetSecretResult_object_free(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void didcomm_f269_OnGetSecretResult_success(
      void*_Nonnull ptr,RustBuffer result,
    RustCallStatus *_Nonnull out_status
    );
void didcomm_f269_OnGetSecretResult_error(
      void*_Nonnull ptr,RustBuffer err,RustBuffer msg,
    RustCallStatus *_Nonnull out_status
    );
void ffi_didcomm_f269_OnFindSecretsResult_object_free(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void didcomm_f269_OnFindSecretsResult_success(
      void*_Nonnull ptr,RustBuffer result,
    RustCallStatus *_Nonnull out_status
    );
void didcomm_f269_OnFindSecretsResult_error(
      void*_Nonnull ptr,RustBuffer err,RustBuffer msg,
    RustCallStatus *_Nonnull out_status
    );
void ffi_didcomm_f269_ExampleSecretsResolver_object_free(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull didcomm_f269_ExampleSecretsResolver_new(
      RustBuffer known_secrets,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer didcomm_f269_ExampleSecretsResolver_get_secret(
      void*_Nonnull ptr,RustBuffer secret_id,void*_Nonnull cb,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer didcomm_f269_ExampleSecretsResolver_find_secrets(
      void*_Nonnull ptr,RustBuffer secret_ids,void*_Nonnull cb,
    RustCallStatus *_Nonnull out_status
    );
void ffi_didcomm_f269_DIDResolver_init_callback(
      ForeignCallback  _Nonnull callback_stub,
    RustCallStatus *_Nonnull out_status
    );
void ffi_didcomm_f269_SecretsResolver_init_callback(
      ForeignCallback  _Nonnull callback_stub,
    RustCallStatus *_Nonnull out_status
    );
void ffi_didcomm_f269_OnPackSignedResult_init_callback(
      ForeignCallback  _Nonnull callback_stub,
    RustCallStatus *_Nonnull out_status
    );
void ffi_didcomm_f269_OnPackEncryptedResult_init_callback(
      ForeignCallback  _Nonnull callback_stub,
    RustCallStatus *_Nonnull out_status
    );
void ffi_didcomm_f269_OnPackPlaintextResult_init_callback(
      ForeignCallback  _Nonnull callback_stub,
    RustCallStatus *_Nonnull out_status
    );
void ffi_didcomm_f269_OnUnpackResult_init_callback(
      ForeignCallback  _Nonnull callback_stub,
    RustCallStatus *_Nonnull out_status
    );
void ffi_didcomm_f269_OnFromPriorPackResult_init_callback(
      ForeignCallback  _Nonnull callback_stub,
    RustCallStatus *_Nonnull out_status
    );
void ffi_didcomm_f269_OnFromPriorUnpackResult_init_callback(
      ForeignCallback  _Nonnull callback_stub,
    RustCallStatus *_Nonnull out_status
    );
void ffi_didcomm_f269_OnWrapInForwardResult_init_callback(
      ForeignCallback  _Nonnull callback_stub,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer ffi_didcomm_f269_rustbuffer_alloc(
      int32_t size,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer ffi_didcomm_f269_rustbuffer_from_bytes(
      ForeignBytes bytes,
    RustCallStatus *_Nonnull out_status
    );
void ffi_didcomm_f269_rustbuffer_free(
      RustBuffer buf,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer ffi_didcomm_f269_rustbuffer_reserve(
      RustBuffer buf,int32_t additional,
    RustCallStatus *_Nonnull out_status
    );
