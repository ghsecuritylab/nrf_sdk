/**
 * Copyright (c) 2017 - 2019, Nordic Semiconductor ASA
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form, except as embedded into a Nordic
 *    Semiconductor ASA integrated circuit in a product or a software update for
 *    such product, must reproduce the above copyright notice, this list of
 *    conditions and the following disclaimer in the documentation and/or other
 *    materials provided with the distribution.
 *
 * 3. Neither the name of Nordic Semiconductor ASA nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * 4. This software, with or without modification, must only be used with a
 *    Nordic Semiconductor ASA integrated circuit.
 *
 * 5. Any software provided in binary form under this license must not be reverse
 *    engineered, decompiled, modified and/or disassembled.
 *
 * THIS SOFTWARE IS PROVIDED BY NORDIC SEMICONDUCTOR ASA "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */



#ifndef SDK_CONFIG_H
#define SDK_CONFIG_H
// <<< Use Configuration Wizard in Context Menu >>>\n
#ifdef USE_APP_CONFIG
#include "app_config.h"
#endif
// <h> nRF_Core 

//==========================================================
// <e> NRF_MPU_LIB_ENABLED - nrf_mpu_lib - Module for MPU
//==========================================================
#ifndef NRF_MPU_LIB_ENABLED
#define NRF_MPU_LIB_ENABLED 1
#endif
// <q> NRF_MPU_LIB_CLI_CMDS  - Enable CLI commands specific to the module.
 

#ifndef NRF_MPU_LIB_CLI_CMDS
#define NRF_MPU_LIB_CLI_CMDS 0
#endif

// </e>

// <e> NRF_STACK_GUARD_ENABLED - nrf_stack_guard - Stack guard
//==========================================================
#ifndef NRF_STACK_GUARD_ENABLED
#define NRF_STACK_GUARD_ENABLED 1
#endif
// <o> NRF_STACK_GUARD_CONFIG_SIZE  - Size of the stack guard.
 
// <5=> 32 bytes 
// <6=> 64 bytes 
// <7=> 128 bytes 
// <8=> 256 bytes 
// <9=> 512 bytes 
// <10=> 1024 bytes 
// <11=> 2048 bytes 
// <12=> 4096 bytes 

#ifndef NRF_STACK_GUARD_CONFIG_SIZE
#define NRF_STACK_GUARD_CONFIG_SIZE 7
#endif

// </e>

// </h> 
//==========================================================

// <h> nRF_Crypto 

//==========================================================
// <e> NRF_CRYPTO_ENABLED - nrf_crypto - Cryptography library.
//==========================================================
#ifndef NRF_CRYPTO_ENABLED
#define NRF_CRYPTO_ENABLED 1
#endif
// <o> NRF_CRYPTO_ALLOCATOR  - Memory allocator
 

// <i> Choose memory allocator used by nrf_crypto. Default is alloca if possible or nrf_malloc otherwise. If 'User macros' are selected, the user has to create 'nrf_crypto_allocator.h' file that contains NRF_CRYPTO_ALLOC, NRF_CRYPTO_FREE, and NRF_CRYPTO_ALLOC_ON_STACK.
// <0=> Default 
// <1=> User macros 
// <2=> On stack (alloca) 
// <3=> C dynamic memory (malloc) 
// <4=> SDK Memory Manager (nrf_malloc) 

#ifndef NRF_CRYPTO_ALLOCATOR
#define NRF_CRYPTO_ALLOCATOR 0
#endif

// <e> NRF_CRYPTO_BACKEND_CC310_BL_ENABLED - Enable the ARM Cryptocell CC310 reduced backend.

// <i> The CC310 hardware-accelerated cryptography backend with reduced functionality and footprint (only available on nRF52840).
//==========================================================
#ifndef NRF_CRYPTO_BACKEND_CC310_BL_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_BL_ENABLED 0
#endif
// <q> NRF_CRYPTO_BACKEND_CC310_BL_ECC_SECP224R1_ENABLED  - Enable the secp224r1 elliptic curve support using CC310_BL.
 

#ifndef NRF_CRYPTO_BACKEND_CC310_BL_ECC_SECP224R1_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_BL_ECC_SECP224R1_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_BL_ECC_SECP256R1_ENABLED  - Enable the secp256r1 elliptic curve support using CC310_BL.
 

#ifndef NRF_CRYPTO_BACKEND_CC310_BL_ECC_SECP256R1_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_BL_ECC_SECP256R1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_BL_HASH_SHA256_ENABLED  - CC310_BL SHA-256 hash functionality.
 

// <i> CC310_BL backend implementation for hardware-accelerated SHA-256.

#ifndef NRF_CRYPTO_BACKEND_CC310_BL_HASH_SHA256_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_BL_HASH_SHA256_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_BL_HASH_AUTOMATIC_RAM_BUFFER_ENABLED  - nrf_cc310_bl buffers to RAM before running hash operation
 

// <i> Enabling this makes hashing of addresses in FLASH range possible. Size of buffer allocated for hashing is set by NRF_CRYPTO_BACKEND_CC310_BL_HASH_AUTOMATIC_RAM_BUFFER_SIZE

#ifndef NRF_CRYPTO_BACKEND_CC310_BL_HASH_AUTOMATIC_RAM_BUFFER_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_BL_HASH_AUTOMATIC_RAM_BUFFER_ENABLED 0
#endif

// <o> NRF_CRYPTO_BACKEND_CC310_BL_HASH_AUTOMATIC_RAM_BUFFER_SIZE - nrf_cc310_bl hash outputs digests in little endian 
// <i> Makes the nrf_cc310_bl hash functions output digests in little endian format. Only for use in nRF SDK DFU!

#ifndef NRF_CRYPTO_BACKEND_CC310_BL_HASH_AUTOMATIC_RAM_BUFFER_SIZE
#define NRF_CRYPTO_BACKEND_CC310_BL_HASH_AUTOMATIC_RAM_BUFFER_SIZE 4096
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_BL_INTERRUPTS_ENABLED  - Enable Interrupts while support using CC310 bl.
 

// <i> Select a library version compatible with the configuration. When interrupts are disable, a version named _noint must be used

#ifndef NRF_CRYPTO_BACKEND_CC310_BL_INTERRUPTS_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_BL_INTERRUPTS_ENABLED 1
#endif

// </e>

// <e> NRF_CRYPTO_BACKEND_CC310_ENABLED - Enable the ARM Cryptocell CC310 backend.

// <i> The CC310 hardware-accelerated cryptography backend (only available on nRF52840).
//==========================================================
#ifndef NRF_CRYPTO_BACKEND_CC310_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ENABLED 0
#endif
// <q> NRF_CRYPTO_BACKEND_CC310_AES_CBC_ENABLED  - Enable the AES CBC mode using CC310.
 

#ifndef NRF_CRYPTO_BACKEND_CC310_AES_CBC_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_AES_CBC_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_AES_CTR_ENABLED  - Enable the AES CTR mode using CC310.
 

#ifndef NRF_CRYPTO_BACKEND_CC310_AES_CTR_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_AES_CTR_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_AES_ECB_ENABLED  - Enable the AES ECB mode using CC310.
 

#ifndef NRF_CRYPTO_BACKEND_CC310_AES_ECB_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_AES_ECB_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_AES_CBC_MAC_ENABLED  - Enable the AES CBC_MAC mode using CC310.
 

#ifndef NRF_CRYPTO_BACKEND_CC310_AES_CBC_MAC_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_AES_CBC_MAC_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_AES_CMAC_ENABLED  - Enable the AES CMAC mode using CC310.
 

#ifndef NRF_CRYPTO_BACKEND_CC310_AES_CMAC_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_AES_CMAC_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_AES_CCM_ENABLED  - Enable the AES CCM mode using CC310.
 

#ifndef NRF_CRYPTO_BACKEND_CC310_AES_CCM_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_AES_CCM_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_AES_CCM_STAR_ENABLED  - Enable the AES CCM* mode using CC310.
 

#ifndef NRF_CRYPTO_BACKEND_CC310_AES_CCM_STAR_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_AES_CCM_STAR_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_CHACHA_POLY_ENABLED  - Enable the CHACHA-POLY mode using CC310.
 

#ifndef NRF_CRYPTO_BACKEND_CC310_CHACHA_POLY_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_CHACHA_POLY_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_SECP160R1_ENABLED  - Enable the secp160r1 elliptic curve support using CC310.
 

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_SECP160R1_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP160R1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_SECP160R2_ENABLED  - Enable the secp160r2 elliptic curve support using CC310.
 

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_SECP160R2_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP160R2_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_SECP192R1_ENABLED  - Enable the secp192r1 elliptic curve support using CC310.
 

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_SECP192R1_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP192R1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_SECP224R1_ENABLED  - Enable the secp224r1 elliptic curve support using CC310.
 

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_SECP224R1_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP224R1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_SECP256R1_ENABLED  - Enable the secp256r1 elliptic curve support using CC310.
 

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_SECP256R1_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP256R1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_SECP384R1_ENABLED  - Enable the secp384r1 elliptic curve support using CC310.
 

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_SECP384R1_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP384R1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_SECP521R1_ENABLED  - Enable the secp521r1 elliptic curve support using CC310.
 

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_SECP521R1_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP521R1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_SECP160K1_ENABLED  - Enable the secp160k1 elliptic curve support using CC310.
 

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_SECP160K1_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP160K1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_SECP192K1_ENABLED  - Enable the secp192k1 elliptic curve support using CC310.
 

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_SECP192K1_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP192K1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_SECP224K1_ENABLED  - Enable the secp224k1 elliptic curve support using CC310.
 

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_SECP224K1_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP224K1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_SECP256K1_ENABLED  - Enable the secp256k1 elliptic curve support using CC310.
 

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_SECP256K1_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_SECP256K1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_CURVE25519_ENABLED  - Enable the Curve25519 curve support using CC310.
 

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_CURVE25519_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_CURVE25519_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_ECC_ED25519_ENABLED  - Enable the Ed25519 curve support using CC310.
 

#ifndef NRF_CRYPTO_BACKEND_CC310_ECC_ED25519_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_ECC_ED25519_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_HASH_SHA256_ENABLED  - CC310 SHA-256 hash functionality.
 

// <i> CC310 backend implementation for hardware-accelerated SHA-256.

#ifndef NRF_CRYPTO_BACKEND_CC310_HASH_SHA256_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_HASH_SHA256_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_HASH_SHA512_ENABLED  - CC310 SHA-512 hash functionality
 

// <i> CC310 backend implementation for SHA-512 (in software).

#ifndef NRF_CRYPTO_BACKEND_CC310_HASH_SHA512_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_HASH_SHA512_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_HMAC_SHA256_ENABLED  - CC310 HMAC using SHA-256
 

// <i> CC310 backend implementation for HMAC using hardware-accelerated SHA-256.

#ifndef NRF_CRYPTO_BACKEND_CC310_HMAC_SHA256_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_HMAC_SHA256_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_HMAC_SHA512_ENABLED  - CC310 HMAC using SHA-512
 

// <i> CC310 backend implementation for HMAC using SHA-512 (in software).

#ifndef NRF_CRYPTO_BACKEND_CC310_HMAC_SHA512_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_HMAC_SHA512_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_RNG_ENABLED  - Enable RNG support using CC310.
 

#ifndef NRF_CRYPTO_BACKEND_CC310_RNG_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_RNG_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_CC310_INTERRUPTS_ENABLED  - Enable Interrupts while support using CC310.
 

// <i> Select a library version compatible with the configuration. When interrupts are disable, a version named _noint must be used

#ifndef NRF_CRYPTO_BACKEND_CC310_INTERRUPTS_ENABLED
#define NRF_CRYPTO_BACKEND_CC310_INTERRUPTS_ENABLED 1
#endif

// </e>

// <e> NRF_CRYPTO_BACKEND_CIFRA_ENABLED - Enable the Cifra backend.
//==========================================================
#ifndef NRF_CRYPTO_BACKEND_CIFRA_ENABLED
#define NRF_CRYPTO_BACKEND_CIFRA_ENABLED 0
#endif
// <q> NRF_CRYPTO_BACKEND_CIFRA_AES_EAX_ENABLED  - Enable the AES EAX mode using Cifra.
 

#ifndef NRF_CRYPTO_BACKEND_CIFRA_AES_EAX_ENABLED
#define NRF_CRYPTO_BACKEND_CIFRA_AES_EAX_ENABLED 1
#endif

// </e>

// <e> NRF_CRYPTO_BACKEND_MBEDTLS_ENABLED - Enable the mbed TLS backend.
//==========================================================
#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ENABLED 0
#endif
// <q> NRF_CRYPTO_BACKEND_MBEDTLS_AES_CBC_ENABLED  - Enable the AES CBC mode mbed TLS.
 

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_AES_CBC_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_AES_CBC_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_AES_CTR_ENABLED  - Enable the AES CTR mode using mbed TLS.
 

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_AES_CTR_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_AES_CTR_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_AES_CFB_ENABLED  - Enable the AES CFB mode using mbed TLS.
 

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_AES_CFB_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_AES_CFB_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_AES_ECB_ENABLED  - Enable the AES ECB mode using mbed TLS.
 

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_AES_ECB_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_AES_ECB_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_AES_CBC_MAC_ENABLED  - Enable the AES CBC MAC mode using mbed TLS.
 

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_AES_CBC_MAC_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_AES_CBC_MAC_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_AES_CMAC_ENABLED  - Enable the AES CMAC mode using mbed TLS.
 

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_AES_CMAC_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_AES_CMAC_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_AES_CCM_ENABLED  - Enable the AES CCM mode using mbed TLS.
 

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_AES_CCM_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_AES_CCM_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_AES_GCM_ENABLED  - Enable the AES GCM mode using mbed TLS.
 

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_AES_GCM_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_AES_GCM_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP192R1_ENABLED  - Enable secp192r1 (NIST 192-bit) curve
 

// <i> Enable this setting if you need secp192r1 (NIST 192-bit) support using MBEDTLS

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP192R1_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP192R1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP224R1_ENABLED  - Enable secp224r1 (NIST 224-bit) curve
 

// <i> Enable this setting if you need secp224r1 (NIST 224-bit) support using MBEDTLS

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP224R1_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP224R1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP256R1_ENABLED  - Enable secp256r1 (NIST 256-bit) curve
 

// <i> Enable this setting if you need secp256r1 (NIST 256-bit) support using MBEDTLS

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP256R1_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP256R1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP384R1_ENABLED  - Enable secp384r1 (NIST 384-bit) curve
 

// <i> Enable this setting if you need secp384r1 (NIST 384-bit) support using MBEDTLS

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP384R1_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP384R1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP521R1_ENABLED  - Enable secp521r1 (NIST 521-bit) curve
 

// <i> Enable this setting if you need secp521r1 (NIST 521-bit) support using MBEDTLS

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP521R1_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP521R1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP192K1_ENABLED  - Enable secp192k1 (Koblitz 192-bit) curve
 

// <i> Enable this setting if you need secp192k1 (Koblitz 192-bit) support using MBEDTLS

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP192K1_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP192K1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP224K1_ENABLED  - Enable secp224k1 (Koblitz 224-bit) curve
 

// <i> Enable this setting if you need secp224k1 (Koblitz 224-bit) support using MBEDTLS

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP224K1_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP224K1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP256K1_ENABLED  - Enable secp256k1 (Koblitz 256-bit) curve
 

// <i> Enable this setting if you need secp256k1 (Koblitz 256-bit) support using MBEDTLS

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP256K1_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_SECP256K1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_ECC_BP256R1_ENABLED  - Enable bp256r1 (Brainpool 256-bit) curve
 

// <i> Enable this setting if you need bp256r1 (Brainpool 256-bit) support using MBEDTLS

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ECC_BP256R1_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_BP256R1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_ECC_BP384R1_ENABLED  - Enable bp384r1 (Brainpool 384-bit) curve
 

// <i> Enable this setting if you need bp384r1 (Brainpool 384-bit) support using MBEDTLS

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ECC_BP384R1_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_BP384R1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_ECC_BP512R1_ENABLED  - Enable bp512r1 (Brainpool 512-bit) curve
 

// <i> Enable this setting if you need bp512r1 (Brainpool 512-bit) support using MBEDTLS

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ECC_BP512R1_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_BP512R1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_ECC_CURVE25519_ENABLED  - Enable Curve25519 curve
 

// <i> Enable this setting if you need Curve25519 support using MBEDTLS

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_ECC_CURVE25519_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_ECC_CURVE25519_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_HASH_SHA256_ENABLED  - Enable mbed TLS SHA-256 hash functionality.
 

// <i> mbed TLS backend implementation for SHA-256.

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_HASH_SHA256_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_HASH_SHA256_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_HASH_SHA512_ENABLED  - Enable mbed TLS SHA-512 hash functionality.
 

// <i> mbed TLS backend implementation for SHA-512.

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_HASH_SHA512_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_HASH_SHA512_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_HMAC_SHA256_ENABLED  - Enable mbed TLS HMAC using SHA-256.
 

// <i> mbed TLS backend implementation for HMAC using SHA-256.

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_HMAC_SHA256_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_HMAC_SHA256_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MBEDTLS_HMAC_SHA512_ENABLED  - Enable mbed TLS HMAC using SHA-512.
 

// <i> mbed TLS backend implementation for HMAC using SHA-512.

#ifndef NRF_CRYPTO_BACKEND_MBEDTLS_HMAC_SHA512_ENABLED
#define NRF_CRYPTO_BACKEND_MBEDTLS_HMAC_SHA512_ENABLED 1
#endif

// </e>

// <e> NRF_CRYPTO_BACKEND_MICRO_ECC_ENABLED - Enable the micro-ecc backend.
//==========================================================
#ifndef NRF_CRYPTO_BACKEND_MICRO_ECC_ENABLED
#define NRF_CRYPTO_BACKEND_MICRO_ECC_ENABLED 0
#endif
// <q> NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP192R1_ENABLED  - Enable secp192r1 (NIST 192-bit) curve
 

// <i> Enable this setting if you need secp192r1 (NIST 192-bit) support using micro-ecc

#ifndef NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP192R1_ENABLED
#define NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP192R1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP224R1_ENABLED  - Enable secp224r1 (NIST 224-bit) curve
 

// <i> Enable this setting if you need secp224r1 (NIST 224-bit) support using micro-ecc

#ifndef NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP224R1_ENABLED
#define NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP224R1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP256R1_ENABLED  - Enable secp256r1 (NIST 256-bit) curve
 

// <i> Enable this setting if you need secp256r1 (NIST 256-bit) support using micro-ecc

#ifndef NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP256R1_ENABLED
#define NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP256R1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP256K1_ENABLED  - Enable secp256k1 (Koblitz 256-bit) curve
 

// <i> Enable this setting if you need secp256k1 (Koblitz 256-bit) support using micro-ecc

#ifndef NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP256K1_ENABLED
#define NRF_CRYPTO_BACKEND_MICRO_ECC_ECC_SECP256K1_ENABLED 1
#endif

// </e>

// <e> NRF_CRYPTO_BACKEND_NRF_HW_RNG_ENABLED - Enable the nRF HW RNG backend.

// <i> The nRF HW backend provide access to RNG peripheral in nRF5x devices.
//==========================================================
#ifndef NRF_CRYPTO_BACKEND_NRF_HW_RNG_ENABLED
#define NRF_CRYPTO_BACKEND_NRF_HW_RNG_ENABLED 1
#endif
// <q> NRF_CRYPTO_BACKEND_NRF_HW_RNG_MBEDTLS_CTR_DRBG_ENABLED  - Enable mbed TLS CTR-DRBG algorithm.
 

// <i> Enable mbed TLS CTR-DRBG standardized by NIST (NIST SP 800-90A Rev. 1). The nRF HW RNG is used as an entropy source for seeding.

#ifndef NRF_CRYPTO_BACKEND_NRF_HW_RNG_MBEDTLS_CTR_DRBG_ENABLED
#define NRF_CRYPTO_BACKEND_NRF_HW_RNG_MBEDTLS_CTR_DRBG_ENABLED 1
#endif

// </e>

// <e> NRF_CRYPTO_BACKEND_NRF_SW_ENABLED - Enable the legacy nRFx sw for crypto.

// <i> The nRF SW cryptography backend (only used in bootloader context).
//==========================================================
#ifndef NRF_CRYPTO_BACKEND_NRF_SW_ENABLED
#define NRF_CRYPTO_BACKEND_NRF_SW_ENABLED 0
#endif
// <q> NRF_CRYPTO_BACKEND_NRF_SW_HASH_SHA256_ENABLED  - nRF SW hash backend support for SHA-256
 

// <i> The nRF SW backend provide access to nRF SDK legacy hash implementation of SHA-256.

#ifndef NRF_CRYPTO_BACKEND_NRF_SW_HASH_SHA256_ENABLED
#define NRF_CRYPTO_BACKEND_NRF_SW_HASH_SHA256_ENABLED 1
#endif

// </e>

// <e> NRF_CRYPTO_BACKEND_OBERON_ENABLED - Enable the Oberon backend

// <i> The Oberon backend
//==========================================================
#ifndef NRF_CRYPTO_BACKEND_OBERON_ENABLED
#define NRF_CRYPTO_BACKEND_OBERON_ENABLED 1
#endif
// <q> NRF_CRYPTO_BACKEND_OBERON_CHACHA_POLY_ENABLED  - Enable the CHACHA-POLY mode using Oberon.
 

#ifndef NRF_CRYPTO_BACKEND_OBERON_CHACHA_POLY_ENABLED
#define NRF_CRYPTO_BACKEND_OBERON_CHACHA_POLY_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_OBERON_ECC_SECP256R1_ENABLED  - Enable secp256r1 curve
 

// <i> Enable this setting if you need secp256r1 curve support using Oberon library

#ifndef NRF_CRYPTO_BACKEND_OBERON_ECC_SECP256R1_ENABLED
#define NRF_CRYPTO_BACKEND_OBERON_ECC_SECP256R1_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_OBERON_ECC_CURVE25519_ENABLED  - Enable Curve25519 ECDH
 

// <i> Enable this setting if you need Curve25519 ECDH support using Oberon library

#ifndef NRF_CRYPTO_BACKEND_OBERON_ECC_CURVE25519_ENABLED
#define NRF_CRYPTO_BACKEND_OBERON_ECC_CURVE25519_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_OBERON_ECC_ED25519_ENABLED  - Enable Ed25519 signature scheme
 

// <i> Enable this setting if you need Ed25519 support using Oberon library

#ifndef NRF_CRYPTO_BACKEND_OBERON_ECC_ED25519_ENABLED
#define NRF_CRYPTO_BACKEND_OBERON_ECC_ED25519_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_OBERON_HASH_SHA256_ENABLED  - Oberon SHA-256 hash functionality
 

// <i> Oberon backend implementation for SHA-256.

#ifndef NRF_CRYPTO_BACKEND_OBERON_HASH_SHA256_ENABLED
#define NRF_CRYPTO_BACKEND_OBERON_HASH_SHA256_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_OBERON_HASH_SHA512_ENABLED  - Oberon SHA-512 hash functionality
 

// <i> Oberon backend implementation for SHA-512.

#ifndef NRF_CRYPTO_BACKEND_OBERON_HASH_SHA512_ENABLED
#define NRF_CRYPTO_BACKEND_OBERON_HASH_SHA512_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_OBERON_HMAC_SHA256_ENABLED  - Oberon HMAC using SHA-256
 

// <i> Oberon backend implementation for HMAC using SHA-256.

#ifndef NRF_CRYPTO_BACKEND_OBERON_HMAC_SHA256_ENABLED
#define NRF_CRYPTO_BACKEND_OBERON_HMAC_SHA256_ENABLED 1
#endif

// <q> NRF_CRYPTO_BACKEND_OBERON_HMAC_SHA512_ENABLED  - Oberon HMAC using SHA-512
 

// <i> Oberon backend implementation for HMAC using SHA-512.

#ifndef NRF_CRYPTO_BACKEND_OBERON_HMAC_SHA512_ENABLED
#define NRF_CRYPTO_BACKEND_OBERON_HMAC_SHA512_ENABLED 1
#endif

// </e>

// <e> NRF_CRYPTO_BACKEND_OPTIGA_ENABLED - Enable the nrf_crypto Optiga Trust X backend.

// <i> Enables the nrf_crypto backend for Optiga Trust X devices.
//==========================================================
#ifndef NRF_CRYPTO_BACKEND_OPTIGA_ENABLED
#define NRF_CRYPTO_BACKEND_OPTIGA_ENABLED 0
#endif
// <q> NRF_CRYPTO_BACKEND_OPTIGA_RNG_ENABLED  - Optiga backend support for RNG
 

// <i> The Optiga backend provide external chip RNG.

#ifndef NRF_CRYPTO_BACKEND_OPTIGA_RNG_ENABLED
#define NRF_CRYPTO_BACKEND_OPTIGA_RNG_ENABLED 0
#endif

// <q> NRF_CRYPTO_BACKEND_OPTIGA_ECC_SECP256R1_ENABLED  - Optiga backend support for ECC secp256r1
 

// <i> The Optiga backend provide external chip ECC using secp256r1.

#ifndef NRF_CRYPTO_BACKEND_OPTIGA_ECC_SECP256R1_ENABLED
#define NRF_CRYPTO_BACKEND_OPTIGA_ECC_SECP256R1_ENABLED 1
#endif

// </e>

// <q> NRF_CRYPTO_CURVE25519_BIG_ENDIAN_ENABLED  - Big-endian byte order in raw Curve25519 data
 

// <i> Enable big-endian byte order in Curve25519 API, if set to 1. Use little-endian, if set to 0.

#ifndef NRF_CRYPTO_CURVE25519_BIG_ENDIAN_ENABLED
#define NRF_CRYPTO_CURVE25519_BIG_ENDIAN_ENABLED 0
#endif

// </e>

// <h> nrf_crypto_rng - RNG Configuration

//==========================================================
// <q> NRF_CRYPTO_RNG_STATIC_MEMORY_BUFFERS_ENABLED  - Use static memory buffers for context and temporary init buffer.
 

// <i> Always recommended when using the nRF HW RNG as the context and temporary buffers are small. Consider disabling if using the CC310 RNG in a RAM constrained application. In this case, memory must be provided to nrf_crypto_rng_init, or it can be allocated internally provided that NRF_CRYPTO_ALLOCATOR does not allocate memory on the stack.

#ifndef NRF_CRYPTO_RNG_STATIC_MEMORY_BUFFERS_ENABLED
#define NRF_CRYPTO_RNG_STATIC_MEMORY_BUFFERS_ENABLED 1
#endif

// <q> NRF_CRYPTO_RNG_AUTO_INIT_ENABLED  - Initialize the RNG module automatically when nrf_crypto is initialized.
 

// <i> Automatic initialization is only supported with static or internally allocated context and temporary memory.

#ifndef NRF_CRYPTO_RNG_AUTO_INIT_ENABLED
#define NRF_CRYPTO_RNG_AUTO_INIT_ENABLED 1
#endif

// </h> 
//==========================================================

// </h> 
//==========================================================

// <h> nRF_Drivers 

//==========================================================
// <e> COMP_ENABLED - nrf_drv_comp - COMP peripheral driver - legacy layer
//==========================================================
#ifndef COMP_ENABLED
#define COMP_ENABLED 1
#endif
// <o> COMP_CONFIG_REF  - Reference voltage
 
// <0=> Internal 1.2V 
// <1=> Internal 1.8V 
// <2=> Internal 2.4V 
// <4=> VDD 
// <7=> ARef 

#ifndef COMP_CONFIG_REF
#define COMP_CONFIG_REF 1
#endif

// <o> COMP_CONFIG_MAIN_MODE  - Main mode
 
// <0=> Single ended 
// <1=> Differential 

#ifndef COMP_CONFIG_MAIN_MODE
#define COMP_CONFIG_MAIN_MODE 0
#endif

// <o> COMP_CONFIG_SPEED_MODE  - Speed mode
 
// <0=> Low power 
// <1=> Normal 
// <2=> High speed 

#ifndef COMP_CONFIG_SPEED_MODE
#define COMP_CONFIG_SPEED_MODE 2
#endif

// <o> COMP_CONFIG_HYST  - Hystheresis
 
// <0=> No 
// <1=> 50mV 

#ifndef COMP_CONFIG_HYST
#define COMP_CONFIG_HYST 0
#endif

// <o> COMP_CONFIG_ISOURCE  - Current Source
 
// <0=> Off 
// <1=> 2.5 uA 
// <2=> 5 uA 
// <3=> 10 uA 

#ifndef COMP_CONFIG_ISOURCE
#define COMP_CONFIG_ISOURCE 0
#endif

// <o> COMP_CONFIG_INPUT  - Analog input
 
// <0=> 0 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef COMP_CONFIG_INPUT
#define COMP_CONFIG_INPUT 0
#endif

// <o> COMP_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef COMP_CONFIG_IRQ_PRIORITY
#define COMP_CONFIG_IRQ_PRIORITY 6
#endif

// </e>

// <q> EGU_ENABLED  - nrf_drv_swi - SWI(EGU) peripheral driver - legacy layer
 

#ifndef EGU_ENABLED
#define EGU_ENABLED 0
#endif

// <e> GPIOTE_ENABLED - nrf_drv_gpiote - GPIOTE peripheral driver - legacy layer
//==========================================================
#ifndef GPIOTE_ENABLED
#define GPIOTE_ENABLED 1
#endif
// <o> GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS - Number of lower power input pins 
#ifndef GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS
#define GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS 4
#endif

// <o> GPIOTE_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef GPIOTE_CONFIG_IRQ_PRIORITY
#define GPIOTE_CONFIG_IRQ_PRIORITY 6
#endif

// </e>

// <e> I2S_ENABLED - nrf_drv_i2s - I2S peripheral driver - legacy layer
//==========================================================
#ifndef I2S_ENABLED
#define I2S_ENABLED 1
#endif
// <o> I2S_CONFIG_SCK_PIN - SCK pin  <0-31> 


#ifndef I2S_CONFIG_SCK_PIN
#define I2S_CONFIG_SCK_PIN 31
#endif

// <o> I2S_CONFIG_LRCK_PIN - LRCK pin  <1-31> 


#ifndef I2S_CONFIG_LRCK_PIN
#define I2S_CONFIG_LRCK_PIN 30
#endif

// <o> I2S_CONFIG_MCK_PIN - MCK pin 
#ifndef I2S_CONFIG_MCK_PIN
#define I2S_CONFIG_MCK_PIN 255
#endif

// <o> I2S_CONFIG_SDOUT_PIN - SDOUT pin  <0-31> 


#ifndef I2S_CONFIG_SDOUT_PIN
#define I2S_CONFIG_SDOUT_PIN 29
#endif

// <o> I2S_CONFIG_SDIN_PIN - SDIN pin  <0-31> 


#ifndef I2S_CONFIG_SDIN_PIN
#define I2S_CONFIG_SDIN_PIN 28
#endif

// <o> I2S_CONFIG_MASTER  - Mode
 
// <0=> Master 
// <1=> Slave 

#ifndef I2S_CONFIG_MASTER
#define I2S_CONFIG_MASTER 0
#endif

// <o> I2S_CONFIG_FORMAT  - Format
 
// <0=> I2S 
// <1=> Aligned 

#ifndef I2S_CONFIG_FORMAT
#define I2S_CONFIG_FORMAT 0
#endif

// <o> I2S_CONFIG_ALIGN  - Alignment
 
// <0=> Left 
// <1=> Right 

#ifndef I2S_CONFIG_ALIGN
#define I2S_CONFIG_ALIGN 0
#endif

// <o> I2S_CONFIG_SWIDTH  - Sample width (bits)
 
// <0=> 8 
// <1=> 16 
// <2=> 24 

#ifndef I2S_CONFIG_SWIDTH
#define I2S_CONFIG_SWIDTH 1
#endif

// <o> I2S_CONFIG_CHANNELS  - Channels
 
// <0=> Stereo 
// <1=> Left 
// <2=> Right 

#ifndef I2S_CONFIG_CHANNELS
#define I2S_CONFIG_CHANNELS 1
#endif

// <o> I2S_CONFIG_MCK_SETUP  - MCK behavior
 
// <0=> Disabled 
// <2147483648=> 32MHz/2 
// <1342177280=> 32MHz/3 
// <1073741824=> 32MHz/4 
// <805306368=> 32MHz/5 
// <671088640=> 32MHz/6 
// <536870912=> 32MHz/8 
// <402653184=> 32MHz/10 
// <369098752=> 32MHz/11 
// <285212672=> 32MHz/15 
// <268435456=> 32MHz/16 
// <201326592=> 32MHz/21 
// <184549376=> 32MHz/23 
// <142606336=> 32MHz/30 
// <138412032=> 32MHz/31 
// <134217728=> 32MHz/32 
// <100663296=> 32MHz/42 
// <68157440=> 32MHz/63 
// <34340864=> 32MHz/125 

#ifndef I2S_CONFIG_MCK_SETUP
#define I2S_CONFIG_MCK_SETUP 536870912
#endif

// <o> I2S_CONFIG_RATIO  - MCK/LRCK ratio
 
// <0=> 32x 
// <1=> 48x 
// <2=> 64x 
// <3=> 96x 
// <4=> 128x 
// <5=> 192x 
// <6=> 256x 
// <7=> 384x 
// <8=> 512x 

#ifndef I2S_CONFIG_RATIO
#define I2S_CONFIG_RATIO 2000
#endif

// <o> I2S_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef I2S_CONFIG_IRQ_PRIORITY
#define I2S_CONFIG_IRQ_PRIORITY 6
#endif

// <e> I2S_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef I2S_CONFIG_LOG_ENABLED
#define I2S_CONFIG_LOG_ENABLED 0
#endif
// <o> I2S_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef I2S_CONFIG_LOG_LEVEL
#define I2S_CONFIG_LOG_LEVEL 3
#endif

// <o> I2S_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef I2S_CONFIG_INFO_COLOR
#define I2S_CONFIG_INFO_COLOR 0
#endif

// <o> I2S_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef I2S_CONFIG_DEBUG_COLOR
#define I2S_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> LPCOMP_ENABLED - nrf_drv_lpcomp - LPCOMP peripheral driver - legacy layer
//==========================================================
#ifndef LPCOMP_ENABLED
#define LPCOMP_ENABLED 1
#endif
// <o> LPCOMP_CONFIG_REFERENCE  - Reference voltage
 
// <0=> Supply 1/8 
// <1=> Supply 2/8 
// <2=> Supply 3/8 
// <3=> Supply 4/8 
// <4=> Supply 5/8 
// <5=> Supply 6/8 
// <6=> Supply 7/8 
// <8=> Supply 1/16 (nRF52) 
// <9=> Supply 3/16 (nRF52) 
// <10=> Supply 5/16 (nRF52) 
// <11=> Supply 7/16 (nRF52) 
// <12=> Supply 9/16 (nRF52) 
// <13=> Supply 11/16 (nRF52) 
// <14=> Supply 13/16 (nRF52) 
// <15=> Supply 15/16 (nRF52) 
// <7=> External Ref 0 
// <65543=> External Ref 1 

#ifndef LPCOMP_CONFIG_REFERENCE
#define LPCOMP_CONFIG_REFERENCE 3
#endif

// <o> LPCOMP_CONFIG_DETECTION  - Detection
 
// <0=> Crossing 
// <1=> Up 
// <2=> Down 

#ifndef LPCOMP_CONFIG_DETECTION
#define LPCOMP_CONFIG_DETECTION 2
#endif

// <o> LPCOMP_CONFIG_INPUT  - Analog input
 
// <0=> 0 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef LPCOMP_CONFIG_INPUT
#define LPCOMP_CONFIG_INPUT 0
#endif

// <q> LPCOMP_CONFIG_HYST  - Hysteresis
 

#ifndef LPCOMP_CONFIG_HYST
#define LPCOMP_CONFIG_HYST 0
#endif

// <o> LPCOMP_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef LPCOMP_CONFIG_IRQ_PRIORITY
#define LPCOMP_CONFIG_IRQ_PRIORITY 6
#endif

// </e>

// <e> NRFX_CLOCK_ENABLED - nrfx_clock - CLOCK peripheral driver
//==========================================================
#ifndef NRFX_CLOCK_ENABLED
#define NRFX_CLOCK_ENABLED 1
#endif
// <o> NRFX_CLOCK_CONFIG_LF_SRC  - LF Clock Source
 
// <0=> RC 
// <1=> XTAL 
// <2=> Synth 
// <131073=> External Low Swing 
// <196609=> External Full Swing 

#ifndef NRFX_CLOCK_CONFIG_LF_SRC
#define NRFX_CLOCK_CONFIG_LF_SRC 1
#endif

// <o> NRFX_CLOCK_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_CLOCK_CONFIG_IRQ_PRIORITY
#define NRFX_CLOCK_CONFIG_IRQ_PRIORITY 6
#endif

// <e> NRFX_CLOCK_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_CLOCK_CONFIG_LOG_ENABLED
#define NRFX_CLOCK_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_CLOCK_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_CLOCK_CONFIG_LOG_LEVEL
#define NRFX_CLOCK_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_CLOCK_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_CLOCK_CONFIG_INFO_COLOR
#define NRFX_CLOCK_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_CLOCK_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_CLOCK_CONFIG_DEBUG_COLOR
#define NRFX_CLOCK_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_COMP_ENABLED - nrfx_comp - COMP peripheral driver
//==========================================================
#ifndef NRFX_COMP_ENABLED
#define NRFX_COMP_ENABLED 1
#endif
// <o> NRFX_COMP_CONFIG_REF  - Reference voltage
 
// <0=> Internal 1.2V 
// <1=> Internal 1.8V 
// <2=> Internal 2.4V 
// <4=> VDD 
// <7=> ARef 

#ifndef NRFX_COMP_CONFIG_REF
#define NRFX_COMP_CONFIG_REF 1
#endif

// <o> NRFX_COMP_CONFIG_MAIN_MODE  - Main mode
 
// <0=> Single ended 
// <1=> Differential 

#ifndef NRFX_COMP_CONFIG_MAIN_MODE
#define NRFX_COMP_CONFIG_MAIN_MODE 0
#endif

// <o> NRFX_COMP_CONFIG_SPEED_MODE  - Speed mode
 
// <0=> Low power 
// <1=> Normal 
// <2=> High speed 

#ifndef NRFX_COMP_CONFIG_SPEED_MODE
#define NRFX_COMP_CONFIG_SPEED_MODE 2
#endif

// <o> NRFX_COMP_CONFIG_HYST  - Hystheresis
 
// <0=> No 
// <1=> 50mV 

#ifndef NRFX_COMP_CONFIG_HYST
#define NRFX_COMP_CONFIG_HYST 0
#endif

// <o> NRFX_COMP_CONFIG_ISOURCE  - Current Source
 
// <0=> Off 
// <1=> 2.5 uA 
// <2=> 5 uA 
// <3=> 10 uA 

#ifndef NRFX_COMP_CONFIG_ISOURCE
#define NRFX_COMP_CONFIG_ISOURCE 0
#endif

// <o> NRFX_COMP_CONFIG_INPUT  - Analog input
 
// <0=> 0 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_COMP_CONFIG_INPUT
#define NRFX_COMP_CONFIG_INPUT 0
#endif

// <o> NRFX_COMP_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_COMP_CONFIG_IRQ_PRIORITY
#define NRFX_COMP_CONFIG_IRQ_PRIORITY 6
#endif

// <e> NRFX_COMP_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_COMP_CONFIG_LOG_ENABLED
#define NRFX_COMP_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_COMP_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_COMP_CONFIG_LOG_LEVEL
#define NRFX_COMP_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_COMP_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_COMP_CONFIG_INFO_COLOR
#define NRFX_COMP_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_COMP_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_COMP_CONFIG_DEBUG_COLOR
#define NRFX_COMP_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_GPIOTE_ENABLED - nrfx_gpiote - GPIOTE peripheral driver
//==========================================================
#ifndef NRFX_GPIOTE_ENABLED
#define NRFX_GPIOTE_ENABLED 1
#endif
// <o> NRFX_GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS - Number of lower power input pins 
#ifndef NRFX_GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS
#define NRFX_GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS 1
#endif

// <o> NRFX_GPIOTE_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_GPIOTE_CONFIG_IRQ_PRIORITY
#define NRFX_GPIOTE_CONFIG_IRQ_PRIORITY 6
#endif

// <e> NRFX_GPIOTE_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_GPIOTE_CONFIG_LOG_ENABLED
#define NRFX_GPIOTE_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_GPIOTE_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_GPIOTE_CONFIG_LOG_LEVEL
#define NRFX_GPIOTE_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_GPIOTE_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_GPIOTE_CONFIG_INFO_COLOR
#define NRFX_GPIOTE_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_GPIOTE_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_GPIOTE_CONFIG_DEBUG_COLOR
#define NRFX_GPIOTE_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_I2S_ENABLED - nrfx_i2s - I2S peripheral driver
//==========================================================
#ifndef NRFX_I2S_ENABLED
#define NRFX_I2S_ENABLED 1
#endif
// <o> NRFX_I2S_CONFIG_SCK_PIN - SCK pin  <0-31> 


#ifndef NRFX_I2S_CONFIG_SCK_PIN
#define NRFX_I2S_CONFIG_SCK_PIN 31
#endif

// <o> NRFX_I2S_CONFIG_LRCK_PIN - LRCK pin  <1-31> 


#ifndef NRFX_I2S_CONFIG_LRCK_PIN
#define NRFX_I2S_CONFIG_LRCK_PIN 30
#endif

// <o> NRFX_I2S_CONFIG_MCK_PIN - MCK pin 
#ifndef NRFX_I2S_CONFIG_MCK_PIN
#define NRFX_I2S_CONFIG_MCK_PIN 255
#endif

// <o> NRFX_I2S_CONFIG_SDOUT_PIN - SDOUT pin  <0-31> 


#ifndef NRFX_I2S_CONFIG_SDOUT_PIN
#define NRFX_I2S_CONFIG_SDOUT_PIN 29
#endif

// <o> NRFX_I2S_CONFIG_SDIN_PIN - SDIN pin  <0-31> 


#ifndef NRFX_I2S_CONFIG_SDIN_PIN
#define NRFX_I2S_CONFIG_SDIN_PIN 28
#endif

// <o> NRFX_I2S_CONFIG_MASTER  - Mode
 
// <0=> Master 
// <1=> Slave 

#ifndef NRFX_I2S_CONFIG_MASTER
#define NRFX_I2S_CONFIG_MASTER 0
#endif

// <o> NRFX_I2S_CONFIG_FORMAT  - Format
 
// <0=> I2S 
// <1=> Aligned 

#ifndef NRFX_I2S_CONFIG_FORMAT
#define NRFX_I2S_CONFIG_FORMAT 0
#endif

// <o> NRFX_I2S_CONFIG_ALIGN  - Alignment
 
// <0=> Left 
// <1=> Right 

#ifndef NRFX_I2S_CONFIG_ALIGN
#define NRFX_I2S_CONFIG_ALIGN 0
#endif

// <o> NRFX_I2S_CONFIG_SWIDTH  - Sample width (bits)
 
// <0=> 8 
// <1=> 16 
// <2=> 24 

#ifndef NRFX_I2S_CONFIG_SWIDTH
#define NRFX_I2S_CONFIG_SWIDTH 1
#endif

// <o> NRFX_I2S_CONFIG_CHANNELS  - Channels
 
// <0=> Stereo 
// <1=> Left 
// <2=> Right 

#ifndef NRFX_I2S_CONFIG_CHANNELS
#define NRFX_I2S_CONFIG_CHANNELS 1
#endif

// <o> NRFX_I2S_CONFIG_MCK_SETUP  - MCK behavior
 
// <0=> Disabled 
// <2147483648=> 32MHz/2 
// <1342177280=> 32MHz/3 
// <1073741824=> 32MHz/4 
// <805306368=> 32MHz/5 
// <671088640=> 32MHz/6 
// <536870912=> 32MHz/8 
// <402653184=> 32MHz/10 
// <369098752=> 32MHz/11 
// <285212672=> 32MHz/15 
// <268435456=> 32MHz/16 
// <201326592=> 32MHz/21 
// <184549376=> 32MHz/23 
// <142606336=> 32MHz/30 
// <138412032=> 32MHz/31 
// <134217728=> 32MHz/32 
// <100663296=> 32MHz/42 
// <68157440=> 32MHz/63 
// <34340864=> 32MHz/125 

#ifndef NRFX_I2S_CONFIG_MCK_SETUP
#define NRFX_I2S_CONFIG_MCK_SETUP 536870912
#endif

// <o> NRFX_I2S_CONFIG_RATIO  - MCK/LRCK ratio
 
// <0=> 32x 
// <1=> 48x 
// <2=> 64x 
// <3=> 96x 
// <4=> 128x 
// <5=> 192x 
// <6=> 256x 
// <7=> 384x 
// <8=> 512x 

#ifndef NRFX_I2S_CONFIG_RATIO
#define NRFX_I2S_CONFIG_RATIO 2000
#endif

// <o> NRFX_I2S_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_I2S_CONFIG_IRQ_PRIORITY
#define NRFX_I2S_CONFIG_IRQ_PRIORITY 6
#endif

// <e> NRFX_I2S_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_I2S_CONFIG_LOG_ENABLED
#define NRFX_I2S_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_I2S_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_I2S_CONFIG_LOG_LEVEL
#define NRFX_I2S_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_I2S_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_I2S_CONFIG_INFO_COLOR
#define NRFX_I2S_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_I2S_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_I2S_CONFIG_DEBUG_COLOR
#define NRFX_I2S_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_LPCOMP_ENABLED - nrfx_lpcomp - LPCOMP peripheral driver
//==========================================================
#ifndef NRFX_LPCOMP_ENABLED
#define NRFX_LPCOMP_ENABLED 1
#endif
// <o> NRFX_LPCOMP_CONFIG_REFERENCE  - Reference voltage
 
// <0=> Supply 1/8 
// <1=> Supply 2/8 
// <2=> Supply 3/8 
// <3=> Supply 4/8 
// <4=> Supply 5/8 
// <5=> Supply 6/8 
// <6=> Supply 7/8 
// <8=> Supply 1/16 (nRF52) 
// <9=> Supply 3/16 (nRF52) 
// <10=> Supply 5/16 (nRF52) 
// <11=> Supply 7/16 (nRF52) 
// <12=> Supply 9/16 (nRF52) 
// <13=> Supply 11/16 (nRF52) 
// <14=> Supply 13/16 (nRF52) 
// <15=> Supply 15/16 (nRF52) 
// <7=> External Ref 0 
// <65543=> External Ref 1 

#ifndef NRFX_LPCOMP_CONFIG_REFERENCE
#define NRFX_LPCOMP_CONFIG_REFERENCE 3
#endif

// <o> NRFX_LPCOMP_CONFIG_DETECTION  - Detection
 
// <0=> Crossing 
// <1=> Up 
// <2=> Down 

#ifndef NRFX_LPCOMP_CONFIG_DETECTION
#define NRFX_LPCOMP_CONFIG_DETECTION 2
#endif

// <o> NRFX_LPCOMP_CONFIG_INPUT  - Analog input
 
// <0=> 0 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_LPCOMP_CONFIG_INPUT
#define NRFX_LPCOMP_CONFIG_INPUT 0
#endif

// <q> NRFX_LPCOMP_CONFIG_HYST  - Hysteresis
 

#ifndef NRFX_LPCOMP_CONFIG_HYST
#define NRFX_LPCOMP_CONFIG_HYST 0
#endif

// <o> NRFX_LPCOMP_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_LPCOMP_CONFIG_IRQ_PRIORITY
#define NRFX_LPCOMP_CONFIG_IRQ_PRIORITY 6
#endif

// <e> NRFX_LPCOMP_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_LPCOMP_CONFIG_LOG_ENABLED
#define NRFX_LPCOMP_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_LPCOMP_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_LPCOMP_CONFIG_LOG_LEVEL
#define NRFX_LPCOMP_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_LPCOMP_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_LPCOMP_CONFIG_INFO_COLOR
#define NRFX_LPCOMP_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_LPCOMP_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_LPCOMP_CONFIG_DEBUG_COLOR
#define NRFX_LPCOMP_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_PDM_ENABLED - nrfx_pdm - PDM peripheral driver
//==========================================================
#ifndef NRFX_PDM_ENABLED
#define NRFX_PDM_ENABLED 1
#endif
// <o> NRFX_PDM_CONFIG_MODE  - Mode
 
// <0=> Stereo 
// <1=> Mono 

#ifndef NRFX_PDM_CONFIG_MODE
#define NRFX_PDM_CONFIG_MODE 1
#endif

// <o> NRFX_PDM_CONFIG_EDGE  - Edge
 
// <0=> Left falling 
// <1=> Left rising 

#ifndef NRFX_PDM_CONFIG_EDGE
#define NRFX_PDM_CONFIG_EDGE 0
#endif

// <o> NRFX_PDM_CONFIG_CLOCK_FREQ  - Clock frequency
 
// <134217728=> 1000k 
// <138412032=> 1032k (default) 
// <142606336=> 1067k 

#ifndef NRFX_PDM_CONFIG_CLOCK_FREQ
#define NRFX_PDM_CONFIG_CLOCK_FREQ 138412032
#endif

// <o> NRFX_PDM_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_PDM_CONFIG_IRQ_PRIORITY
#define NRFX_PDM_CONFIG_IRQ_PRIORITY 6
#endif

// <e> NRFX_PDM_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_PDM_CONFIG_LOG_ENABLED
#define NRFX_PDM_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_PDM_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_PDM_CONFIG_LOG_LEVEL
#define NRFX_PDM_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_PDM_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_PDM_CONFIG_INFO_COLOR
#define NRFX_PDM_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_PDM_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_PDM_CONFIG_DEBUG_COLOR
#define NRFX_PDM_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_POWER_ENABLED - nrfx_power - POWER peripheral driver
//==========================================================
#ifndef NRFX_POWER_ENABLED
#define NRFX_POWER_ENABLED 1
#endif
// <o> NRFX_POWER_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_POWER_CONFIG_IRQ_PRIORITY
#define NRFX_POWER_CONFIG_IRQ_PRIORITY 6
#endif

// <q> NRFX_POWER_CONFIG_DEFAULT_DCDCEN  - The default configuration of main DCDC regulator
 

// <i> This settings means only that components for DCDC regulator are installed and it can be enabled.

#ifndef NRFX_POWER_CONFIG_DEFAULT_DCDCEN
#define NRFX_POWER_CONFIG_DEFAULT_DCDCEN 0
#endif

// <q> NRFX_POWER_CONFIG_DEFAULT_DCDCENHV  - The default configuration of High Voltage DCDC regulator
 

// <i> This settings means only that components for DCDC regulator are installed and it can be enabled.

#ifndef NRFX_POWER_CONFIG_DEFAULT_DCDCENHV
#define NRFX_POWER_CONFIG_DEFAULT_DCDCENHV 0
#endif

// </e>

// <e> NRFX_PPI_ENABLED - nrfx_ppi - PPI peripheral allocator
//==========================================================
#ifndef NRFX_PPI_ENABLED
#define NRFX_PPI_ENABLED 1
#endif
// <e> NRFX_PPI_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_PPI_CONFIG_LOG_ENABLED
#define NRFX_PPI_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_PPI_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_PPI_CONFIG_LOG_LEVEL
#define NRFX_PPI_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_PPI_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_PPI_CONFIG_INFO_COLOR
#define NRFX_PPI_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_PPI_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_PPI_CONFIG_DEBUG_COLOR
#define NRFX_PPI_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_PRS_ENABLED - nrfx_prs - Peripheral Resource Sharing module
//==========================================================
#ifndef NRFX_PRS_ENABLED
#define NRFX_PRS_ENABLED 1
#endif
// <q> NRFX_PRS_BOX_0_ENABLED  - Enables box 0 in the module.
 

#ifndef NRFX_PRS_BOX_0_ENABLED
#define NRFX_PRS_BOX_0_ENABLED 1
#endif

// <q> NRFX_PRS_BOX_1_ENABLED  - Enables box 1 in the module.
 

#ifndef NRFX_PRS_BOX_1_ENABLED
#define NRFX_PRS_BOX_1_ENABLED 1
#endif

// <q> NRFX_PRS_BOX_2_ENABLED  - Enables box 2 in the module.
 

#ifndef NRFX_PRS_BOX_2_ENABLED
#define NRFX_PRS_BOX_2_ENABLED 1
#endif

// <q> NRFX_PRS_BOX_3_ENABLED  - Enables box 3 in the module.
 

#ifndef NRFX_PRS_BOX_3_ENABLED
#define NRFX_PRS_BOX_3_ENABLED 1
#endif

// <q> NRFX_PRS_BOX_4_ENABLED  - Enables box 4 in the module.
 

#ifndef NRFX_PRS_BOX_4_ENABLED
#define NRFX_PRS_BOX_4_ENABLED 1
#endif

// <e> NRFX_PRS_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_PRS_CONFIG_LOG_ENABLED
#define NRFX_PRS_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_PRS_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_PRS_CONFIG_LOG_LEVEL
#define NRFX_PRS_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_PRS_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_PRS_CONFIG_INFO_COLOR
#define NRFX_PRS_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_PRS_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_PRS_CONFIG_DEBUG_COLOR
#define NRFX_PRS_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_PWM_ENABLED - nrfx_pwm - PWM peripheral driver
//==========================================================
#ifndef NRFX_PWM_ENABLED
#define NRFX_PWM_ENABLED 1
#endif
// <q> NRFX_PWM0_ENABLED  - Enable PWM0 instance
 

#ifndef NRFX_PWM0_ENABLED
#define NRFX_PWM0_ENABLED 1
#endif

// <q> NRFX_PWM1_ENABLED  - Enable PWM1 instance
 

#ifndef NRFX_PWM1_ENABLED
#define NRFX_PWM1_ENABLED 1
#endif

// <q> NRFX_PWM2_ENABLED  - Enable PWM2 instance
 

#ifndef NRFX_PWM2_ENABLED
#define NRFX_PWM2_ENABLED 1
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_OUT0_PIN - Out0 pin  <0-31> 


#ifndef NRFX_PWM_DEFAULT_CONFIG_OUT0_PIN
#define NRFX_PWM_DEFAULT_CONFIG_OUT0_PIN 31
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_OUT1_PIN - Out1 pin  <0-31> 


#ifndef NRFX_PWM_DEFAULT_CONFIG_OUT1_PIN
#define NRFX_PWM_DEFAULT_CONFIG_OUT1_PIN 31
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_OUT2_PIN - Out2 pin  <0-31> 


#ifndef NRFX_PWM_DEFAULT_CONFIG_OUT2_PIN
#define NRFX_PWM_DEFAULT_CONFIG_OUT2_PIN 31
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_OUT3_PIN - Out3 pin  <0-31> 


#ifndef NRFX_PWM_DEFAULT_CONFIG_OUT3_PIN
#define NRFX_PWM_DEFAULT_CONFIG_OUT3_PIN 31
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_BASE_CLOCK  - Base clock
 
// <0=> 16 MHz 
// <1=> 8 MHz 
// <2=> 4 MHz 
// <3=> 2 MHz 
// <4=> 1 MHz 
// <5=> 500 kHz 
// <6=> 250 kHz 
// <7=> 125 kHz 

#ifndef NRFX_PWM_DEFAULT_CONFIG_BASE_CLOCK
#define NRFX_PWM_DEFAULT_CONFIG_BASE_CLOCK 4
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_COUNT_MODE  - Count mode
 
// <0=> Up 
// <1=> Up and Down 

#ifndef NRFX_PWM_DEFAULT_CONFIG_COUNT_MODE
#define NRFX_PWM_DEFAULT_CONFIG_COUNT_MODE 0
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_TOP_VALUE - Top value 
#ifndef NRFX_PWM_DEFAULT_CONFIG_TOP_VALUE
#define NRFX_PWM_DEFAULT_CONFIG_TOP_VALUE 1000
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_LOAD_MODE  - Load mode
 
// <0=> Common 
// <1=> Grouped 
// <2=> Individual 
// <3=> Waveform 

#ifndef NRFX_PWM_DEFAULT_CONFIG_LOAD_MODE
#define NRFX_PWM_DEFAULT_CONFIG_LOAD_MODE 0
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_STEP_MODE  - Step mode
 
// <0=> Auto 
// <1=> Triggered 

#ifndef NRFX_PWM_DEFAULT_CONFIG_STEP_MODE
#define NRFX_PWM_DEFAULT_CONFIG_STEP_MODE 0
#endif

// <o> NRFX_PWM_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_PWM_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_PWM_DEFAULT_CONFIG_IRQ_PRIORITY 6
#endif

// <e> NRFX_PWM_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_PWM_CONFIG_LOG_ENABLED
#define NRFX_PWM_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_PWM_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_PWM_CONFIG_LOG_LEVEL
#define NRFX_PWM_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_PWM_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_PWM_CONFIG_INFO_COLOR
#define NRFX_PWM_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_PWM_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_PWM_CONFIG_DEBUG_COLOR
#define NRFX_PWM_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> NRFX_PWM_NRF52_ANOMALY_109_WORKAROUND_ENABLED - Enables nRF52 Anomaly 109 workaround for PWM.

// <i> The workaround uses interrupts to wake up the CPU and ensure
// <i> it is active when PWM is about to start a DMA transfer. For
// <i> initial transfer, done when a playback is started via PPI,
// <i> a specific EGU instance is used to generate the interrupt.
// <i> During the playback, the PWM interrupt triggered on SEQEND
// <i> event of a preceding sequence is used to protect the transfer
// <i> done for the next sequence to be played.
//==========================================================
#ifndef NRFX_PWM_NRF52_ANOMALY_109_WORKAROUND_ENABLED
#define NRFX_PWM_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0
#endif
// <o> NRFX_PWM_NRF52_ANOMALY_109_EGU_INSTANCE  - EGU instance used by the nRF52 Anomaly 109 workaround for PWM.
 
// <0=> EGU0 
// <1=> EGU1 
// <2=> EGU2 
// <3=> EGU3 
// <4=> EGU4 
// <5=> EGU5 

#ifndef NRFX_PWM_NRF52_ANOMALY_109_EGU_INSTANCE
#define NRFX_PWM_NRF52_ANOMALY_109_EGU_INSTANCE 5
#endif

// </e>

// </e>

// <e> NRFX_QDEC_ENABLED - nrfx_qdec - QDEC peripheral driver
//==========================================================
#ifndef NRFX_QDEC_ENABLED
#define NRFX_QDEC_ENABLED 1
#endif
// <o> NRFX_QDEC_CONFIG_REPORTPER  - Report period
 
// <0=> 10 Samples 
// <1=> 40 Samples 
// <2=> 80 Samples 
// <3=> 120 Samples 
// <4=> 160 Samples 
// <5=> 200 Samples 
// <6=> 240 Samples 
// <7=> 280 Samples 

#ifndef NRFX_QDEC_CONFIG_REPORTPER
#define NRFX_QDEC_CONFIG_REPORTPER 0
#endif

// <o> NRFX_QDEC_CONFIG_SAMPLEPER  - Sample period
 
// <0=> 128 us 
// <1=> 256 us 
// <2=> 512 us 
// <3=> 1024 us 
// <4=> 2048 us 
// <5=> 4096 us 
// <6=> 8192 us 
// <7=> 16384 us 

#ifndef NRFX_QDEC_CONFIG_SAMPLEPER
#define NRFX_QDEC_CONFIG_SAMPLEPER 7
#endif

// <o> NRFX_QDEC_CONFIG_PIO_A - A pin  <0-31> 


#ifndef NRFX_QDEC_CONFIG_PIO_A
#define NRFX_QDEC_CONFIG_PIO_A 31
#endif

// <o> NRFX_QDEC_CONFIG_PIO_B - B pin  <0-31> 


#ifndef NRFX_QDEC_CONFIG_PIO_B
#define NRFX_QDEC_CONFIG_PIO_B 31
#endif

// <o> NRFX_QDEC_CONFIG_PIO_LED - LED pin  <0-31> 


#ifndef NRFX_QDEC_CONFIG_PIO_LED
#define NRFX_QDEC_CONFIG_PIO_LED 31
#endif

// <o> NRFX_QDEC_CONFIG_LEDPRE - LED pre 
#ifndef NRFX_QDEC_CONFIG_LEDPRE
#define NRFX_QDEC_CONFIG_LEDPRE 511
#endif

// <o> NRFX_QDEC_CONFIG_LEDPOL  - LED polarity
 
// <0=> Active low 
// <1=> Active high 

#ifndef NRFX_QDEC_CONFIG_LEDPOL
#define NRFX_QDEC_CONFIG_LEDPOL 1
#endif

// <q> NRFX_QDEC_CONFIG_DBFEN  - Debouncing enable
 

#ifndef NRFX_QDEC_CONFIG_DBFEN
#define NRFX_QDEC_CONFIG_DBFEN 0
#endif

// <q> NRFX_QDEC_CONFIG_SAMPLE_INTEN  - Sample ready interrupt enable
 

#ifndef NRFX_QDEC_CONFIG_SAMPLE_INTEN
#define NRFX_QDEC_CONFIG_SAMPLE_INTEN 0
#endif

// <o> NRFX_QDEC_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_QDEC_CONFIG_IRQ_PRIORITY
#define NRFX_QDEC_CONFIG_IRQ_PRIORITY 6
#endif

// <e> NRFX_QDEC_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_QDEC_CONFIG_LOG_ENABLED
#define NRFX_QDEC_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_QDEC_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_QDEC_CONFIG_LOG_LEVEL
#define NRFX_QDEC_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_QDEC_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_QDEC_CONFIG_INFO_COLOR
#define NRFX_QDEC_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_QDEC_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_QDEC_CONFIG_DEBUG_COLOR
#define NRFX_QDEC_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_RNG_ENABLED - nrfx_rng - RNG peripheral driver
//==========================================================
#ifndef NRFX_RNG_ENABLED
#define NRFX_RNG_ENABLED 1
#endif
// <q> NRFX_RNG_CONFIG_ERROR_CORRECTION  - Error correction
 

#ifndef NRFX_RNG_CONFIG_ERROR_CORRECTION
#define NRFX_RNG_CONFIG_ERROR_CORRECTION 1
#endif

// <o> NRFX_RNG_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_RNG_CONFIG_IRQ_PRIORITY
#define NRFX_RNG_CONFIG_IRQ_PRIORITY 6
#endif

// <e> NRFX_RNG_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_RNG_CONFIG_LOG_ENABLED
#define NRFX_RNG_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_RNG_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_RNG_CONFIG_LOG_LEVEL
#define NRFX_RNG_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_RNG_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_RNG_CONFIG_INFO_COLOR
#define NRFX_RNG_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_RNG_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_RNG_CONFIG_DEBUG_COLOR
#define NRFX_RNG_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_RTC_ENABLED - nrfx_rtc - RTC peripheral driver
//==========================================================
#ifndef NRFX_RTC_ENABLED
#define NRFX_RTC_ENABLED 1
#endif
// <q> NRFX_RTC0_ENABLED  - Enable RTC0 instance
 

#ifndef NRFX_RTC0_ENABLED
#define NRFX_RTC0_ENABLED 1
#endif

// <q> NRFX_RTC1_ENABLED  - Enable RTC1 instance
 

#ifndef NRFX_RTC1_ENABLED
#define NRFX_RTC1_ENABLED 0
#endif

// <q> NRFX_RTC2_ENABLED  - Enable RTC2 instance
 

#ifndef NRFX_RTC2_ENABLED
#define NRFX_RTC2_ENABLED 1
#endif

// <o> NRFX_RTC_MAXIMUM_LATENCY_US - Maximum possible time[us] in highest priority interrupt 
#ifndef NRFX_RTC_MAXIMUM_LATENCY_US
#define NRFX_RTC_MAXIMUM_LATENCY_US 2000
#endif

// <o> NRFX_RTC_DEFAULT_CONFIG_FREQUENCY - Frequency  <16-32768> 


#ifndef NRFX_RTC_DEFAULT_CONFIG_FREQUENCY
#define NRFX_RTC_DEFAULT_CONFIG_FREQUENCY 32768
#endif

// <q> NRFX_RTC_DEFAULT_CONFIG_RELIABLE  - Ensures safe compare event triggering
 

#ifndef NRFX_RTC_DEFAULT_CONFIG_RELIABLE
#define NRFX_RTC_DEFAULT_CONFIG_RELIABLE 0
#endif

// <o> NRFX_RTC_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_RTC_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_RTC_DEFAULT_CONFIG_IRQ_PRIORITY 6
#endif

// <e> NRFX_RTC_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_RTC_CONFIG_LOG_ENABLED
#define NRFX_RTC_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_RTC_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_RTC_CONFIG_LOG_LEVEL
#define NRFX_RTC_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_RTC_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_RTC_CONFIG_INFO_COLOR
#define NRFX_RTC_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_RTC_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_RTC_CONFIG_DEBUG_COLOR
#define NRFX_RTC_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_SAADC_ENABLED - nrfx_saadc - SAADC peripheral driver
//==========================================================
#ifndef NRFX_SAADC_ENABLED
#define NRFX_SAADC_ENABLED 1
#endif
// <o> NRFX_SAADC_CONFIG_RESOLUTION  - Resolution
 
// <0=> 8 bit 
// <1=> 10 bit 
// <2=> 12 bit 
// <3=> 14 bit 

#ifndef NRFX_SAADC_CONFIG_RESOLUTION
#define NRFX_SAADC_CONFIG_RESOLUTION 1
#endif

// <o> NRFX_SAADC_CONFIG_OVERSAMPLE  - Sample period
 
// <0=> Disabled 
// <1=> 2x 
// <2=> 4x 
// <3=> 8x 
// <4=> 16x 
// <5=> 32x 
// <6=> 64x 
// <7=> 128x 
// <8=> 256x 

#ifndef NRFX_SAADC_CONFIG_OVERSAMPLE
#define NRFX_SAADC_CONFIG_OVERSAMPLE 0
#endif

// <q> NRFX_SAADC_CONFIG_LP_MODE  - Enabling low power mode
 

#ifndef NRFX_SAADC_CONFIG_LP_MODE
#define NRFX_SAADC_CONFIG_LP_MODE 0
#endif

// <o> NRFX_SAADC_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_SAADC_CONFIG_IRQ_PRIORITY
#define NRFX_SAADC_CONFIG_IRQ_PRIORITY 6
#endif

// <e> NRFX_SAADC_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_SAADC_CONFIG_LOG_ENABLED
#define NRFX_SAADC_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_SAADC_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_SAADC_CONFIG_LOG_LEVEL
#define NRFX_SAADC_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_SAADC_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_SAADC_CONFIG_INFO_COLOR
#define NRFX_SAADC_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_SAADC_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_SAADC_CONFIG_DEBUG_COLOR
#define NRFX_SAADC_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_SPIM_ENABLED - nrfx_spim - SPIM peripheral driver
//==========================================================
#ifndef NRFX_SPIM_ENABLED
#define NRFX_SPIM_ENABLED 1
#endif
// <q> NRFX_SPIM0_ENABLED  - Enable SPIM0 instance
 

#ifndef NRFX_SPIM0_ENABLED
#define NRFX_SPIM0_ENABLED 1
#endif

// <q> NRFX_SPIM1_ENABLED  - Enable SPIM1 instance
 

#ifndef NRFX_SPIM1_ENABLED
#define NRFX_SPIM1_ENABLED 1
#endif

// <q> NRFX_SPIM2_ENABLED  - Enable SPIM2 instance
 

#ifndef NRFX_SPIM2_ENABLED
#define NRFX_SPIM2_ENABLED 1
#endif

// <o> NRFX_SPIM_MISO_PULL_CFG  - MISO pin pull configuration.
 
// <0=> NRF_GPIO_PIN_NOPULL 
// <1=> NRF_GPIO_PIN_PULLDOWN 
// <3=> NRF_GPIO_PIN_PULLUP 

#ifndef NRFX_SPIM_MISO_PULL_CFG
#define NRFX_SPIM_MISO_PULL_CFG 1
#endif

// <o> NRFX_SPIM_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_SPIM_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_SPIM_DEFAULT_CONFIG_IRQ_PRIORITY 6
#endif

// <e> NRFX_SPIM_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_SPIM_CONFIG_LOG_ENABLED
#define NRFX_SPIM_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_SPIM_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_SPIM_CONFIG_LOG_LEVEL
#define NRFX_SPIM_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_SPIM_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_SPIM_CONFIG_INFO_COLOR
#define NRFX_SPIM_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_SPIM_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_SPIM_CONFIG_DEBUG_COLOR
#define NRFX_SPIM_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <q> NRFX_SPIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED  - Enables nRF52 anomaly 109 workaround for SPIM.
 

// <i> The workaround uses interrupts to wake up the CPU by catching
// <i> a start event of zero-length transmission to start the clock. This 
// <i> ensures that the DMA transfer will be executed without issues and
// <i> that the proper transfer will be started. See more in the Errata 
// <i> document or Anomaly 109 Addendum located at 
// <i> https://infocenter.nordicsemi.com/

#ifndef NRFX_SPIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED
#define NRFX_SPIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0
#endif

// </e>

// <e> NRFX_SPIS_ENABLED - nrfx_spis - SPIS peripheral driver
//==========================================================
#ifndef NRFX_SPIS_ENABLED
#define NRFX_SPIS_ENABLED 1
#endif
// <q> NRFX_SPIS0_ENABLED  - Enable SPIS0 instance
 

#ifndef NRFX_SPIS0_ENABLED
#define NRFX_SPIS0_ENABLED 1
#endif

// <q> NRFX_SPIS1_ENABLED  - Enable SPIS1 instance
 

#ifndef NRFX_SPIS1_ENABLED
#define NRFX_SPIS1_ENABLED 1
#endif

// <q> NRFX_SPIS2_ENABLED  - Enable SPIS2 instance
 

#ifndef NRFX_SPIS2_ENABLED
#define NRFX_SPIS2_ENABLED 1
#endif

// <o> NRFX_SPIS_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_SPIS_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_SPIS_DEFAULT_CONFIG_IRQ_PRIORITY 6
#endif

// <o> NRFX_SPIS_DEFAULT_DEF - SPIS default DEF character  <0-255> 


#ifndef NRFX_SPIS_DEFAULT_DEF
#define NRFX_SPIS_DEFAULT_DEF 255
#endif

// <o> NRFX_SPIS_DEFAULT_ORC - SPIS default ORC character  <0-255> 


#ifndef NRFX_SPIS_DEFAULT_ORC
#define NRFX_SPIS_DEFAULT_ORC 255
#endif

// <e> NRFX_SPIS_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_SPIS_CONFIG_LOG_ENABLED
#define NRFX_SPIS_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_SPIS_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_SPIS_CONFIG_LOG_LEVEL
#define NRFX_SPIS_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_SPIS_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_SPIS_CONFIG_INFO_COLOR
#define NRFX_SPIS_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_SPIS_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_SPIS_CONFIG_DEBUG_COLOR
#define NRFX_SPIS_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <q> NRFX_SPIS_NRF52_ANOMALY_109_WORKAROUND_ENABLED  - Enables nRF52 Anomaly 109 workaround for SPIS.
 

// <i> The workaround uses a GPIOTE channel to generate interrupts
// <i> on falling edges detected on the CSN line. This will make
// <i> the CPU active for the moment when SPIS starts DMA transfers,
// <i> and this way the transfers will be protected.
// <i> This workaround uses GPIOTE driver, so this driver must be
// <i> enabled as well.

#ifndef NRFX_SPIS_NRF52_ANOMALY_109_WORKAROUND_ENABLED
#define NRFX_SPIS_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0
#endif

// </e>

// <e> NRFX_SPI_ENABLED - nrfx_spi - SPI peripheral driver
//==========================================================
#ifndef NRFX_SPI_ENABLED
#define NRFX_SPI_ENABLED 1
#endif
// <q> NRFX_SPI0_ENABLED  - Enable SPI0 instance
 

#ifndef NRFX_SPI0_ENABLED
#define NRFX_SPI0_ENABLED 1
#endif

// <q> NRFX_SPI1_ENABLED  - Enable SPI1 instance
 

#ifndef NRFX_SPI1_ENABLED
#define NRFX_SPI1_ENABLED 1
#endif

// <q> NRFX_SPI2_ENABLED  - Enable SPI2 instance
 

#ifndef NRFX_SPI2_ENABLED
#define NRFX_SPI2_ENABLED 1
#endif

// <o> NRFX_SPI_MISO_PULL_CFG  - MISO pin pull configuration.
 
// <0=> NRF_GPIO_PIN_NOPULL 
// <1=> NRF_GPIO_PIN_PULLDOWN 
// <3=> NRF_GPIO_PIN_PULLUP 

#ifndef NRFX_SPI_MISO_PULL_CFG
#define NRFX_SPI_MISO_PULL_CFG 1
#endif

// <o> NRFX_SPI_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_SPI_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_SPI_DEFAULT_CONFIG_IRQ_PRIORITY 6
#endif

// <e> NRFX_SPI_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_SPI_CONFIG_LOG_ENABLED
#define NRFX_SPI_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_SPI_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_SPI_CONFIG_LOG_LEVEL
#define NRFX_SPI_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_SPI_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_SPI_CONFIG_INFO_COLOR
#define NRFX_SPI_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_SPI_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_SPI_CONFIG_DEBUG_COLOR
#define NRFX_SPI_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_SWI_ENABLED - nrfx_swi - SWI/EGU peripheral allocator
//==========================================================
#ifndef NRFX_SWI_ENABLED
#define NRFX_SWI_ENABLED 1
#endif
// <q> NRFX_EGU_ENABLED  - Enable EGU support
 

#ifndef NRFX_EGU_ENABLED
#define NRFX_EGU_ENABLED 0
#endif

// <q> NRFX_SWI0_DISABLED  - Exclude SWI0 from being utilized by the driver
 

#ifndef NRFX_SWI0_DISABLED
#define NRFX_SWI0_DISABLED 0
#endif

// <q> NRFX_SWI1_DISABLED  - Exclude SWI1 from being utilized by the driver
 

#ifndef NRFX_SWI1_DISABLED
#define NRFX_SWI1_DISABLED 0
#endif

// <q> NRFX_SWI2_DISABLED  - Exclude SWI2 from being utilized by the driver
 

#ifndef NRFX_SWI2_DISABLED
#define NRFX_SWI2_DISABLED 0
#endif

// <q> NRFX_SWI3_DISABLED  - Exclude SWI3 from being utilized by the driver
 

#ifndef NRFX_SWI3_DISABLED
#define NRFX_SWI3_DISABLED 0
#endif

// <q> NRFX_SWI4_DISABLED  - Exclude SWI4 from being utilized by the driver
 

#ifndef NRFX_SWI4_DISABLED
#define NRFX_SWI4_DISABLED 0
#endif

// <q> NRFX_SWI5_DISABLED  - Exclude SWI5 from being utilized by the driver
 

#ifndef NRFX_SWI5_DISABLED
#define NRFX_SWI5_DISABLED 0
#endif

// <e> NRFX_SWI_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_SWI_CONFIG_LOG_ENABLED
#define NRFX_SWI_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_SWI_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_SWI_CONFIG_LOG_LEVEL
#define NRFX_SWI_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_SWI_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_SWI_CONFIG_INFO_COLOR
#define NRFX_SWI_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_SWI_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_SWI_CONFIG_DEBUG_COLOR
#define NRFX_SWI_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <q> NRFX_SYSTICK_ENABLED  - nrfx_systick - ARM(R) SysTick driver
 

#ifndef NRFX_SYSTICK_ENABLED
#define NRFX_SYSTICK_ENABLED 1
#endif

// <e> NRFX_TIMER_ENABLED - nrfx_timer - TIMER periperal driver
//==========================================================
#ifndef NRFX_TIMER_ENABLED
#define NRFX_TIMER_ENABLED 1
#endif
// <q> NRFX_TIMER0_ENABLED  - Enable TIMER0 instance
 

#ifndef NRFX_TIMER0_ENABLED
#define NRFX_TIMER0_ENABLED 1
#endif

// <q> NRFX_TIMER1_ENABLED  - Enable TIMER1 instance
 

#ifndef NRFX_TIMER1_ENABLED
#define NRFX_TIMER1_ENABLED 1
#endif

// <q> NRFX_TIMER2_ENABLED  - Enable TIMER2 instance
 

#ifndef NRFX_TIMER2_ENABLED
#define NRFX_TIMER2_ENABLED 1
#endif

// <q> NRFX_TIMER3_ENABLED  - Enable TIMER3 instance
 

#ifndef NRFX_TIMER3_ENABLED
#define NRFX_TIMER3_ENABLED 1
#endif

// <q> NRFX_TIMER4_ENABLED  - Enable TIMER4 instance
 

#ifndef NRFX_TIMER4_ENABLED
#define NRFX_TIMER4_ENABLED 1
#endif

// <o> NRFX_TIMER_DEFAULT_CONFIG_FREQUENCY  - Timer frequency if in Timer mode
 
// <0=> 16 MHz 
// <1=> 8 MHz 
// <2=> 4 MHz 
// <3=> 2 MHz 
// <4=> 1 MHz 
// <5=> 500 kHz 
// <6=> 250 kHz 
// <7=> 125 kHz 
// <8=> 62.5 kHz 
// <9=> 31.25 kHz 

#ifndef NRFX_TIMER_DEFAULT_CONFIG_FREQUENCY
#define NRFX_TIMER_DEFAULT_CONFIG_FREQUENCY 0
#endif

// <o> NRFX_TIMER_DEFAULT_CONFIG_MODE  - Timer mode or operation
 
// <0=> Timer 
// <1=> Counter 

#ifndef NRFX_TIMER_DEFAULT_CONFIG_MODE
#define NRFX_TIMER_DEFAULT_CONFIG_MODE 0
#endif

// <o> NRFX_TIMER_DEFAULT_CONFIG_BIT_WIDTH  - Timer counter bit width
 
// <0=> 16 bit 
// <1=> 8 bit 
// <2=> 24 bit 
// <3=> 32 bit 

#ifndef NRFX_TIMER_DEFAULT_CONFIG_BIT_WIDTH
#define NRFX_TIMER_DEFAULT_CONFIG_BIT_WIDTH 0
#endif

// <o> NRFX_TIMER_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_TIMER_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_TIMER_DEFAULT_CONFIG_IRQ_PRIORITY 6
#endif

// <e> NRFX_TIMER_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_TIMER_CONFIG_LOG_ENABLED
#define NRFX_TIMER_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_TIMER_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_TIMER_CONFIG_LOG_LEVEL
#define NRFX_TIMER_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_TIMER_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_TIMER_CONFIG_INFO_COLOR
#define NRFX_TIMER_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_TIMER_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_TIMER_CONFIG_DEBUG_COLOR
#define NRFX_TIMER_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_TWIM_ENABLED - nrfx_twim - TWIM peripheral driver
//==========================================================
#ifndef NRFX_TWIM_ENABLED
#define NRFX_TWIM_ENABLED 1
#endif
// <q> NRFX_TWIM0_ENABLED  - Enable TWIM0 instance
 

#ifndef NRFX_TWIM0_ENABLED
#define NRFX_TWIM0_ENABLED 1
#endif

// <q> NRFX_TWIM1_ENABLED  - Enable TWIM1 instance
 

#ifndef NRFX_TWIM1_ENABLED
#define NRFX_TWIM1_ENABLED 1
#endif

// <o> NRFX_TWIM_DEFAULT_CONFIG_FREQUENCY  - Frequency
 
// <26738688=> 100k 
// <67108864=> 250k 
// <104857600=> 400k 

#ifndef NRFX_TWIM_DEFAULT_CONFIG_FREQUENCY
#define NRFX_TWIM_DEFAULT_CONFIG_FREQUENCY 26738688
#endif

// <q> NRFX_TWIM_DEFAULT_CONFIG_HOLD_BUS_UNINIT  - Enables bus holding after uninit
 

#ifndef NRFX_TWIM_DEFAULT_CONFIG_HOLD_BUS_UNINIT
#define NRFX_TWIM_DEFAULT_CONFIG_HOLD_BUS_UNINIT 0
#endif

// <o> NRFX_TWIM_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_TWIM_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_TWIM_DEFAULT_CONFIG_IRQ_PRIORITY 6
#endif

// <e> NRFX_TWIM_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_TWIM_CONFIG_LOG_ENABLED
#define NRFX_TWIM_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_TWIM_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_TWIM_CONFIG_LOG_LEVEL
#define NRFX_TWIM_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_TWIM_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_TWIM_CONFIG_INFO_COLOR
#define NRFX_TWIM_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_TWIM_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_TWIM_CONFIG_DEBUG_COLOR
#define NRFX_TWIM_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <q> NRFX_TWIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED  - Enables nRF52 anomaly 109 workaround for TWIM.
 

// <i> The workaround uses interrupts to wake up the CPU by catching
// <i> the start event of zero-frequency transmission, clear the 
// <i> peripheral, set desired frequency, start the peripheral, and
// <i> the proper transmission. See more in the Errata document or
// <i> Anomaly 109 Addendum located at https://infocenter.nordicsemi.com/

#ifndef NRFX_TWIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED
#define NRFX_TWIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0
#endif

// </e>

// <e> NRFX_TWIS_ENABLED - nrfx_twis - TWIS peripheral driver
//==========================================================
#ifndef NRFX_TWIS_ENABLED
#define NRFX_TWIS_ENABLED 1
#endif
// <q> NRFX_TWIS0_ENABLED  - Enable TWIS0 instance
 

#ifndef NRFX_TWIS0_ENABLED
#define NRFX_TWIS0_ENABLED 1
#endif

// <q> NRFX_TWIS1_ENABLED  - Enable TWIS1 instance
 

#ifndef NRFX_TWIS1_ENABLED
#define NRFX_TWIS1_ENABLED 1
#endif

// <q> NRFX_TWIS_ASSUME_INIT_AFTER_RESET_ONLY  - Assume that any instance would be initialized only once
 

// <i> Optimization flag. Registers used by TWIS are shared by other peripherals. Normally, during initialization driver tries to clear all registers to known state before doing the initialization itself. This gives initialization safe procedure, no matter when it would be called. If you activate TWIS only once and do never uninitialize it - set this flag to 1 what gives more optimal code.

#ifndef NRFX_TWIS_ASSUME_INIT_AFTER_RESET_ONLY
#define NRFX_TWIS_ASSUME_INIT_AFTER_RESET_ONLY 0
#endif

// <q> NRFX_TWIS_NO_SYNC_MODE  - Remove support for synchronous mode
 

// <i> Synchronous mode would be used in specific situations. And it uses some additional code and data memory to safely process state machine by polling it in status functions. If this functionality is not required it may be disabled to free some resources.

#ifndef NRFX_TWIS_NO_SYNC_MODE
#define NRFX_TWIS_NO_SYNC_MODE 0
#endif

// <o> NRFX_TWIS_DEFAULT_CONFIG_ADDR0 - Address0 
#ifndef NRFX_TWIS_DEFAULT_CONFIG_ADDR0
#define NRFX_TWIS_DEFAULT_CONFIG_ADDR0 0
#endif

// <o> NRFX_TWIS_DEFAULT_CONFIG_ADDR1 - Address1 
#ifndef NRFX_TWIS_DEFAULT_CONFIG_ADDR1
#define NRFX_TWIS_DEFAULT_CONFIG_ADDR1 0
#endif

// <o> NRFX_TWIS_DEFAULT_CONFIG_SCL_PULL  - SCL pin pull configuration
 
// <0=> Disabled 
// <1=> Pull down 
// <3=> Pull up 

#ifndef NRFX_TWIS_DEFAULT_CONFIG_SCL_PULL
#define NRFX_TWIS_DEFAULT_CONFIG_SCL_PULL 0
#endif

// <o> NRFX_TWIS_DEFAULT_CONFIG_SDA_PULL  - SDA pin pull configuration
 
// <0=> Disabled 
// <1=> Pull down 
// <3=> Pull up 

#ifndef NRFX_TWIS_DEFAULT_CONFIG_SDA_PULL
#define NRFX_TWIS_DEFAULT_CONFIG_SDA_PULL 0
#endif

// <o> NRFX_TWIS_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_TWIS_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_TWIS_DEFAULT_CONFIG_IRQ_PRIORITY 6
#endif

// <e> NRFX_TWIS_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_TWIS_CONFIG_LOG_ENABLED
#define NRFX_TWIS_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_TWIS_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_TWIS_CONFIG_LOG_LEVEL
#define NRFX_TWIS_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_TWIS_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_TWIS_CONFIG_INFO_COLOR
#define NRFX_TWIS_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_TWIS_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_TWIS_CONFIG_DEBUG_COLOR
#define NRFX_TWIS_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_TWI_ENABLED - nrfx_twi - TWI peripheral driver
//==========================================================
#ifndef NRFX_TWI_ENABLED
#define NRFX_TWI_ENABLED 1
#endif
// <q> NRFX_TWI0_ENABLED  - Enable TWI0 instance
 

#ifndef NRFX_TWI0_ENABLED
#define NRFX_TWI0_ENABLED 1
#endif

// <q> NRFX_TWI1_ENABLED  - Enable TWI1 instance
 

#ifndef NRFX_TWI1_ENABLED
#define NRFX_TWI1_ENABLED 1
#endif

// <o> NRFX_TWI_DEFAULT_CONFIG_FREQUENCY  - Frequency
 
// <26738688=> 100k 
// <67108864=> 250k 
// <104857600=> 400k 

#ifndef NRFX_TWI_DEFAULT_CONFIG_FREQUENCY
#define NRFX_TWI_DEFAULT_CONFIG_FREQUENCY 26738688
#endif

// <q> NRFX_TWI_DEFAULT_CONFIG_HOLD_BUS_UNINIT  - Enables bus holding after uninit
 

#ifndef NRFX_TWI_DEFAULT_CONFIG_HOLD_BUS_UNINIT
#define NRFX_TWI_DEFAULT_CONFIG_HOLD_BUS_UNINIT 0
#endif

// <o> NRFX_TWI_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_TWI_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_TWI_DEFAULT_CONFIG_IRQ_PRIORITY 6
#endif

// <e> NRFX_TWI_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_TWI_CONFIG_LOG_ENABLED
#define NRFX_TWI_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_TWI_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_TWI_CONFIG_LOG_LEVEL
#define NRFX_TWI_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_TWI_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_TWI_CONFIG_INFO_COLOR
#define NRFX_TWI_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_TWI_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_TWI_CONFIG_DEBUG_COLOR
#define NRFX_TWI_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_UARTE_ENABLED - nrfx_uarte - UARTE peripheral driver
//==========================================================
#ifndef NRFX_UARTE_ENABLED
#define NRFX_UARTE_ENABLED 1
#endif
// <o> NRFX_UARTE0_ENABLED - Enable UARTE0 instance 
#ifndef NRFX_UARTE0_ENABLED
#define NRFX_UARTE0_ENABLED 0
#endif

// <o> NRFX_UARTE_DEFAULT_CONFIG_HWFC  - Hardware Flow Control
 
// <0=> Disabled 
// <1=> Enabled 

#ifndef NRFX_UARTE_DEFAULT_CONFIG_HWFC
#define NRFX_UARTE_DEFAULT_CONFIG_HWFC 0
#endif

// <o> NRFX_UARTE_DEFAULT_CONFIG_PARITY  - Parity
 
// <0=> Excluded 
// <14=> Included 

#ifndef NRFX_UARTE_DEFAULT_CONFIG_PARITY
#define NRFX_UARTE_DEFAULT_CONFIG_PARITY 0
#endif

// <o> NRFX_UARTE_DEFAULT_CONFIG_BAUDRATE  - Default Baudrate
 
// <323584=> 1200 baud 
// <643072=> 2400 baud 
// <1290240=> 4800 baud 
// <2576384=> 9600 baud 
// <3862528=> 14400 baud 
// <5152768=> 19200 baud 
// <7716864=> 28800 baud 
// <8388608=> 31250 baud 
// <10289152=> 38400 baud 
// <15007744=> 56000 baud 
// <15400960=> 57600 baud 
// <20615168=> 76800 baud 
// <30801920=> 115200 baud 
// <61865984=> 230400 baud 
// <67108864=> 250000 baud 
// <121634816=> 460800 baud 
// <251658240=> 921600 baud 
// <268435456=> 1000000 baud 

#ifndef NRFX_UARTE_DEFAULT_CONFIG_BAUDRATE
#define NRFX_UARTE_DEFAULT_CONFIG_BAUDRATE 30801920
#endif

// <o> NRFX_UARTE_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_UARTE_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_UARTE_DEFAULT_CONFIG_IRQ_PRIORITY 6
#endif

// <e> NRFX_UARTE_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_UARTE_CONFIG_LOG_ENABLED
#define NRFX_UARTE_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_UARTE_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_UARTE_CONFIG_LOG_LEVEL
#define NRFX_UARTE_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_UARTE_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_UARTE_CONFIG_INFO_COLOR
#define NRFX_UARTE_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_UARTE_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_UARTE_CONFIG_DEBUG_COLOR
#define NRFX_UARTE_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_UART_ENABLED - nrfx_uart - UART peripheral driver
//==========================================================
#ifndef NRFX_UART_ENABLED
#define NRFX_UART_ENABLED 1
#endif
// <o> NRFX_UART0_ENABLED - Enable UART0 instance 
#ifndef NRFX_UART0_ENABLED
#define NRFX_UART0_ENABLED 0
#endif

// <o> NRFX_UART_DEFAULT_CONFIG_HWFC  - Hardware Flow Control
 
// <0=> Disabled 
// <1=> Enabled 

#ifndef NRFX_UART_DEFAULT_CONFIG_HWFC
#define NRFX_UART_DEFAULT_CONFIG_HWFC 0
#endif

// <o> NRFX_UART_DEFAULT_CONFIG_PARITY  - Parity
 
// <0=> Excluded 
// <14=> Included 

#ifndef NRFX_UART_DEFAULT_CONFIG_PARITY
#define NRFX_UART_DEFAULT_CONFIG_PARITY 0
#endif

// <o> NRFX_UART_DEFAULT_CONFIG_BAUDRATE  - Default Baudrate
 
// <323584=> 1200 baud 
// <643072=> 2400 baud 
// <1290240=> 4800 baud 
// <2576384=> 9600 baud 
// <3866624=> 14400 baud 
// <5152768=> 19200 baud 
// <7729152=> 28800 baud 
// <8388608=> 31250 baud 
// <10309632=> 38400 baud 
// <15007744=> 56000 baud 
// <15462400=> 57600 baud 
// <20615168=> 76800 baud 
// <30924800=> 115200 baud 
// <61845504=> 230400 baud 
// <67108864=> 250000 baud 
// <123695104=> 460800 baud 
// <247386112=> 921600 baud 
// <268435456=> 1000000 baud 

#ifndef NRFX_UART_DEFAULT_CONFIG_BAUDRATE
#define NRFX_UART_DEFAULT_CONFIG_BAUDRATE 30924800
#endif

// <o> NRFX_UART_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_UART_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_UART_DEFAULT_CONFIG_IRQ_PRIORITY 6
#endif

// <e> NRFX_UART_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_UART_CONFIG_LOG_ENABLED
#define NRFX_UART_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_UART_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_UART_CONFIG_LOG_LEVEL
#define NRFX_UART_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_UART_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_UART_CONFIG_INFO_COLOR
#define NRFX_UART_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_UART_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_UART_CONFIG_DEBUG_COLOR
#define NRFX_UART_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRFX_WDT_ENABLED - nrfx_wdt - WDT peripheral driver
//==========================================================
#ifndef NRFX_WDT_ENABLED
#define NRFX_WDT_ENABLED 1
#endif
// <o> NRFX_WDT_CONFIG_BEHAVIOUR  - WDT behavior in CPU SLEEP or HALT mode
 
// <1=> Run in SLEEP, Pause in HALT 
// <8=> Pause in SLEEP, Run in HALT 
// <9=> Run in SLEEP and HALT 
// <0=> Pause in SLEEP and HALT 

#ifndef NRFX_WDT_CONFIG_BEHAVIOUR
#define NRFX_WDT_CONFIG_BEHAVIOUR 1
#endif

// <o> NRFX_WDT_CONFIG_RELOAD_VALUE - Reload value  <15-4294967295> 


#ifndef NRFX_WDT_CONFIG_RELOAD_VALUE
#define NRFX_WDT_CONFIG_RELOAD_VALUE 2000
#endif

// <o> NRFX_WDT_CONFIG_NO_IRQ  - Remove WDT IRQ handling from WDT driver
 
// <0=> Include WDT IRQ handling 
// <1=> Remove WDT IRQ handling 

#ifndef NRFX_WDT_CONFIG_NO_IRQ
#define NRFX_WDT_CONFIG_NO_IRQ 0
#endif

// <o> NRFX_WDT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef NRFX_WDT_CONFIG_IRQ_PRIORITY
#define NRFX_WDT_CONFIG_IRQ_PRIORITY 6
#endif

// <e> NRFX_WDT_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRFX_WDT_CONFIG_LOG_ENABLED
#define NRFX_WDT_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_WDT_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_WDT_CONFIG_LOG_LEVEL
#define NRFX_WDT_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_WDT_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_WDT_CONFIG_INFO_COLOR
#define NRFX_WDT_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_WDT_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_WDT_CONFIG_DEBUG_COLOR
#define NRFX_WDT_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </e>

// <e> NRF_CLOCK_ENABLED - nrf_drv_clock - CLOCK peripheral driver - legacy layer
//==========================================================
#ifndef NRF_CLOCK_ENABLED
#define NRF_CLOCK_ENABLED 1
#endif
// <o> CLOCK_CONFIG_LF_SRC  - LF Clock Source
 
// <0=> RC 
// <1=> XTAL 
// <2=> Synth 
// <131073=> External Low Swing 
// <196609=> External Full Swing 

#ifndef CLOCK_CONFIG_LF_SRC
#define CLOCK_CONFIG_LF_SRC 1
#endif

// <q> CLOCK_CONFIG_LF_CAL_ENABLED  - Calibration enable for LF Clock Source
 

#ifndef CLOCK_CONFIG_LF_CAL_ENABLED
#define CLOCK_CONFIG_LF_CAL_ENABLED 0
#endif

// <o> CLOCK_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef CLOCK_CONFIG_IRQ_PRIORITY
#define CLOCK_CONFIG_IRQ_PRIORITY 6
#endif

// </e>

// <e> PDM_ENABLED - nrf_drv_pdm - PDM peripheral driver - legacy layer
//==========================================================
#ifndef PDM_ENABLED
#define PDM_ENABLED 1
#endif
// <o> PDM_CONFIG_MODE  - Mode
 
// <0=> Stereo 
// <1=> Mono 

#ifndef PDM_CONFIG_MODE
#define PDM_CONFIG_MODE 1
#endif

// <o> PDM_CONFIG_EDGE  - Edge
 
// <0=> Left falling 
// <1=> Left rising 

#ifndef PDM_CONFIG_EDGE
#define PDM_CONFIG_EDGE 0
#endif

// <o> PDM_CONFIG_CLOCK_FREQ  - Clock frequency
 
// <134217728=> 1000k 
// <138412032=> 1032k (default) 
// <142606336=> 1067k 

#ifndef PDM_CONFIG_CLOCK_FREQ
#define PDM_CONFIG_CLOCK_FREQ 138412032
#endif

// <o> PDM_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef PDM_CONFIG_IRQ_PRIORITY
#define PDM_CONFIG_IRQ_PRIORITY 6
#endif

// </e>

// <e> POWER_ENABLED - nrf_drv_power - POWER peripheral driver - legacy layer
//==========================================================
#ifndef POWER_ENABLED
#define POWER_ENABLED 1
#endif
// <o> POWER_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef POWER_CONFIG_IRQ_PRIORITY
#define POWER_CONFIG_IRQ_PRIORITY 6
#endif

// <q> POWER_CONFIG_DEFAULT_DCDCEN  - The default configuration of main DCDC regulator
 

// <i> This settings means only that components for DCDC regulator are installed and it can be enabled.

#ifndef POWER_CONFIG_DEFAULT_DCDCEN
#define POWER_CONFIG_DEFAULT_DCDCEN 0
#endif

// <q> POWER_CONFIG_DEFAULT_DCDCENHV  - The default configuration of High Voltage DCDC regulator
 

// <i> This settings means only that components for DCDC regulator are installed and it can be enabled.

#ifndef POWER_CONFIG_DEFAULT_DCDCENHV
#define POWER_CONFIG_DEFAULT_DCDCENHV 0
#endif

// </e>

// <q> PPI_ENABLED  - nrf_drv_ppi - PPI peripheral driver - legacy layer
 

#ifndef PPI_ENABLED
#define PPI_ENABLED 1
#endif

// <e> PWM_ENABLED - nrf_drv_pwm - PWM peripheral driver - legacy layer
//==========================================================
#ifndef PWM_ENABLED
#define PWM_ENABLED 1
#endif
// <o> PWM_DEFAULT_CONFIG_OUT0_PIN - Out0 pin  <0-31> 


#ifndef PWM_DEFAULT_CONFIG_OUT0_PIN
#define PWM_DEFAULT_CONFIG_OUT0_PIN 31
#endif

// <o> PWM_DEFAULT_CONFIG_OUT1_PIN - Out1 pin  <0-31> 


#ifndef PWM_DEFAULT_CONFIG_OUT1_PIN
#define PWM_DEFAULT_CONFIG_OUT1_PIN 31
#endif

// <o> PWM_DEFAULT_CONFIG_OUT2_PIN - Out2 pin  <0-31> 


#ifndef PWM_DEFAULT_CONFIG_OUT2_PIN
#define PWM_DEFAULT_CONFIG_OUT2_PIN 31
#endif

// <o> PWM_DEFAULT_CONFIG_OUT3_PIN - Out3 pin  <0-31> 


#ifndef PWM_DEFAULT_CONFIG_OUT3_PIN
#define PWM_DEFAULT_CONFIG_OUT3_PIN 31
#endif

// <o> PWM_DEFAULT_CONFIG_BASE_CLOCK  - Base clock
 
// <0=> 16 MHz 
// <1=> 8 MHz 
// <2=> 4 MHz 
// <3=> 2 MHz 
// <4=> 1 MHz 
// <5=> 500 kHz 
// <6=> 250 kHz 
// <7=> 125 kHz 

#ifndef PWM_DEFAULT_CONFIG_BASE_CLOCK
#define PWM_DEFAULT_CONFIG_BASE_CLOCK 4
#endif

// <o> PWM_DEFAULT_CONFIG_COUNT_MODE  - Count mode
 
// <0=> Up 
// <1=> Up and Down 

#ifndef PWM_DEFAULT_CONFIG_COUNT_MODE
#define PWM_DEFAULT_CONFIG_COUNT_MODE 0
#endif

// <o> PWM_DEFAULT_CONFIG_TOP_VALUE - Top value 
#ifndef PWM_DEFAULT_CONFIG_TOP_VALUE
#define PWM_DEFAULT_CONFIG_TOP_VALUE 1000
#endif

// <o> PWM_DEFAULT_CONFIG_LOAD_MODE  - Load mode
 
// <0=> Common 
// <1=> Grouped 
// <2=> Individual 
// <3=> Waveform 

#ifndef PWM_DEFAULT_CONFIG_LOAD_MODE
#define PWM_DEFAULT_CONFIG_LOAD_MODE 0
#endif

// <o> PWM_DEFAULT_CONFIG_STEP_MODE  - Step mode
 
// <0=> Auto 
// <1=> Triggered 

#ifndef PWM_DEFAULT_CONFIG_STEP_MODE
#define PWM_DEFAULT_CONFIG_STEP_MODE 0
#endif

// <o> PWM_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef PWM_DEFAULT_CONFIG_IRQ_PRIORITY
#define PWM_DEFAULT_CONFIG_IRQ_PRIORITY 6
#endif

// <q> PWM0_ENABLED  - Enable PWM0 instance
 

#ifndef PWM0_ENABLED
#define PWM0_ENABLED 1
#endif

// <q> PWM1_ENABLED  - Enable PWM1 instance
 

#ifndef PWM1_ENABLED
#define PWM1_ENABLED 1
#endif

// <q> PWM2_ENABLED  - Enable PWM2 instance
 

#ifndef PWM2_ENABLED
#define PWM2_ENABLED 1
#endif

// <e> PWM_NRF52_ANOMALY_109_WORKAROUND_ENABLED - Enables nRF52 Anomaly 109 workaround for PWM.

// <i> The workaround uses interrupts to wake up the CPU and ensure
// <i> it is active when PWM is about to start a DMA transfer. For
// <i> initial transfer, done when a playback is started via PPI,
// <i> a specific EGU instance is used to generate the interrupt.
// <i> During the playback, the PWM interrupt triggered on SEQEND
// <i> event of a preceding sequence is used to protect the transfer
// <i> done for the next sequence to be played.
//==========================================================
#ifndef PWM_NRF52_ANOMALY_109_WORKAROUND_ENABLED
#define PWM_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0
#endif
// <o> PWM_NRF52_ANOMALY_109_EGU_INSTANCE  - EGU instance used by the nRF52 Anomaly 109 workaround for PWM.
 
// <0=> EGU0 
// <1=> EGU1 
// <2=> EGU2 
// <3=> EGU3 
// <4=> EGU4 
// <5=> EGU5 

#ifndef PWM_NRF52_ANOMALY_109_EGU_INSTANCE
#define PWM_NRF52_ANOMALY_109_EGU_INSTANCE 5
#endif

// </e>

// </e>

// <e> QDEC_ENABLED - nrf_drv_qdec - QDEC peripheral driver - legacy layer
//==========================================================
#ifndef QDEC_ENABLED
#define QDEC_ENABLED 1
#endif
// <o> QDEC_CONFIG_REPORTPER  - Report period
 
// <0=> 10 Samples 
// <1=> 40 Samples 
// <2=> 80 Samples 
// <3=> 120 Samples 
// <4=> 160 Samples 
// <5=> 200 Samples 
// <6=> 240 Samples 
// <7=> 280 Samples 

#ifndef QDEC_CONFIG_REPORTPER
#define QDEC_CONFIG_REPORTPER 0
#endif

// <o> QDEC_CONFIG_SAMPLEPER  - Sample period
 
// <0=> 128 us 
// <1=> 256 us 
// <2=> 512 us 
// <3=> 1024 us 
// <4=> 2048 us 
// <5=> 4096 us 
// <6=> 8192 us 
// <7=> 16384 us 

#ifndef QDEC_CONFIG_SAMPLEPER
#define QDEC_CONFIG_SAMPLEPER 7
#endif

// <o> QDEC_CONFIG_PIO_A - A pin  <0-31> 


#ifndef QDEC_CONFIG_PIO_A
#define QDEC_CONFIG_PIO_A 31
#endif

// <o> QDEC_CONFIG_PIO_B - B pin  <0-31> 


#ifndef QDEC_CONFIG_PIO_B
#define QDEC_CONFIG_PIO_B 31
#endif

// <o> QDEC_CONFIG_PIO_LED - LED pin  <0-31> 


#ifndef QDEC_CONFIG_PIO_LED
#define QDEC_CONFIG_PIO_LED 31
#endif

// <o> QDEC_CONFIG_LEDPRE - LED pre 
#ifndef QDEC_CONFIG_LEDPRE
#define QDEC_CONFIG_LEDPRE 511
#endif

// <o> QDEC_CONFIG_LEDPOL  - LED polarity
 
// <0=> Active low 
// <1=> Active high 

#ifndef QDEC_CONFIG_LEDPOL
#define QDEC_CONFIG_LEDPOL 1
#endif

// <q> QDEC_CONFIG_DBFEN  - Debouncing enable
 

#ifndef QDEC_CONFIG_DBFEN
#define QDEC_CONFIG_DBFEN 0
#endif

// <q> QDEC_CONFIG_SAMPLE_INTEN  - Sample ready interrupt enable
 

#ifndef QDEC_CONFIG_SAMPLE_INTEN
#define QDEC_CONFIG_SAMPLE_INTEN 0
#endif

// <o> QDEC_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef QDEC_CONFIG_IRQ_PRIORITY
#define QDEC_CONFIG_IRQ_PRIORITY 6
#endif

// </e>

// <e> RNG_ENABLED - nrf_drv_rng - RNG peripheral driver - legacy layer
//==========================================================
#ifndef RNG_ENABLED
#define RNG_ENABLED 1
#endif
// <q> RNG_CONFIG_ERROR_CORRECTION  - Error correction
 

#ifndef RNG_CONFIG_ERROR_CORRECTION
#define RNG_CONFIG_ERROR_CORRECTION 1
#endif

// <o> RNG_CONFIG_POOL_SIZE - Pool size 
#ifndef RNG_CONFIG_POOL_SIZE
#define RNG_CONFIG_POOL_SIZE 64
#endif

// <o> RNG_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef RNG_CONFIG_IRQ_PRIORITY
#define RNG_CONFIG_IRQ_PRIORITY 6
#endif

// </e>

// <e> RTC_ENABLED - nrf_drv_rtc - RTC peripheral driver - legacy layer
//==========================================================
#ifndef RTC_ENABLED
#define RTC_ENABLED 1
#endif
// <o> RTC_DEFAULT_CONFIG_FREQUENCY - Frequency  <16-32768> 


#ifndef RTC_DEFAULT_CONFIG_FREQUENCY
#define RTC_DEFAULT_CONFIG_FREQUENCY 32768
#endif

// <q> RTC_DEFAULT_CONFIG_RELIABLE  - Ensures safe compare event triggering
 

#ifndef RTC_DEFAULT_CONFIG_RELIABLE
#define RTC_DEFAULT_CONFIG_RELIABLE 0
#endif

// <o> RTC_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef RTC_DEFAULT_CONFIG_IRQ_PRIORITY
#define RTC_DEFAULT_CONFIG_IRQ_PRIORITY 6
#endif

// <q> RTC0_ENABLED  - Enable RTC0 instance
 

#ifndef RTC0_ENABLED
#define RTC0_ENABLED 1
#endif

// <q> RTC1_ENABLED  - Enable RTC1 instance
 

#ifndef RTC1_ENABLED
#define RTC1_ENABLED 0
#endif

// <q> RTC2_ENABLED  - Enable RTC2 instance
 

#ifndef RTC2_ENABLED
#define RTC2_ENABLED 1
#endif

// <o> NRF_MAXIMUM_LATENCY_US - Maximum possible time[us] in highest priority interrupt 
#ifndef NRF_MAXIMUM_LATENCY_US
#define NRF_MAXIMUM_LATENCY_US 2000
#endif

// </e>

// <e> SAADC_ENABLED - nrf_drv_saadc - SAADC peripheral driver - legacy layer
//==========================================================
#ifndef SAADC_ENABLED
#define SAADC_ENABLED 1
#endif
// <o> SAADC_CONFIG_RESOLUTION  - Resolution
 
// <0=> 8 bit 
// <1=> 10 bit 
// <2=> 12 bit 
// <3=> 14 bit 

#ifndef SAADC_CONFIG_RESOLUTION
#define SAADC_CONFIG_RESOLUTION 1
#endif

// <o> SAADC_CONFIG_OVERSAMPLE  - Sample period
 
// <0=> Disabled 
// <1=> 2x 
// <2=> 4x 
// <3=> 8x 
// <4=> 16x 
// <5=> 32x 
// <6=> 64x 
// <7=> 128x 
// <8=> 256x 

#ifndef SAADC_CONFIG_OVERSAMPLE
#define SAADC_CONFIG_OVERSAMPLE 0
#endif

// <q> SAADC_CONFIG_LP_MODE  - Enabling low power mode
 

#ifndef SAADC_CONFIG_LP_MODE
#define SAADC_CONFIG_LP_MODE 0
#endif

// <o> SAADC_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef SAADC_CONFIG_IRQ_PRIORITY
#define SAADC_CONFIG_IRQ_PRIORITY 6
#endif

// </e>

// <e> SPIS_ENABLED - nrf_drv_spis - SPIS peripheral driver - legacy layer
//==========================================================
#ifndef SPIS_ENABLED
#define SPIS_ENABLED 1
#endif
// <o> SPIS_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef SPIS_DEFAULT_CONFIG_IRQ_PRIORITY
#define SPIS_DEFAULT_CONFIG_IRQ_PRIORITY 6
#endif

// <o> SPIS_DEFAULT_MODE  - Mode
 
// <0=> MODE_0 
// <1=> MODE_1 
// <2=> MODE_2 
// <3=> MODE_3 

#ifndef SPIS_DEFAULT_MODE
#define SPIS_DEFAULT_MODE 0
#endif

// <o> SPIS_DEFAULT_BIT_ORDER  - SPIS default bit order
 
// <0=> MSB first 
// <1=> LSB first 

#ifndef SPIS_DEFAULT_BIT_ORDER
#define SPIS_DEFAULT_BIT_ORDER 0
#endif

// <o> SPIS_DEFAULT_DEF - SPIS default DEF character  <0-255> 


#ifndef SPIS_DEFAULT_DEF
#define SPIS_DEFAULT_DEF 255
#endif

// <o> SPIS_DEFAULT_ORC - SPIS default ORC character  <0-255> 


#ifndef SPIS_DEFAULT_ORC
#define SPIS_DEFAULT_ORC 255
#endif

// <q> SPIS0_ENABLED  - Enable SPIS0 instance
 

#ifndef SPIS0_ENABLED
#define SPIS0_ENABLED 1
#endif

// <q> SPIS1_ENABLED  - Enable SPIS1 instance
 

#ifndef SPIS1_ENABLED
#define SPIS1_ENABLED 1
#endif

// <q> SPIS2_ENABLED  - Enable SPIS2 instance
 

#ifndef SPIS2_ENABLED
#define SPIS2_ENABLED 1
#endif

// <q> SPIS_NRF52_ANOMALY_109_WORKAROUND_ENABLED  - Enables nRF52 Anomaly 109 workaround for SPIS.
 

// <i> The workaround uses a GPIOTE channel to generate interrupts
// <i> on falling edges detected on the CSN line. This will make
// <i> the CPU active for the moment when SPIS starts DMA transfers,
// <i> and this way the transfers will be protected.
// <i> This workaround uses GPIOTE driver, so this driver must be
// <i> enabled as well.

#ifndef SPIS_NRF52_ANOMALY_109_WORKAROUND_ENABLED
#define SPIS_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0
#endif

// </e>

// <e> SPI_ENABLED - nrf_drv_spi - SPI/SPIM peripheral driver - legacy layer
//==========================================================
#ifndef SPI_ENABLED
#define SPI_ENABLED 1
#endif
// <o> SPI_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef SPI_DEFAULT_CONFIG_IRQ_PRIORITY
#define SPI_DEFAULT_CONFIG_IRQ_PRIORITY 6
#endif

// <o> NRF_SPI_DRV_MISO_PULLUP_CFG  - MISO PIN pull-up configuration.
 
// <0=> NRF_GPIO_PIN_NOPULL 
// <1=> NRF_GPIO_PIN_PULLDOWN 
// <3=> NRF_GPIO_PIN_PULLUP 

#ifndef NRF_SPI_DRV_MISO_PULLUP_CFG
#define NRF_SPI_DRV_MISO_PULLUP_CFG 1
#endif

// <e> SPI0_ENABLED - Enable SPI0 instance
//==========================================================
#ifndef SPI0_ENABLED
#define SPI0_ENABLED 1
#endif
// <q> SPI0_USE_EASY_DMA  - Use EasyDMA
 

#ifndef SPI0_USE_EASY_DMA
#define SPI0_USE_EASY_DMA 1
#endif

// </e>

// <e> SPI1_ENABLED - Enable SPI1 instance
//==========================================================
#ifndef SPI1_ENABLED
#define SPI1_ENABLED 1
#endif
// <q> SPI1_USE_EASY_DMA  - Use EasyDMA
 

#ifndef SPI1_USE_EASY_DMA
#define SPI1_USE_EASY_DMA 1
#endif

// </e>

// <e> SPI2_ENABLED - Enable SPI2 instance
//==========================================================
#ifndef SPI2_ENABLED
#define SPI2_ENABLED 1
#endif
// <q> SPI2_USE_EASY_DMA  - Use EasyDMA
 

#ifndef SPI2_USE_EASY_DMA
#define SPI2_USE_EASY_DMA 1
#endif

// </e>

// <q> SPIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED  - Enables nRF52 anomaly 109 workaround for SPIM.
 

// <i> The workaround uses interrupts to wake up the CPU by catching
// <i> a start event of zero-length transmission to start the clock. This 
// <i> ensures that the DMA transfer will be executed without issues and
// <i> that the proper transfer will be started. See more in the Errata 
// <i> document or Anomaly 109 Addendum located at 
// <i> https://infocenter.nordicsemi.com/

#ifndef SPIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED
#define SPIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0
#endif

// </e>

// <q> SYSTICK_ENABLED  - nrf_drv_systick - ARM(R) SysTick driver - legacy layer
 

#ifndef SYSTICK_ENABLED
#define SYSTICK_ENABLED 1
#endif

// <e> TIMER_ENABLED - nrf_drv_timer - TIMER periperal driver - legacy layer
//==========================================================
#ifndef TIMER_ENABLED
#define TIMER_ENABLED 1
#endif
// <o> TIMER_DEFAULT_CONFIG_FREQUENCY  - Timer frequency if in Timer mode
 
// <0=> 16 MHz 
// <1=> 8 MHz 
// <2=> 4 MHz 
// <3=> 2 MHz 
// <4=> 1 MHz 
// <5=> 500 kHz 
// <6=> 250 kHz 
// <7=> 125 kHz 
// <8=> 62.5 kHz 
// <9=> 31.25 kHz 

#ifndef TIMER_DEFAULT_CONFIG_FREQUENCY
#define TIMER_DEFAULT_CONFIG_FREQUENCY 0
#endif

// <o> TIMER_DEFAULT_CONFIG_MODE  - Timer mode or operation
 
// <0=> Timer 
// <1=> Counter 

#ifndef TIMER_DEFAULT_CONFIG_MODE
#define TIMER_DEFAULT_CONFIG_MODE 0
#endif

// <o> TIMER_DEFAULT_CONFIG_BIT_WIDTH  - Timer counter bit width
 
// <0=> 16 bit 
// <1=> 8 bit 
// <2=> 24 bit 
// <3=> 32 bit 

#ifndef TIMER_DEFAULT_CONFIG_BIT_WIDTH
#define TIMER_DEFAULT_CONFIG_BIT_WIDTH 0
#endif

// <o> TIMER_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef TIMER_DEFAULT_CONFIG_IRQ_PRIORITY
#define TIMER_DEFAULT_CONFIG_IRQ_PRIORITY 6
#endif

// <q> TIMER0_ENABLED  - Enable TIMER0 instance
 

#ifndef TIMER0_ENABLED
#define TIMER0_ENABLED 1
#endif

// <q> TIMER1_ENABLED  - Enable TIMER1 instance
 

#ifndef TIMER1_ENABLED
#define TIMER1_ENABLED 1
#endif

// <q> TIMER2_ENABLED  - Enable TIMER2 instance
 

#ifndef TIMER2_ENABLED
#define TIMER2_ENABLED 1
#endif

// <q> TIMER3_ENABLED  - Enable TIMER3 instance
 

#ifndef TIMER3_ENABLED
#define TIMER3_ENABLED 1
#endif

// <q> TIMER4_ENABLED  - Enable TIMER4 instance
 

#ifndef TIMER4_ENABLED
#define TIMER4_ENABLED 1
#endif

// </e>

// <e> TWIS_ENABLED - nrf_drv_twis - TWIS peripheral driver - legacy layer
//==========================================================
#ifndef TWIS_ENABLED
#define TWIS_ENABLED 1
#endif
// <q> TWIS0_ENABLED  - Enable TWIS0 instance
 

#ifndef TWIS0_ENABLED
#define TWIS0_ENABLED 1
#endif

// <q> TWIS1_ENABLED  - Enable TWIS1 instance
 

#ifndef TWIS1_ENABLED
#define TWIS1_ENABLED 1
#endif

// <q> TWIS_ASSUME_INIT_AFTER_RESET_ONLY  - Assume that any instance would be initialized only once
 

// <i> Optimization flag. Registers used by TWIS are shared by other peripherals. Normally, during initialization driver tries to clear all registers to known state before doing the initialization itself. This gives initialization safe procedure, no matter when it would be called. If you activate TWIS only once and do never uninitialize it - set this flag to 1 what gives more optimal code.

#ifndef TWIS_ASSUME_INIT_AFTER_RESET_ONLY
#define TWIS_ASSUME_INIT_AFTER_RESET_ONLY 0
#endif

// <q> TWIS_NO_SYNC_MODE  - Remove support for synchronous mode
 

// <i> Synchronous mode would be used in specific situations. And it uses some additional code and data memory to safely process state machine by polling it in status functions. If this functionality is not required it may be disabled to free some resources.

#ifndef TWIS_NO_SYNC_MODE
#define TWIS_NO_SYNC_MODE 0
#endif

// <o> TWIS_DEFAULT_CONFIG_ADDR0 - Address0 
#ifndef TWIS_DEFAULT_CONFIG_ADDR0
#define TWIS_DEFAULT_CONFIG_ADDR0 0
#endif

// <o> TWIS_DEFAULT_CONFIG_ADDR1 - Address1 
#ifndef TWIS_DEFAULT_CONFIG_ADDR1
#define TWIS_DEFAULT_CONFIG_ADDR1 0
#endif

// <o> TWIS_DEFAULT_CONFIG_SCL_PULL  - SCL pin pull configuration
 
// <0=> Disabled 
// <1=> Pull down 
// <3=> Pull up 

#ifndef TWIS_DEFAULT_CONFIG_SCL_PULL
#define TWIS_DEFAULT_CONFIG_SCL_PULL 0
#endif

// <o> TWIS_DEFAULT_CONFIG_SDA_PULL  - SDA pin pull configuration
 
// <0=> Disabled 
// <1=> Pull down 
// <3=> Pull up 

#ifndef TWIS_DEFAULT_CONFIG_SDA_PULL
#define TWIS_DEFAULT_CONFIG_SDA_PULL 0
#endif

// <o> TWIS_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef TWIS_DEFAULT_CONFIG_IRQ_PRIORITY
#define TWIS_DEFAULT_CONFIG_IRQ_PRIORITY 6
#endif

// </e>

// <e> TWI_ENABLED - nrf_drv_twi - TWI/TWIM peripheral driver - legacy layer
//==========================================================
#ifndef TWI_ENABLED
#define TWI_ENABLED 1
#endif
// <o> TWI_DEFAULT_CONFIG_FREQUENCY  - Frequency
 
// <26738688=> 100k 
// <67108864=> 250k 
// <104857600=> 400k 

#ifndef TWI_DEFAULT_CONFIG_FREQUENCY
#define TWI_DEFAULT_CONFIG_FREQUENCY 26738688
#endif

// <q> TWI_DEFAULT_CONFIG_CLR_BUS_INIT  - Enables bus clearing procedure during init
 

#ifndef TWI_DEFAULT_CONFIG_CLR_BUS_INIT
#define TWI_DEFAULT_CONFIG_CLR_BUS_INIT 0
#endif

// <q> TWI_DEFAULT_CONFIG_HOLD_BUS_UNINIT  - Enables bus holding after uninit
 

#ifndef TWI_DEFAULT_CONFIG_HOLD_BUS_UNINIT
#define TWI_DEFAULT_CONFIG_HOLD_BUS_UNINIT 0
#endif

// <o> TWI_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef TWI_DEFAULT_CONFIG_IRQ_PRIORITY
#define TWI_DEFAULT_CONFIG_IRQ_PRIORITY 6
#endif

// <e> TWI0_ENABLED - Enable TWI0 instance
//==========================================================
#ifndef TWI0_ENABLED
#define TWI0_ENABLED 1
#endif
// <q> TWI0_USE_EASY_DMA  - Use EasyDMA (if present)
 

#ifndef TWI0_USE_EASY_DMA
#define TWI0_USE_EASY_DMA 0
#endif

// </e>

// <e> TWI1_ENABLED - Enable TWI1 instance
//==========================================================
#ifndef TWI1_ENABLED
#define TWI1_ENABLED 1
#endif
// <q> TWI1_USE_EASY_DMA  - Use EasyDMA (if present)
 

#ifndef TWI1_USE_EASY_DMA
#define TWI1_USE_EASY_DMA 0
#endif

// </e>

// <q> TWIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED  - Enables nRF52 anomaly 109 workaround for TWIM.
 

// <i> The workaround uses interrupts to wake up the CPU by catching
// <i> the start event of zero-frequency transmission, clear the 
// <i> peripheral, set desired frequency, start the peripheral, and
// <i> the proper transmission. See more in the Errata document or
// <i> Anomaly 109 Addendum located at https://infocenter.nordicsemi.com/

#ifndef TWIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED
#define TWIM_NRF52_ANOMALY_109_WORKAROUND_ENABLED 0
#endif

// </e>

// <e> UART_ENABLED - nrf_drv_uart - UART/UARTE peripheral driver - legacy layer
//==========================================================
#ifndef UART_ENABLED
#define UART_ENABLED 1
#endif
// <o> UART_DEFAULT_CONFIG_HWFC  - Hardware Flow Control
 
// <0=> Disabled 
// <1=> Enabled 

#ifndef UART_DEFAULT_CONFIG_HWFC
#define UART_DEFAULT_CONFIG_HWFC 0
#endif

// <o> UART_DEFAULT_CONFIG_PARITY  - Parity
 
// <0=> Excluded 
// <14=> Included 

#ifndef UART_DEFAULT_CONFIG_PARITY
#define UART_DEFAULT_CONFIG_PARITY 0
#endif

// <o> UART_DEFAULT_CONFIG_BAUDRATE  - Default Baudrate
 
// <323584=> 1200 baud 
// <643072=> 2400 baud 
// <1290240=> 4800 baud 
// <2576384=> 9600 baud 
// <3862528=> 14400 baud 
// <5152768=> 19200 baud 
// <7716864=> 28800 baud 
// <10289152=> 38400 baud 
// <15400960=> 57600 baud 
// <20615168=> 76800 baud 
// <30801920=> 115200 baud 
// <61865984=> 230400 baud 
// <67108864=> 250000 baud 
// <121634816=> 460800 baud 
// <251658240=> 921600 baud 
// <268435456=> 1000000 baud 

#ifndef UART_DEFAULT_CONFIG_BAUDRATE
#define UART_DEFAULT_CONFIG_BAUDRATE 30801920
#endif

// <o> UART_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef UART_DEFAULT_CONFIG_IRQ_PRIORITY
#define UART_DEFAULT_CONFIG_IRQ_PRIORITY 6
#endif

// <q> UART_EASY_DMA_SUPPORT  - Driver supporting EasyDMA
 

#ifndef UART_EASY_DMA_SUPPORT
#define UART_EASY_DMA_SUPPORT 1
#endif

// <q> UART_LEGACY_SUPPORT  - Driver supporting Legacy mode
 

#ifndef UART_LEGACY_SUPPORT
#define UART_LEGACY_SUPPORT 1
#endif

// <e> UART0_ENABLED - Enable UART0 instance
//==========================================================
#ifndef UART0_ENABLED
#define UART0_ENABLED 1
#endif
// <q> UART0_CONFIG_USE_EASY_DMA  - Default setting for using EasyDMA
 

#ifndef UART0_CONFIG_USE_EASY_DMA
#define UART0_CONFIG_USE_EASY_DMA 1
#endif

// </e>

// </e>

// <e> USBD_ENABLED - nrf_drv_usbd - Software Component
//==========================================================
#ifndef USBD_ENABLED
#define USBD_ENABLED 1
#endif
// <o> USBD_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef USBD_CONFIG_IRQ_PRIORITY
#define USBD_CONFIG_IRQ_PRIORITY 6
#endif

// <o> USBD_CONFIG_DMASCHEDULER_MODE  - USBD SMA scheduler working scheme
 
// <0=> Prioritized access 
// <1=> Round Robin 

#ifndef USBD_CONFIG_DMASCHEDULER_MODE
#define USBD_CONFIG_DMASCHEDULER_MODE 0
#endif

// <q> USBD_CONFIG_DMASCHEDULER_ISO_BOOST  - Give priority to isochronous transfers
 

// <i> This option gives priority to isochronous transfers.
// <i> Enabling it assures that isochronous transfers are always processed,
// <i> even if multiple other transfers are pending.
// <i> Isochronous endpoints are prioritized before the usbd_dma_scheduler_algorithm
// <i> function is called, so the option is independent of the algorithm chosen.

#ifndef USBD_CONFIG_DMASCHEDULER_ISO_BOOST
#define USBD_CONFIG_DMASCHEDULER_ISO_BOOST 1
#endif

// <q> USBD_CONFIG_ISO_IN_ZLP  - Respond to an IN token on ISO IN endpoint with ZLP when no data is ready
 

// <i> If set, ISO IN endpoint will respond to an IN token with ZLP when no data is ready to be sent.
// <i> Else, there will be no response.

#ifndef USBD_CONFIG_ISO_IN_ZLP
#define USBD_CONFIG_ISO_IN_ZLP 0
#endif

// </e>

// <e> WDT_ENABLED - nrf_drv_wdt - WDT peripheral driver - legacy layer
//==========================================================
#ifndef WDT_ENABLED
#define WDT_ENABLED 1
#endif
// <o> WDT_CONFIG_BEHAVIOUR  - WDT behavior in CPU SLEEP or HALT mode
 
// <1=> Run in SLEEP, Pause in HALT 
// <8=> Pause in SLEEP, Run in HALT 
// <9=> Run in SLEEP and HALT 
// <0=> Pause in SLEEP and HALT 

#ifndef WDT_CONFIG_BEHAVIOUR
#define WDT_CONFIG_BEHAVIOUR 1
#endif

// <o> WDT_CONFIG_RELOAD_VALUE - Reload value  <15-4294967295> 


#ifndef WDT_CONFIG_RELOAD_VALUE
#define WDT_CONFIG_RELOAD_VALUE 2000
#endif

// <o> WDT_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef WDT_CONFIG_IRQ_PRIORITY
#define WDT_CONFIG_IRQ_PRIORITY 6
#endif

// </e>

// </h> 
//==========================================================

// <h> nRF_Drivers_External 

//==========================================================
// <q> NRF_TWI_SENSOR_ENABLED  - nrf_twi_sensor - nRF TWI Sensor module
 

#ifndef NRF_TWI_SENSOR_ENABLED
#define NRF_TWI_SENSOR_ENABLED 1
#endif

// </h> 
//==========================================================

// <h> nRF_Libraries 

//==========================================================
// <q> APP_FIFO_ENABLED  - app_fifo - Software FIFO implementation
 

#ifndef APP_FIFO_ENABLED
#define APP_FIFO_ENABLED 1
#endif

// <q> APP_GPIOTE_ENABLED  - app_gpiote - GPIOTE events dispatcher
 

#ifndef APP_GPIOTE_ENABLED
#define APP_GPIOTE_ENABLED 1
#endif

// <q> APP_PWM_ENABLED  - app_pwm - PWM functionality
 

#ifndef APP_PWM_ENABLED
#define APP_PWM_ENABLED 1
#endif

// <e> APP_SCHEDULER_ENABLED - app_scheduler - Events scheduler
//==========================================================
#ifndef APP_SCHEDULER_ENABLED
#define APP_SCHEDULER_ENABLED 1
#endif
// <q> APP_SCHEDULER_WITH_PAUSE  - Enabling pause feature
 

#ifndef APP_SCHEDULER_WITH_PAUSE
#define APP_SCHEDULER_WITH_PAUSE 0
#endif

// <q> APP_SCHEDULER_WITH_PROFILER  - Enabling scheduler profiling
 

#ifndef APP_SCHEDULER_WITH_PROFILER
#define APP_SCHEDULER_WITH_PROFILER 0
#endif

// </e>

// <e> APP_SDCARD_ENABLED - app_sdcard - SD/MMC card support using SPI
//==========================================================
#ifndef APP_SDCARD_ENABLED
#define APP_SDCARD_ENABLED 1
#endif
// <o> APP_SDCARD_SPI_INSTANCE  - SPI instance used
 
// <0=> 0 
// <1=> 1 
// <2=> 2 

#ifndef APP_SDCARD_SPI_INSTANCE
#define APP_SDCARD_SPI_INSTANCE 0
#endif

// <o> APP_SDCARD_FREQ_INIT  - SPI frequency
 
// <33554432=> 125 kHz 
// <67108864=> 250 kHz 
// <134217728=> 500 kHz 
// <268435456=> 1 MHz 
// <536870912=> 2 MHz 
// <1073741824=> 4 MHz 
// <2147483648=> 8 MHz 

#ifndef APP_SDCARD_FREQ_INIT
#define APP_SDCARD_FREQ_INIT 67108864
#endif

// <o> APP_SDCARD_FREQ_DATA  - SPI frequency
 
// <33554432=> 125 kHz 
// <67108864=> 250 kHz 
// <134217728=> 500 kHz 
// <268435456=> 1 MHz 
// <536870912=> 2 MHz 
// <1073741824=> 4 MHz 
// <2147483648=> 8 MHz 

#ifndef APP_SDCARD_FREQ_DATA
#define APP_SDCARD_FREQ_DATA 1073741824
#endif

// </e>

// <e> APP_TIMER_ENABLED - app_timer - Application timer functionality
//==========================================================
#ifndef APP_TIMER_ENABLED
#define APP_TIMER_ENABLED 1
#endif
// <o> APP_TIMER_CONFIG_RTC_FREQUENCY  - Configure RTC prescaler.
 
// <0=> 32768 Hz 
// <1=> 16384 Hz 
// <3=> 8192 Hz 
// <7=> 4096 Hz 
// <15=> 2048 Hz 
// <31=> 1024 Hz 

#ifndef APP_TIMER_CONFIG_RTC_FREQUENCY
#define APP_TIMER_CONFIG_RTC_FREQUENCY 0
#endif

// <o> APP_TIMER_CONFIG_IRQ_PRIORITY  - Interrupt priority
 

// <i> Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
// <0=> 0 (highest) 
// <1=> 1 
// <2=> 2 
// <3=> 3 
// <4=> 4 
// <5=> 5 
// <6=> 6 
// <7=> 7 

#ifndef APP_TIMER_CONFIG_IRQ_PRIORITY
#define APP_TIMER_CONFIG_IRQ_PRIORITY 6
#endif

// <o> APP_TIMER_CONFIG_OP_QUEUE_SIZE - Capacity of timer requests queue. 
// <i> Size of the queue depends on how many timers are used
// <i> in the system, how often timers are started and overall
// <i> system latency. If queue size is too small app_timer calls
// <i> will fail.

#ifndef APP_TIMER_CONFIG_OP_QUEUE_SIZE
#define APP_TIMER_CONFIG_OP_QUEUE_SIZE 10
#endif

// <q> APP_TIMER_CONFIG_USE_SCHEDULER  - Enable scheduling app_timer events to app_scheduler
 

#ifndef APP_TIMER_CONFIG_USE_SCHEDULER
#define APP_TIMER_CONFIG_USE_SCHEDULER 0
#endif

// <q> APP_TIMER_KEEPS_RTC_ACTIVE  - Enable RTC always on
 

// <i> If option is enabled RTC is kept running even if there is no active timers.
// <i> This option can be used when app_timer is used for timestamping.

#ifndef APP_TIMER_KEEPS_RTC_ACTIVE
#define APP_TIMER_KEEPS_RTC_ACTIVE 0
#endif

// <o> APP_TIMER_SAFE_WINDOW_MS - Maximum possible latency (in milliseconds) of handling app_timer event. 
// <i> Maximum possible timeout that can be set is reduced by safe window.
// <i> Example: RTC frequency 16384 Hz, maximum possible timeout 1024 seconds - APP_TIMER_SAFE_WINDOW_MS.
// <i> Since RTC is not stopped when processor is halted in debugging session, this value
// <i> must cover it if debugging is needed. It is possible to halt processor for APP_TIMER_SAFE_WINDOW_MS
// <i> without corrupting app_timer behavior.

#ifndef APP_TIMER_SAFE_WINDOW_MS
#define APP_TIMER_SAFE_WINDOW_MS 300000
#endif

// <h> App Timer Legacy configuration - Legacy configuration.

//==========================================================
// <q> APP_TIMER_WITH_PROFILER  - Enable app_timer profiling
 

#ifndef APP_TIMER_WITH_PROFILER
#define APP_TIMER_WITH_PROFILER 0
#endif

// <q> APP_TIMER_CONFIG_SWI_NUMBER  - Configure SWI instance used.
 

#ifndef APP_TIMER_CONFIG_SWI_NUMBER
#define APP_TIMER_CONFIG_SWI_NUMBER 0
#endif

// </h> 
//==========================================================

// </e>

// <e> APP_UART_ENABLED - app_uart - UART driver
//==========================================================
#ifndef APP_UART_ENABLED
#define APP_UART_ENABLED 1
#endif
// <o> APP_UART_DRIVER_INSTANCE  - UART instance used
 
// <0=> 0 

#ifndef APP_UART_DRIVER_INSTANCE
#define APP_UART_DRIVER_INSTANCE 0
#endif

// </e>

// <q> CRC16_ENABLED  - crc16 - CRC16 calculation routines
 

#ifndef CRC16_ENABLED
#define CRC16_ENABLED 1
#endif

// <q> CRC32_ENABLED  - crc32 - CRC32 calculation routines
 

#ifndef CRC32_ENABLED
#define CRC32_ENABLED 1
#endif

// <q> ECC_ENABLED  - ecc - Elliptic Curve Cryptography Library
 

#ifndef ECC_ENABLED
#define ECC_ENABLED 0
#endif

// <e> FDS_ENABLED - fds - Flash data storage module
//==========================================================
#ifndef FDS_ENABLED
#define FDS_ENABLED 1
#endif
// <h> Pages - Virtual page settings

// <i> Configure the number of virtual pages to use and their size.
//==========================================================
// <o> FDS_VIRTUAL_PAGES - Number of virtual flash pages to use. 
// <i> One of the virtual pages is reserved by the system for garbage collection.
// <i> Therefore, the minimum is two virtual pages: one page to store data and one page to be used by the system for garbage collection.
// <i> The total amount of flash memory that is used by FDS amounts to @ref FDS_VIRTUAL_PAGES * @ref FDS_VIRTUAL_PAGE_SIZE * 4 bytes.

#ifndef FDS_VIRTUAL_PAGES
#define FDS_VIRTUAL_PAGES 3
#endif

// <o> FDS_VIRTUAL_PAGE_SIZE  - The size of a virtual flash page.
 

// <i> Expressed in number of 4-byte words.
// <i> By default, a virtual page is the same size as a physical page.
// <i> The size of a virtual page must be a multiple of the size of a physical page.
// <1024=> 1024 
// <2048=> 2048 

#ifndef FDS_VIRTUAL_PAGE_SIZE
#define FDS_VIRTUAL_PAGE_SIZE 1024
#endif

// <o> FDS_VIRTUAL_PAGES_RESERVED - The number of virtual flash pages that are used by other modules. 
// <i> FDS module stores its data in the last pages of the flash memory.
// <i> By setting this value, you can move flash end address used by the FDS.
// <i> As a result the reserved space can be used by other modules.

#ifndef FDS_VIRTUAL_PAGES_RESERVED
#define FDS_VIRTUAL_PAGES_RESERVED 0
#endif

// </h> 
//==========================================================

// <h> Backend - Backend configuration

// <i> Configure which nrf_fstorage backend is used by FDS to write to flash.
//==========================================================
// <o> FDS_BACKEND  - FDS flash backend.
 

// <i> NRF_FSTORAGE_SD uses the nrf_fstorage_sd backend implementation using the SoftDevice API. Use this if you have a SoftDevice present.
// <i> NRF_FSTORAGE_NVMC uses the nrf_fstorage_nvmc implementation. Use this setting if you don't use the SoftDevice.
// <1=> NRF_FSTORAGE_NVMC 
// <2=> NRF_FSTORAGE_SD 

#ifndef FDS_BACKEND
#define FDS_BACKEND 1
#endif

// </h> 
//==========================================================

// <h> Queue - Queue settings

//==========================================================
// <o> FDS_OP_QUEUE_SIZE - Size of the internal queue. 
// <i> Increase this value if you frequently get synchronous FDS_ERR_NO_SPACE_IN_QUEUES errors.

#ifndef FDS_OP_QUEUE_SIZE
#define FDS_OP_QUEUE_SIZE 4
#endif

// </h> 
//==========================================================

// <h> CRC - CRC functionality

//==========================================================
// <e> FDS_CRC_CHECK_ON_READ - Enable CRC checks.

// <i> Save a record's CRC when it is written to flash and check it when the record is opened.
// <i> Records with an incorrect CRC can still be 'seen' by the user using FDS functions, but they cannot be opened.
// <i> Additionally, they will not be garbage collected until they are deleted.
//==========================================================
#ifndef FDS_CRC_CHECK_ON_READ
#define FDS_CRC_CHECK_ON_READ 0
#endif
// <o> FDS_CRC_CHECK_ON_WRITE  - Perform a CRC check on newly written records.
 

// <i> Perform a CRC check on newly written records.
// <i> This setting can be used to make sure that the record data was not altered while being written to flash.
// <1=> Enabled 
// <0=> Disabled 

#ifndef FDS_CRC_CHECK_ON_WRITE
#define FDS_CRC_CHECK_ON_WRITE 0
#endif

// </e>

// </h> 
//==========================================================

// <h> Users - Number of users

//==========================================================
// <o> FDS_MAX_USERS - Maximum number of callbacks that can be registered. 
#ifndef FDS_MAX_USERS
#define FDS_MAX_USERS 4
#endif

// </h> 
//==========================================================

// </e>

// <q> HARDFAULT_HANDLER_ENABLED  - hardfault_default - HardFault default handler for debugging and release
 

#ifndef HARDFAULT_HANDLER_ENABLED
#define HARDFAULT_HANDLER_ENABLED 1
#endif

// <e> HCI_MEM_POOL_ENABLED - hci_mem_pool - memory pool implementation used by HCI
//==========================================================
#ifndef HCI_MEM_POOL_ENABLED
#define HCI_MEM_POOL_ENABLED 1
#endif
// <o> HCI_TX_BUF_SIZE - TX buffer size in bytes. 
#ifndef HCI_TX_BUF_SIZE
#define HCI_TX_BUF_SIZE 600
#endif

// <o> HCI_RX_BUF_SIZE - RX buffer size in bytes. 
#ifndef HCI_RX_BUF_SIZE
#define HCI_RX_BUF_SIZE 600
#endif

// <o> HCI_RX_BUF_QUEUE_SIZE - RX buffer queue size. 
#ifndef HCI_RX_BUF_QUEUE_SIZE
#define HCI_RX_BUF_QUEUE_SIZE 4
#endif

// </e>

// <e> HCI_SLIP_ENABLED - hci_slip - SLIP protocol implementation used by HCI
//==========================================================
#ifndef HCI_SLIP_ENABLED
#define HCI_SLIP_ENABLED 1
#endif
// <o> HCI_UART_BAUDRATE  - Default Baudrate
 
// <323584=> 1200 baud 
// <643072=> 2400 baud 
// <1290240=> 4800 baud 
// <2576384=> 9600 baud 
// <3862528=> 14400 baud 
// <5152768=> 19200 baud 
// <7716864=> 28800 baud 
// <10289152=> 38400 baud 
// <15400960=> 57600 baud 
// <20615168=> 76800 baud 
// <30801920=> 115200 baud 
// <61865984=> 230400 baud 
// <67108864=> 250000 baud 
// <121634816=> 460800 baud 
// <251658240=> 921600 baud 
// <268435456=> 1000000 baud 

#ifndef HCI_UART_BAUDRATE
#define HCI_UART_BAUDRATE 30801920
#endif

// <o> HCI_UART_FLOW_CONTROL  - Hardware Flow Control
 
// <0=> Disabled 
// <1=> Enabled 

#ifndef HCI_UART_FLOW_CONTROL
#define HCI_UART_FLOW_CONTROL 0
#endif

// <o> HCI_UART_RX_PIN - UART RX pin 
#ifndef HCI_UART_RX_PIN
#define HCI_UART_RX_PIN 8
#endif

// <o> HCI_UART_TX_PIN - UART TX pin 
#ifndef HCI_UART_TX_PIN
#define HCI_UART_TX_PIN 6
#endif

// <o> HCI_UART_RTS_PIN - UART RTS pin 
#ifndef HCI_UART_RTS_PIN
#define HCI_UART_RTS_PIN 5
#endif

// <o> HCI_UART_CTS_PIN - UART CTS pin 
#ifndef HCI_UART_CTS_PIN
#define HCI_UART_CTS_PIN 7
#endif

// </e>

// <e> HCI_TRANSPORT_ENABLED - hci_transport - HCI transport
//==========================================================
#ifndef HCI_TRANSPORT_ENABLED
#define HCI_TRANSPORT_ENABLED 1
#endif
// <o> HCI_MAX_PACKET_SIZE_IN_BITS - Maximum size of a single application packet in bits. 
#ifndef HCI_MAX_PACKET_SIZE_IN_BITS
#define HCI_MAX_PACKET_SIZE_IN_BITS 8000
#endif

// </e>

// <q> LED_SOFTBLINK_ENABLED  - led_softblink - led_softblink module
 

#ifndef LED_SOFTBLINK_ENABLED
#define LED_SOFTBLINK_ENABLED 1
#endif

// <q> LOW_POWER_PWM_ENABLED  - low_power_pwm - low_power_pwm module
 

#ifndef LOW_POWER_PWM_ENABLED
#define LOW_POWER_PWM_ENABLED 1
#endif

// <e> MEM_MANAGER_ENABLED - mem_manager - Dynamic memory allocator
//==========================================================
#ifndef MEM_MANAGER_ENABLED
#define MEM_MANAGER_ENABLED 1
#endif
// <o> MEMORY_MANAGER_SMALL_BLOCK_COUNT - Size of each memory blocks identified as 'small' block.  <0-255> 


#ifndef MEMORY_MANAGER_SMALL_BLOCK_COUNT
#define MEMORY_MANAGER_SMALL_BLOCK_COUNT 1
#endif

// <o> MEMORY_MANAGER_SMALL_BLOCK_SIZE -  Size of each memory blocks identified as 'small' block. 
// <i>  Size of each memory blocks identified as 'small' block. Memory block are recommended to be word-sized.

#ifndef MEMORY_MANAGER_SMALL_BLOCK_SIZE
#define MEMORY_MANAGER_SMALL_BLOCK_SIZE 32
#endif

// <o> MEMORY_MANAGER_MEDIUM_BLOCK_COUNT - Size of each memory blocks identified as 'medium' block.  <0-255> 


#ifndef MEMORY_MANAGER_MEDIUM_BLOCK_COUNT
#define MEMORY_MANAGER_MEDIUM_BLOCK_COUNT 0
#endif

// <o> MEMORY_MANAGER_MEDIUM_BLOCK_SIZE -  Size of each memory blocks identified as 'medium' block. 
// <i>  Size of each memory blocks identified as 'medium' block. Memory block are recommended to be word-sized.

#ifndef MEMORY_MANAGER_MEDIUM_BLOCK_SIZE
#define MEMORY_MANAGER_MEDIUM_BLOCK_SIZE 256
#endif

// <o> MEMORY_MANAGER_LARGE_BLOCK_COUNT - Size of each memory blocks identified as 'large' block.  <0-255> 


#ifndef MEMORY_MANAGER_LARGE_BLOCK_COUNT
#define MEMORY_MANAGER_LARGE_BLOCK_COUNT 0
#endif

// <o> MEMORY_MANAGER_LARGE_BLOCK_SIZE -  Size of each memory blocks identified as 'large' block. 
// <i>  Size of each memory blocks identified as 'large' block. Memory block are recommended to be word-sized.

#ifndef MEMORY_MANAGER_LARGE_BLOCK_SIZE
#define MEMORY_MANAGER_LARGE_BLOCK_SIZE 256
#endif

// <o> MEMORY_MANAGER_XLARGE_BLOCK_COUNT - Size of each memory blocks identified as 'extra large' block.  <0-255> 


#ifndef MEMORY_MANAGER_XLARGE_BLOCK_COUNT
#define MEMORY_MANAGER_XLARGE_BLOCK_COUNT 0
#endif

// <o> MEMORY_MANAGER_XLARGE_BLOCK_SIZE -  Size of each memory blocks identified as 'extra large' block. 
// <i>  Size of each memory blocks identified as 'extra large' block. Memory block are recommended to be word-sized.

#ifndef MEMORY_MANAGER_XLARGE_BLOCK_SIZE
#define MEMORY_MANAGER_XLARGE_BLOCK_SIZE 1320
#endif

// <o> MEMORY_MANAGER_XXLARGE_BLOCK_COUNT - Size of each memory blocks identified as 'extra extra large' block.  <0-255> 


#ifndef MEMORY_MANAGER_XXLARGE_BLOCK_COUNT
#define MEMORY_MANAGER_XXLARGE_BLOCK_COUNT 0
#endif

// <o> MEMORY_MANAGER_XXLARGE_BLOCK_SIZE -  Size of each memory blocks identified as 'extra extra large' block. 
// <i>  Size of each memory blocks identified as 'extra extra large' block. Memory block are recommended to be word-sized.

#ifndef MEMORY_MANAGER_XXLARGE_BLOCK_SIZE
#define MEMORY_MANAGER_XXLARGE_BLOCK_SIZE 3444
#endif

// <o> MEMORY_MANAGER_XSMALL_BLOCK_COUNT - Size of each memory blocks identified as 'extra small' block.  <0-255> 


#ifndef MEMORY_MANAGER_XSMALL_BLOCK_COUNT
#define MEMORY_MANAGER_XSMALL_BLOCK_COUNT 0
#endif

// <o> MEMORY_MANAGER_XSMALL_BLOCK_SIZE -  Size of each memory blocks identified as 'extra small' block. 
// <i>  Size of each memory blocks identified as 'extra large' block. Memory block are recommended to be word-sized.

#ifndef MEMORY_MANAGER_XSMALL_BLOCK_SIZE
#define MEMORY_MANAGER_XSMALL_BLOCK_SIZE 64
#endif

// <o> MEMORY_MANAGER_XXSMALL_BLOCK_COUNT - Size of each memory blocks identified as 'extra extra small' block.  <0-255> 


#ifndef MEMORY_MANAGER_XXSMALL_BLOCK_COUNT
#define MEMORY_MANAGER_XXSMALL_BLOCK_COUNT 0
#endif

// <o> MEMORY_MANAGER_XXSMALL_BLOCK_SIZE -  Size of each memory blocks identified as 'extra extra small' block. 
// <i>  Size of each memory blocks identified as 'extra extra small' block. Memory block are recommended to be word-sized.

#ifndef MEMORY_MANAGER_XXSMALL_BLOCK_SIZE
#define MEMORY_MANAGER_XXSMALL_BLOCK_SIZE 32
#endif

// <e> MEM_MANAGER_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef MEM_MANAGER_CONFIG_LOG_ENABLED
#define MEM_MANAGER_CONFIG_LOG_ENABLED 0
#endif
// <o> MEM_MANAGER_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef MEM_MANAGER_CONFIG_LOG_LEVEL
#define MEM_MANAGER_CONFIG_LOG_LEVEL 3
#endif

// <o> MEM_MANAGER_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef MEM_MANAGER_CONFIG_INFO_COLOR
#define MEM_MANAGER_CONFIG_INFO_COLOR 0
#endif

// <o> MEM_MANAGER_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef MEM_MANAGER_CONFIG_DEBUG_COLOR
#define MEM_MANAGER_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <q> MEM_MANAGER_DISABLE_API_PARAM_CHECK  - Disable API parameter checks in the module.
 

#ifndef MEM_MANAGER_DISABLE_API_PARAM_CHECK
#define MEM_MANAGER_DISABLE_API_PARAM_CHECK 0
#endif

// </e>

// <e> NRF_BALLOC_ENABLED - nrf_balloc - Block allocator module
//==========================================================
#ifndef NRF_BALLOC_ENABLED
#define NRF_BALLOC_ENABLED 1
#endif
// <e> NRF_BALLOC_CONFIG_DEBUG_ENABLED - Enables debug mode in the module.
//==========================================================
#ifndef NRF_BALLOC_CONFIG_DEBUG_ENABLED
#define NRF_BALLOC_CONFIG_DEBUG_ENABLED 0
#endif
// <o> NRF_BALLOC_CONFIG_HEAD_GUARD_WORDS - Number of words used as head guard.  <0-255> 


#ifndef NRF_BALLOC_CONFIG_HEAD_GUARD_WORDS
#define NRF_BALLOC_CONFIG_HEAD_GUARD_WORDS 1
#endif

// <o> NRF_BALLOC_CONFIG_TAIL_GUARD_WORDS - Number of words used as tail guard.  <0-255> 


#ifndef NRF_BALLOC_CONFIG_TAIL_GUARD_WORDS
#define NRF_BALLOC_CONFIG_TAIL_GUARD_WORDS 1
#endif

// <q> NRF_BALLOC_CONFIG_BASIC_CHECKS_ENABLED  - Enables basic checks in this module.
 

#ifndef NRF_BALLOC_CONFIG_BASIC_CHECKS_ENABLED
#define NRF_BALLOC_CONFIG_BASIC_CHECKS_ENABLED 0
#endif

// <q> NRF_BALLOC_CONFIG_DOUBLE_FREE_CHECK_ENABLED  - Enables double memory free check in this module.
 

#ifndef NRF_BALLOC_CONFIG_DOUBLE_FREE_CHECK_ENABLED
#define NRF_BALLOC_CONFIG_DOUBLE_FREE_CHECK_ENABLED 0
#endif

// <q> NRF_BALLOC_CONFIG_DATA_TRASHING_CHECK_ENABLED  - Enables free memory corruption check in this module.
 

#ifndef NRF_BALLOC_CONFIG_DATA_TRASHING_CHECK_ENABLED
#define NRF_BALLOC_CONFIG_DATA_TRASHING_CHECK_ENABLED 0
#endif

// <q> NRF_BALLOC_CLI_CMDS  - Enable CLI commands specific to the module
 

#ifndef NRF_BALLOC_CLI_CMDS
#define NRF_BALLOC_CLI_CMDS 1
#endif

// </e>

// </e>

// <q> NRF_CLI_UART_ENABLED  - nrf_cli_uart - UART command line interface transport
 

#ifndef NRF_CLI_UART_ENABLED
#define NRF_CLI_UART_ENABLED 1
#endif

// <e> NRF_CSENSE_ENABLED - nrf_csense - Capacitive sensor module
//==========================================================
#ifndef NRF_CSENSE_ENABLED
#define NRF_CSENSE_ENABLED 1
#endif
// <o> NRF_CSENSE_PAD_HYSTERESIS - Minimum value of change required to determine that a pad was touched. 
#ifndef NRF_CSENSE_PAD_HYSTERESIS
#define NRF_CSENSE_PAD_HYSTERESIS 15
#endif

// <o> NRF_CSENSE_PAD_DEVIATION - Minimum value measured on a pad required to take it into account while calculating the step. 
#ifndef NRF_CSENSE_PAD_DEVIATION
#define NRF_CSENSE_PAD_DEVIATION 70
#endif

// <o> NRF_CSENSE_MIN_PAD_VALUE - Minimum normalized value on a pad required to take its value into account. 
#ifndef NRF_CSENSE_MIN_PAD_VALUE
#define NRF_CSENSE_MIN_PAD_VALUE 20
#endif

// <o> NRF_CSENSE_MAX_PADS_NUMBER - Maximum number of pads used for one instance. 
#ifndef NRF_CSENSE_MAX_PADS_NUMBER
#define NRF_CSENSE_MAX_PADS_NUMBER 20
#endif

// <o> NRF_CSENSE_MAX_VALUE - Maximum normalized value obtained from measurement. 
#ifndef NRF_CSENSE_MAX_VALUE
#define NRF_CSENSE_MAX_VALUE 1000
#endif

// <o> NRF_CSENSE_OUTPUT_PIN - Output pin used by the low-level module. 
// <i> This is used when capacitive sensor does not use COMP.

#ifndef NRF_CSENSE_OUTPUT_PIN
#define NRF_CSENSE_OUTPUT_PIN 26
#endif

// </e>

// <e> NRF_DRV_CSENSE_ENABLED - nrf_drv_csense - Capacitive sensor low-level module
//==========================================================
#ifndef NRF_DRV_CSENSE_ENABLED
#define NRF_DRV_CSENSE_ENABLED 1
#endif
// <e> USE_COMP - Use the comparator to implement the capacitive sensor driver.

// <i> Due to Anomaly 84, COMP I_SOURCE is not functional. It has too high a varation.
//==========================================================
#ifndef USE_COMP
#define USE_COMP 0
#endif
// <o> TIMER0_FOR_CSENSE - First TIMER instance used by the driver (not used on nRF51). 
#ifndef TIMER0_FOR_CSENSE
#define TIMER0_FOR_CSENSE 1
#endif

// <o> TIMER1_FOR_CSENSE - Second TIMER instance used by the driver (not used on nRF51). 
#ifndef TIMER1_FOR_CSENSE
#define TIMER1_FOR_CSENSE 2
#endif

// <o> MEASUREMENT_PERIOD - Single measurement period. 
// <i> Time of a single measurement can be calculated as
// <i> T = (1/2)*MEASUREMENT_PERIOD*(1/f_OSC) where f_OSC = I_SOURCE / (2C*(VUP-VDOWN) ).
// <i> I_SOURCE, VUP, and VDOWN are values used to initialize COMP and C is the capacitance of the used pad.

#ifndef MEASUREMENT_PERIOD
#define MEASUREMENT_PERIOD 20
#endif

// </e>

// </e>

// <e> NRF_FSTORAGE_ENABLED - nrf_fstorage - Flash abstraction library
//==========================================================
#ifndef NRF_FSTORAGE_ENABLED
#define NRF_FSTORAGE_ENABLED 1
#endif
// <h> nrf_fstorage - Common settings

// <i> Common settings to all fstorage implementations
//==========================================================
// <q> NRF_FSTORAGE_PARAM_CHECK_DISABLED  - Disable user input validation
 

// <i> If selected, use ASSERT to validate user input.
// <i> This effectively removes user input validation in production code.
// <i> Recommended setting: OFF, only enable this setting if size is a major concern.

#ifndef NRF_FSTORAGE_PARAM_CHECK_DISABLED
#define NRF_FSTORAGE_PARAM_CHECK_DISABLED 0
#endif

// </h> 
//==========================================================

// <h> nrf_fstorage_sd - Implementation using the SoftDevice

// <i> Configuration options for the fstorage implementation using the SoftDevice
//==========================================================
// <o> NRF_FSTORAGE_SD_QUEUE_SIZE - Size of the internal queue of operations 
// <i> Increase this value if API calls frequently return the error @ref NRF_ERROR_NO_MEM.

#ifndef NRF_FSTORAGE_SD_QUEUE_SIZE
#define NRF_FSTORAGE_SD_QUEUE_SIZE 4
#endif

// <o> NRF_FSTORAGE_SD_MAX_RETRIES - Maximum number of attempts at executing an operation when the SoftDevice is busy 
// <i> Increase this value if events frequently return the @ref NRF_ERROR_TIMEOUT error.
// <i> The SoftDevice might fail to schedule flash access due to high BLE activity.

#ifndef NRF_FSTORAGE_SD_MAX_RETRIES
#define NRF_FSTORAGE_SD_MAX_RETRIES 8
#endif

// <o> NRF_FSTORAGE_SD_MAX_WRITE_SIZE - Maximum number of bytes to be written to flash in a single operation 
// <i> This value must be a multiple of four.
// <i> Lowering this value can increase the chances of the SoftDevice being able to execute flash operations in between radio activity.
// <i> This value is bound by the maximum number of bytes that can be written to flash in a single call to @ref sd_flash_write.
// <i> That is 1024 bytes for nRF51 ICs and 4096 bytes for nRF52 ICs.

#ifndef NRF_FSTORAGE_SD_MAX_WRITE_SIZE
#define NRF_FSTORAGE_SD_MAX_WRITE_SIZE 4096
#endif

// </h> 
//==========================================================

// </e>

// <q> NRF_GFX_ENABLED  - nrf_gfx - GFX module
 

#ifndef NRF_GFX_ENABLED
#define NRF_GFX_ENABLED 1
#endif

// <q> NRF_MEMOBJ_ENABLED  - nrf_memobj - Linked memory allocator module
 

#ifndef NRF_MEMOBJ_ENABLED
#define NRF_MEMOBJ_ENABLED 1
#endif

// <e> NRF_PWR_MGMT_ENABLED - nrf_pwr_mgmt - Power management module
//==========================================================
#ifndef NRF_PWR_MGMT_ENABLED
#define NRF_PWR_MGMT_ENABLED 1
#endif
// <e> NRF_PWR_MGMT_CONFIG_DEBUG_PIN_ENABLED - Enables pin debug in the module.

// <i> Selected pin will be set when CPU is in sleep mode.
//==========================================================
#ifndef NRF_PWR_MGMT_CONFIG_DEBUG_PIN_ENABLED
#define NRF_PWR_MGMT_CONFIG_DEBUG_PIN_ENABLED 0
#endif
// <o> NRF_PWR_MGMT_SLEEP_DEBUG_PIN  - Pin number
 
// <0=> 0 (P0.0) 
// <1=> 1 (P0.1) 
// <2=> 2 (P0.2) 
// <3=> 3 (P0.3) 
// <4=> 4 (P0.4) 
// <5=> 5 (P0.5) 
// <6=> 6 (P0.6) 
// <7=> 7 (P0.7) 
// <8=> 8 (P0.8) 
// <9=> 9 (P0.9) 
// <10=> 10 (P0.10) 
// <11=> 11 (P0.11) 
// <12=> 12 (P0.12) 
// <13=> 13 (P0.13) 
// <14=> 14 (P0.14) 
// <15=> 15 (P0.15) 
// <16=> 16 (P0.16) 
// <17=> 17 (P0.17) 
// <18=> 18 (P0.18) 
// <19=> 19 (P0.19) 
// <20=> 20 (P0.20) 
// <21=> 21 (P0.21) 
// <22=> 22 (P0.22) 
// <23=> 23 (P0.23) 
// <24=> 24 (P0.24) 
// <25=> 25 (P0.25) 
// <26=> 26 (P0.26) 
// <27=> 27 (P0.27) 
// <28=> 28 (P0.28) 
// <29=> 29 (P0.29) 
// <30=> 30 (P0.30) 
// <31=> 31 (P0.31) 
// <4294967295=> Not connected 

#ifndef NRF_PWR_MGMT_SLEEP_DEBUG_PIN
#define NRF_PWR_MGMT_SLEEP_DEBUG_PIN 31
#endif

// </e>

// <q> NRF_PWR_MGMT_CONFIG_CPU_USAGE_MONITOR_ENABLED  - Enables CPU usage monitor.
 

// <i> Module will trace percentage of CPU usage in one second intervals.

#ifndef NRF_PWR_MGMT_CONFIG_CPU_USAGE_MONITOR_ENABLED
#define NRF_PWR_MGMT_CONFIG_CPU_USAGE_MONITOR_ENABLED 0
#endif

// <e> NRF_PWR_MGMT_CONFIG_STANDBY_TIMEOUT_ENABLED - Enable standby timeout.
//==========================================================
#ifndef NRF_PWR_MGMT_CONFIG_STANDBY_TIMEOUT_ENABLED
#define NRF_PWR_MGMT_CONFIG_STANDBY_TIMEOUT_ENABLED 0
#endif
// <o> NRF_PWR_MGMT_CONFIG_STANDBY_TIMEOUT_S - Standby timeout (in seconds). 
// <i> Shutdown procedure will begin no earlier than after this number of seconds.

#ifndef NRF_PWR_MGMT_CONFIG_STANDBY_TIMEOUT_S
#define NRF_PWR_MGMT_CONFIG_STANDBY_TIMEOUT_S 3
#endif

// </e>

// <q> NRF_PWR_MGMT_CONFIG_FPU_SUPPORT_ENABLED  - Enables FPU event cleaning.
 

#ifndef NRF_PWR_MGMT_CONFIG_FPU_SUPPORT_ENABLED
#define NRF_PWR_MGMT_CONFIG_FPU_SUPPORT_ENABLED 1
#endif

// <q> NRF_PWR_MGMT_CONFIG_AUTO_SHUTDOWN_RETRY  - Blocked shutdown procedure will be retried every second.
 

#ifndef NRF_PWR_MGMT_CONFIG_AUTO_SHUTDOWN_RETRY
#define NRF_PWR_MGMT_CONFIG_AUTO_SHUTDOWN_RETRY 0
#endif

// <q> NRF_PWR_MGMT_CONFIG_USE_SCHEDULER  - Module will use @ref app_scheduler.
 

#ifndef NRF_PWR_MGMT_CONFIG_USE_SCHEDULER
#define NRF_PWR_MGMT_CONFIG_USE_SCHEDULER 0
#endif

// <o> NRF_PWR_MGMT_CONFIG_HANDLER_PRIORITY_COUNT - The number of priorities for module handlers. 
// <i> The number of stages of the shutdown process.

#ifndef NRF_PWR_MGMT_CONFIG_HANDLER_PRIORITY_COUNT
#define NRF_PWR_MGMT_CONFIG_HANDLER_PRIORITY_COUNT 3
#endif

// </e>

// <e> NRF_QUEUE_ENABLED - nrf_queue - Queue module
//==========================================================
#ifndef NRF_QUEUE_ENABLED
#define NRF_QUEUE_ENABLED 1
#endif
// <q> NRF_QUEUE_CLI_CMDS  - Enable CLI commands specific to the module
 

#ifndef NRF_QUEUE_CLI_CMDS
#define NRF_QUEUE_CLI_CMDS 1
#endif

// </e>

// <q> NRF_SECTION_ITER_ENABLED  - nrf_section_iter - Section iterator
 

#ifndef NRF_SECTION_ITER_ENABLED
#define NRF_SECTION_ITER_ENABLED 1
#endif

// <q> NRF_SORTLIST_ENABLED  - nrf_sortlist - Sorted list
 

#ifndef NRF_SORTLIST_ENABLED
#define NRF_SORTLIST_ENABLED 1
#endif

// <q> NRF_SPI_MNGR_ENABLED  - nrf_spi_mngr - SPI transaction manager
 

#ifndef NRF_SPI_MNGR_ENABLED
#define NRF_SPI_MNGR_ENABLED 1
#endif

// <q> NRF_STRERROR_ENABLED  - nrf_strerror - Library for converting error code to string.
 

#ifndef NRF_STRERROR_ENABLED
#define NRF_STRERROR_ENABLED 1
#endif

// <q> NRF_TWI_MNGR_ENABLED  - nrf_twi_mngr - TWI transaction manager
 

#ifndef NRF_TWI_MNGR_ENABLED
#define NRF_TWI_MNGR_ENABLED 1
#endif

// <q> SLIP_ENABLED  - slip - SLIP encoding and decoding
 

#ifndef SLIP_ENABLED
#define SLIP_ENABLED 1
#endif

// <e> TASK_MANAGER_ENABLED - task_manager - Task manager.
//==========================================================
#ifndef TASK_MANAGER_ENABLED
#define TASK_MANAGER_ENABLED 1
#endif
// <q> TASK_MANAGER_CLI_CMDS  - Enable CLI commands specific to the module
 

#ifndef TASK_MANAGER_CLI_CMDS
#define TASK_MANAGER_CLI_CMDS 1
#endif

// <o> TASK_MANAGER_CONFIG_MAX_TASKS - Maximum number of tasks which can be created 
#ifndef TASK_MANAGER_CONFIG_MAX_TASKS
#define TASK_MANAGER_CONFIG_MAX_TASKS 2
#endif

// <o> TASK_MANAGER_CONFIG_STACK_SIZE - Stack size for every task (power of 2) 
#ifndef TASK_MANAGER_CONFIG_STACK_SIZE
#define TASK_MANAGER_CONFIG_STACK_SIZE 1024
#endif

// <q> TASK_MANAGER_CONFIG_STACK_PROFILER_ENABLED  - Enable stack profiling.
 

#ifndef TASK_MANAGER_CONFIG_STACK_PROFILER_ENABLED
#define TASK_MANAGER_CONFIG_STACK_PROFILER_ENABLED 1
#endif

// <o> TASK_MANAGER_CONFIG_STACK_GUARD  - Configures stack guard.
 
// <0=> Disabled 
// <4=> 32 bytes 
// <5=> 64 bytes 
// <6=> 128 bytes 
// <7=> 256 bytes 
// <8=> 512 bytes 

#ifndef TASK_MANAGER_CONFIG_STACK_GUARD
#define TASK_MANAGER_CONFIG_STACK_GUARD 7
#endif

// </e>

// <h> app_button - buttons handling module

//==========================================================
// <q> BUTTON_ENABLED  - Enables Button module
 

#ifndef BUTTON_ENABLED
#define BUTTON_ENABLED 1
#endif

// <q> BUTTON_HIGH_ACCURACY_ENABLED  - Enables GPIOTE high accuracy for buttons
 

#ifndef BUTTON_HIGH_ACCURACY_ENABLED
#define BUTTON_HIGH_ACCURACY_ENABLED 0
#endif

// </h> 
//==========================================================

// <h> nrf_cli - Command line interface

//==========================================================
// <q> NRF_CLI_ENABLED  - Enable/disable the CLI module.
 

#ifndef NRF_CLI_ENABLED
#define NRF_CLI_ENABLED 1
#endif

// <o> NRF_CLI_ARGC_MAX - Maximum number of parameters passed to the command handler. 
#ifndef NRF_CLI_ARGC_MAX
#define NRF_CLI_ARGC_MAX 12
#endif

// <q> NRF_CLI_BUILD_IN_CMDS_ENABLED  - CLI built-in commands.
 

#ifndef NRF_CLI_BUILD_IN_CMDS_ENABLED
#define NRF_CLI_BUILD_IN_CMDS_ENABLED 1
#endif

// <o> NRF_CLI_CMD_BUFF_SIZE - Maximum buffer size for a single command. 
#ifndef NRF_CLI_CMD_BUFF_SIZE
#define NRF_CLI_CMD_BUFF_SIZE 128
#endif

// <q> NRF_CLI_ECHO_STATUS  - CLI echo status. If set, echo is ON.
 

#ifndef NRF_CLI_ECHO_STATUS
#define NRF_CLI_ECHO_STATUS 1
#endif

// <q> NRF_CLI_WILDCARD_ENABLED  - Enable wildcard functionality for CLI commands.
 

#ifndef NRF_CLI_WILDCARD_ENABLED
#define NRF_CLI_WILDCARD_ENABLED 0
#endif

// <q> NRF_CLI_METAKEYS_ENABLED  - Enable additional control keys for CLI commands like ctrl+a, ctrl+e, ctrl+w, ctrl+u
 

#ifndef NRF_CLI_METAKEYS_ENABLED
#define NRF_CLI_METAKEYS_ENABLED 0
#endif

// <o> NRF_CLI_PRINTF_BUFF_SIZE - Maximum print buffer size. 
#ifndef NRF_CLI_PRINTF_BUFF_SIZE
#define NRF_CLI_PRINTF_BUFF_SIZE 23
#endif

// <e> NRF_CLI_HISTORY_ENABLED - Enable CLI history mode.
//==========================================================
#ifndef NRF_CLI_HISTORY_ENABLED
#define NRF_CLI_HISTORY_ENABLED 1
#endif
// <o> NRF_CLI_HISTORY_ELEMENT_SIZE - Size of one memory object reserved for CLI history. 
#ifndef NRF_CLI_HISTORY_ELEMENT_SIZE
#define NRF_CLI_HISTORY_ELEMENT_SIZE 32
#endif

// <o> NRF_CLI_HISTORY_ELEMENT_COUNT - Number of history memory objects. 
#ifndef NRF_CLI_HISTORY_ELEMENT_COUNT
#define NRF_CLI_HISTORY_ELEMENT_COUNT 8
#endif

// </e>

// <q> NRF_CLI_VT100_COLORS_ENABLED  - CLI VT100 colors.
 

#ifndef NRF_CLI_VT100_COLORS_ENABLED
#define NRF_CLI_VT100_COLORS_ENABLED 1
#endif

// <q> NRF_CLI_STATISTICS_ENABLED  - Enable CLI statistics.
 

#ifndef NRF_CLI_STATISTICS_ENABLED
#define NRF_CLI_STATISTICS_ENABLED 1
#endif

// <q> NRF_CLI_LOG_BACKEND  - Enable logger backend interface.
 

#ifndef NRF_CLI_LOG_BACKEND
#define NRF_CLI_LOG_BACKEND 1
#endif

// <q> NRF_CLI_USES_TASK_MANAGER_ENABLED  - Enable CLI to use task_manager
 

#ifndef NRF_CLI_USES_TASK_MANAGER_ENABLED
#define NRF_CLI_USES_TASK_MANAGER_ENABLED 0
#endif

// </h> 
//==========================================================

// <h> nrf_fprintf - fprintf function.

//==========================================================
// <q> NRF_FPRINTF_ENABLED  - Enable/disable fprintf module.
 

#ifndef NRF_FPRINTF_ENABLED
#define NRF_FPRINTF_ENABLED 1
#endif

// <q> NRF_FPRINTF_FLAG_AUTOMATIC_CR_ON_LF_ENABLED  - For each printed LF, function will add CR.
 

#ifndef NRF_FPRINTF_FLAG_AUTOMATIC_CR_ON_LF_ENABLED
#define NRF_FPRINTF_FLAG_AUTOMATIC_CR_ON_LF_ENABLED 1
#endif

// </h> 
//==========================================================

// </h> 
//==========================================================

// <h> nRF_Log 

//==========================================================
// <e> NRF_LOG_ENABLED - nrf_log - Logger
//==========================================================
#ifndef NRF_LOG_ENABLED
#define NRF_LOG_ENABLED 0
#endif
// <h> Log message pool - Configuration of log message pool

//==========================================================
// <o> NRF_LOG_MSGPOOL_ELEMENT_SIZE - Size of a single element in the pool of memory objects. 
// <i> If a small value is set, then performance of logs processing
// <i> is degraded because data is fragmented. Bigger value impacts
// <i> RAM memory utilization. The size is set to fit a message with
// <i> a timestamp and up to 2 arguments in a single memory object.

#ifndef NRF_LOG_MSGPOOL_ELEMENT_SIZE
#define NRF_LOG_MSGPOOL_ELEMENT_SIZE 20
#endif

// <o> NRF_LOG_MSGPOOL_ELEMENT_COUNT - Number of elements in the pool of memory objects 
// <i> If a small value is set, then it may lead to a deadlock
// <i> in certain cases if backend has high latency and holds
// <i> multiple messages for long time. Bigger value impacts
// <i> RAM memory usage.

#ifndef NRF_LOG_MSGPOOL_ELEMENT_COUNT
#define NRF_LOG_MSGPOOL_ELEMENT_COUNT 8
#endif

// </h> 
//==========================================================

// <q> NRF_LOG_ALLOW_OVERFLOW  - Configures behavior when circular buffer is full.
 

// <i> If set then oldest logs are overwritten. Otherwise a 
// <i> marker is injected informing about overflow.

#ifndef NRF_LOG_ALLOW_OVERFLOW
#define NRF_LOG_ALLOW_OVERFLOW 1
#endif

// <o> NRF_LOG_BUFSIZE  - Size of the buffer for storing logs (in bytes).
 

// <i> Must be power of 2 and multiple of 4.
// <i> If NRF_LOG_DEFERRED = 0 then buffer size can be reduced to minimum.
// <128=> 128 
// <256=> 256 
// <512=> 512 
// <1024=> 1024 
// <2048=> 2048 
// <4096=> 4096 
// <8192=> 8192 
// <16384=> 16384 

#ifndef NRF_LOG_BUFSIZE
#define NRF_LOG_BUFSIZE 1024
#endif

// <q> NRF_LOG_CLI_CMDS  - Enable CLI commands for the module.
 

#ifndef NRF_LOG_CLI_CMDS
#define NRF_LOG_CLI_CMDS 1
#endif

// <o> NRF_LOG_DEFAULT_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_LOG_DEFAULT_LEVEL
#define NRF_LOG_DEFAULT_LEVEL 3
#endif

// <q> NRF_LOG_DEFERRED  - Enable deffered logger.
 

// <i> Log data is buffered and can be processed in idle.

#ifndef NRF_LOG_DEFERRED
#define NRF_LOG_DEFERRED 1
#endif

// <q> NRF_LOG_FILTERS_ENABLED  - Enable dynamic filtering of logs.
 

#ifndef NRF_LOG_FILTERS_ENABLED
#define NRF_LOG_FILTERS_ENABLED 1
#endif

// <o> NRF_LOG_STR_PUSH_BUFFER_SIZE  - Size of the buffer dedicated for strings stored using @ref NRF_LOG_PUSH.
 
// <16=> 16 
// <32=> 32 
// <64=> 64 
// <128=> 128 
// <256=> 256 
// <512=> 512 
// <1024=> 1024 

#ifndef NRF_LOG_STR_PUSH_BUFFER_SIZE
#define NRF_LOG_STR_PUSH_BUFFER_SIZE 128
#endif

// <o> NRF_LOG_STR_PUSH_BUFFER_SIZE  - Size of the buffer dedicated for strings stored using @ref NRF_LOG_PUSH.
 
// <16=> 16 
// <32=> 32 
// <64=> 64 
// <128=> 128 
// <256=> 256 
// <512=> 512 
// <1024=> 1024 

#ifndef NRF_LOG_STR_PUSH_BUFFER_SIZE
#define NRF_LOG_STR_PUSH_BUFFER_SIZE 128
#endif

// <e> NRF_LOG_USES_COLORS - If enabled then ANSI escape code for colors is prefixed to every string
//==========================================================
#ifndef NRF_LOG_USES_COLORS
#define NRF_LOG_USES_COLORS 0
#endif
// <o> NRF_LOG_COLOR_DEFAULT  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_LOG_COLOR_DEFAULT
#define NRF_LOG_COLOR_DEFAULT 0
#endif

// <o> NRF_LOG_ERROR_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_LOG_ERROR_COLOR
#define NRF_LOG_ERROR_COLOR 2
#endif

// <o> NRF_LOG_WARNING_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_LOG_WARNING_COLOR
#define NRF_LOG_WARNING_COLOR 4
#endif

// </e>

// <e> NRF_LOG_USES_TIMESTAMP - Enable timestamping

// <i> Function for getting the timestamp is provided by the user
//==========================================================
#ifndef NRF_LOG_USES_TIMESTAMP
#define NRF_LOG_USES_TIMESTAMP 0
#endif
// <o> NRF_LOG_TIMESTAMP_DEFAULT_FREQUENCY - Default frequency of the timestamp (in Hz) or 0 to use app_timer frequency. 
#ifndef NRF_LOG_TIMESTAMP_DEFAULT_FREQUENCY
#define NRF_LOG_TIMESTAMP_DEFAULT_FREQUENCY 0
#endif

// </e>

// <h> nrf_log module configuration 

//==========================================================
// <h> nrf_log in nRF_Core 

//==========================================================
// <e> NRF_MPU_LIB_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRF_MPU_LIB_CONFIG_LOG_ENABLED
#define NRF_MPU_LIB_CONFIG_LOG_ENABLED 0
#endif
// <o> NRF_MPU_LIB_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_MPU_LIB_CONFIG_LOG_LEVEL
#define NRF_MPU_LIB_CONFIG_LOG_LEVEL 3
#endif

// <o> NRF_MPU_LIB_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_MPU_LIB_CONFIG_INFO_COLOR
#define NRF_MPU_LIB_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_MPU_LIB_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_MPU_LIB_CONFIG_DEBUG_COLOR
#define NRF_MPU_LIB_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> NRF_STACK_GUARD_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRF_STACK_GUARD_CONFIG_LOG_ENABLED
#define NRF_STACK_GUARD_CONFIG_LOG_ENABLED 0
#endif
// <o> NRF_STACK_GUARD_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_STACK_GUARD_CONFIG_LOG_LEVEL
#define NRF_STACK_GUARD_CONFIG_LOG_LEVEL 3
#endif

// <o> NRF_STACK_GUARD_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_STACK_GUARD_CONFIG_INFO_COLOR
#define NRF_STACK_GUARD_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_STACK_GUARD_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_STACK_GUARD_CONFIG_DEBUG_COLOR
#define NRF_STACK_GUARD_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> TASK_MANAGER_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef TASK_MANAGER_CONFIG_LOG_ENABLED
#define TASK_MANAGER_CONFIG_LOG_ENABLED 0
#endif
// <o> TASK_MANAGER_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef TASK_MANAGER_CONFIG_LOG_LEVEL
#define TASK_MANAGER_CONFIG_LOG_LEVEL 3
#endif

// <o> TASK_MANAGER_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef TASK_MANAGER_CONFIG_INFO_COLOR
#define TASK_MANAGER_CONFIG_INFO_COLOR 0
#endif

// <o> TASK_MANAGER_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef TASK_MANAGER_CONFIG_DEBUG_COLOR
#define TASK_MANAGER_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </h> 
//==========================================================

// <h> nrf_log in nRF_Drivers 

//==========================================================
// <e> CLOCK_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef CLOCK_CONFIG_LOG_ENABLED
#define CLOCK_CONFIG_LOG_ENABLED 0
#endif
// <o> CLOCK_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef CLOCK_CONFIG_LOG_LEVEL
#define CLOCK_CONFIG_LOG_LEVEL 3
#endif

// <o> CLOCK_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef CLOCK_CONFIG_INFO_COLOR
#define CLOCK_CONFIG_INFO_COLOR 0
#endif

// <o> CLOCK_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef CLOCK_CONFIG_DEBUG_COLOR
#define CLOCK_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> COMP_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef COMP_CONFIG_LOG_ENABLED
#define COMP_CONFIG_LOG_ENABLED 0
#endif
// <o> COMP_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef COMP_CONFIG_LOG_LEVEL
#define COMP_CONFIG_LOG_LEVEL 3
#endif

// <o> COMP_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef COMP_CONFIG_INFO_COLOR
#define COMP_CONFIG_INFO_COLOR 0
#endif

// <o> COMP_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef COMP_CONFIG_DEBUG_COLOR
#define COMP_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> GPIOTE_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef GPIOTE_CONFIG_LOG_ENABLED
#define GPIOTE_CONFIG_LOG_ENABLED 0
#endif
// <o> GPIOTE_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef GPIOTE_CONFIG_LOG_LEVEL
#define GPIOTE_CONFIG_LOG_LEVEL 3
#endif

// <o> GPIOTE_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef GPIOTE_CONFIG_INFO_COLOR
#define GPIOTE_CONFIG_INFO_COLOR 0
#endif

// <o> GPIOTE_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef GPIOTE_CONFIG_DEBUG_COLOR
#define GPIOTE_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> LPCOMP_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef LPCOMP_CONFIG_LOG_ENABLED
#define LPCOMP_CONFIG_LOG_ENABLED 0
#endif
// <o> LPCOMP_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef LPCOMP_CONFIG_LOG_LEVEL
#define LPCOMP_CONFIG_LOG_LEVEL 3
#endif

// <o> LPCOMP_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef LPCOMP_CONFIG_INFO_COLOR
#define LPCOMP_CONFIG_INFO_COLOR 0
#endif

// <o> LPCOMP_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef LPCOMP_CONFIG_DEBUG_COLOR
#define LPCOMP_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> MAX3421E_HOST_CONFIG_LOG_ENABLED - Enable logging in the module
//==========================================================
#ifndef MAX3421E_HOST_CONFIG_LOG_ENABLED
#define MAX3421E_HOST_CONFIG_LOG_ENABLED 0
#endif
// <o> MAX3421E_HOST_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef MAX3421E_HOST_CONFIG_LOG_LEVEL
#define MAX3421E_HOST_CONFIG_LOG_LEVEL 3
#endif

// <o> MAX3421E_HOST_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef MAX3421E_HOST_CONFIG_INFO_COLOR
#define MAX3421E_HOST_CONFIG_INFO_COLOR 0
#endif

// <o> MAX3421E_HOST_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef MAX3421E_HOST_CONFIG_DEBUG_COLOR
#define MAX3421E_HOST_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> NRFX_USBD_CONFIG_LOG_ENABLED - Enable logging in the module
//==========================================================
#ifndef NRFX_USBD_CONFIG_LOG_ENABLED
#define NRFX_USBD_CONFIG_LOG_ENABLED 0
#endif
// <o> NRFX_USBD_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRFX_USBD_CONFIG_LOG_LEVEL
#define NRFX_USBD_CONFIG_LOG_LEVEL 3
#endif

// <o> NRFX_USBD_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_USBD_CONFIG_INFO_COLOR
#define NRFX_USBD_CONFIG_INFO_COLOR 0
#endif

// <o> NRFX_USBD_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRFX_USBD_CONFIG_DEBUG_COLOR
#define NRFX_USBD_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> PDM_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef PDM_CONFIG_LOG_ENABLED
#define PDM_CONFIG_LOG_ENABLED 0
#endif
// <o> PDM_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef PDM_CONFIG_LOG_LEVEL
#define PDM_CONFIG_LOG_LEVEL 3
#endif

// <o> PDM_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef PDM_CONFIG_INFO_COLOR
#define PDM_CONFIG_INFO_COLOR 0
#endif

// <o> PDM_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef PDM_CONFIG_DEBUG_COLOR
#define PDM_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> PPI_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef PPI_CONFIG_LOG_ENABLED
#define PPI_CONFIG_LOG_ENABLED 0
#endif
// <o> PPI_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef PPI_CONFIG_LOG_LEVEL
#define PPI_CONFIG_LOG_LEVEL 3
#endif

// <o> PPI_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef PPI_CONFIG_INFO_COLOR
#define PPI_CONFIG_INFO_COLOR 0
#endif

// <o> PPI_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef PPI_CONFIG_DEBUG_COLOR
#define PPI_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> PWM_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef PWM_CONFIG_LOG_ENABLED
#define PWM_CONFIG_LOG_ENABLED 0
#endif
// <o> PWM_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef PWM_CONFIG_LOG_LEVEL
#define PWM_CONFIG_LOG_LEVEL 3
#endif

// <o> PWM_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef PWM_CONFIG_INFO_COLOR
#define PWM_CONFIG_INFO_COLOR 0
#endif

// <o> PWM_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef PWM_CONFIG_DEBUG_COLOR
#define PWM_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> QDEC_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef QDEC_CONFIG_LOG_ENABLED
#define QDEC_CONFIG_LOG_ENABLED 0
#endif
// <o> QDEC_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef QDEC_CONFIG_LOG_LEVEL
#define QDEC_CONFIG_LOG_LEVEL 3
#endif

// <o> QDEC_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef QDEC_CONFIG_INFO_COLOR
#define QDEC_CONFIG_INFO_COLOR 0
#endif

// <o> QDEC_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef QDEC_CONFIG_DEBUG_COLOR
#define QDEC_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> RNG_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef RNG_CONFIG_LOG_ENABLED
#define RNG_CONFIG_LOG_ENABLED 0
#endif
// <o> RNG_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef RNG_CONFIG_LOG_LEVEL
#define RNG_CONFIG_LOG_LEVEL 3
#endif

// <o> RNG_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef RNG_CONFIG_INFO_COLOR
#define RNG_CONFIG_INFO_COLOR 0
#endif

// <o> RNG_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef RNG_CONFIG_DEBUG_COLOR
#define RNG_CONFIG_DEBUG_COLOR 0
#endif

// <q> RNG_CONFIG_RANDOM_NUMBER_LOG_ENABLED  - Enables logging of random numbers.
 

#ifndef RNG_CONFIG_RANDOM_NUMBER_LOG_ENABLED
#define RNG_CONFIG_RANDOM_NUMBER_LOG_ENABLED 0
#endif

// </e>

// <e> RTC_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef RTC_CONFIG_LOG_ENABLED
#define RTC_CONFIG_LOG_ENABLED 0
#endif
// <o> RTC_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef RTC_CONFIG_LOG_LEVEL
#define RTC_CONFIG_LOG_LEVEL 3
#endif

// <o> RTC_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef RTC_CONFIG_INFO_COLOR
#define RTC_CONFIG_INFO_COLOR 0
#endif

// <o> RTC_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef RTC_CONFIG_DEBUG_COLOR
#define RTC_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> SAADC_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef SAADC_CONFIG_LOG_ENABLED
#define SAADC_CONFIG_LOG_ENABLED 0
#endif
// <o> SAADC_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef SAADC_CONFIG_LOG_LEVEL
#define SAADC_CONFIG_LOG_LEVEL 3
#endif

// <o> SAADC_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef SAADC_CONFIG_INFO_COLOR
#define SAADC_CONFIG_INFO_COLOR 0
#endif

// <o> SAADC_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef SAADC_CONFIG_DEBUG_COLOR
#define SAADC_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> SPIS_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef SPIS_CONFIG_LOG_ENABLED
#define SPIS_CONFIG_LOG_ENABLED 0
#endif
// <o> SPIS_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef SPIS_CONFIG_LOG_LEVEL
#define SPIS_CONFIG_LOG_LEVEL 3
#endif

// <o> SPIS_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef SPIS_CONFIG_INFO_COLOR
#define SPIS_CONFIG_INFO_COLOR 0
#endif

// <o> SPIS_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef SPIS_CONFIG_DEBUG_COLOR
#define SPIS_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> SPI_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef SPI_CONFIG_LOG_ENABLED
#define SPI_CONFIG_LOG_ENABLED 0
#endif
// <o> SPI_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef SPI_CONFIG_LOG_LEVEL
#define SPI_CONFIG_LOG_LEVEL 3
#endif

// <o> SPI_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef SPI_CONFIG_INFO_COLOR
#define SPI_CONFIG_INFO_COLOR 0
#endif

// <o> SPI_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef SPI_CONFIG_DEBUG_COLOR
#define SPI_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> TIMER_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef TIMER_CONFIG_LOG_ENABLED
#define TIMER_CONFIG_LOG_ENABLED 0
#endif
// <o> TIMER_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef TIMER_CONFIG_LOG_LEVEL
#define TIMER_CONFIG_LOG_LEVEL 3
#endif

// <o> TIMER_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef TIMER_CONFIG_INFO_COLOR
#define TIMER_CONFIG_INFO_COLOR 0
#endif

// <o> TIMER_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef TIMER_CONFIG_DEBUG_COLOR
#define TIMER_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> TWIS_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef TWIS_CONFIG_LOG_ENABLED
#define TWIS_CONFIG_LOG_ENABLED 0
#endif
// <o> TWIS_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef TWIS_CONFIG_LOG_LEVEL
#define TWIS_CONFIG_LOG_LEVEL 3
#endif

// <o> TWIS_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef TWIS_CONFIG_INFO_COLOR
#define TWIS_CONFIG_INFO_COLOR 0
#endif

// <o> TWIS_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef TWIS_CONFIG_DEBUG_COLOR
#define TWIS_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> TWI_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef TWI_CONFIG_LOG_ENABLED
#define TWI_CONFIG_LOG_ENABLED 0
#endif
// <o> TWI_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef TWI_CONFIG_LOG_LEVEL
#define TWI_CONFIG_LOG_LEVEL 3
#endif

// <o> TWI_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef TWI_CONFIG_INFO_COLOR
#define TWI_CONFIG_INFO_COLOR 0
#endif

// <o> TWI_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef TWI_CONFIG_DEBUG_COLOR
#define TWI_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> UART_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef UART_CONFIG_LOG_ENABLED
#define UART_CONFIG_LOG_ENABLED 0
#endif
// <o> UART_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef UART_CONFIG_LOG_LEVEL
#define UART_CONFIG_LOG_LEVEL 3
#endif

// <o> UART_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef UART_CONFIG_INFO_COLOR
#define UART_CONFIG_INFO_COLOR 0
#endif

// <o> UART_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef UART_CONFIG_DEBUG_COLOR
#define UART_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> USBD_CONFIG_LOG_ENABLED - Enable logging in the module
//==========================================================
#ifndef USBD_CONFIG_LOG_ENABLED
#define USBD_CONFIG_LOG_ENABLED 0
#endif
// <o> USBD_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef USBD_CONFIG_LOG_LEVEL
#define USBD_CONFIG_LOG_LEVEL 3
#endif

// <o> USBD_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef USBD_CONFIG_INFO_COLOR
#define USBD_CONFIG_INFO_COLOR 0
#endif

// <o> USBD_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef USBD_CONFIG_DEBUG_COLOR
#define USBD_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> WDT_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef WDT_CONFIG_LOG_ENABLED
#define WDT_CONFIG_LOG_ENABLED 0
#endif
// <o> WDT_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef WDT_CONFIG_LOG_LEVEL
#define WDT_CONFIG_LOG_LEVEL 3
#endif

// <o> WDT_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef WDT_CONFIG_INFO_COLOR
#define WDT_CONFIG_INFO_COLOR 0
#endif

// <o> WDT_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef WDT_CONFIG_DEBUG_COLOR
#define WDT_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </h> 
//==========================================================

// <h> nrf_log in nRF_Libraries 

//==========================================================
// <e> APP_TIMER_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef APP_TIMER_CONFIG_LOG_ENABLED
#define APP_TIMER_CONFIG_LOG_ENABLED 0
#endif
// <o> APP_TIMER_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef APP_TIMER_CONFIG_LOG_LEVEL
#define APP_TIMER_CONFIG_LOG_LEVEL 3
#endif

// <o> APP_TIMER_CONFIG_INITIAL_LOG_LEVEL  - Initial severity level if dynamic filtering is enabled.
 

// <i> If module generates a lot of logs, initial log level can
// <i> be decreased to prevent flooding. Severity level can be
// <i> increased on instance basis.
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef APP_TIMER_CONFIG_INITIAL_LOG_LEVEL
#define APP_TIMER_CONFIG_INITIAL_LOG_LEVEL 3
#endif

// <o> APP_TIMER_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef APP_TIMER_CONFIG_INFO_COLOR
#define APP_TIMER_CONFIG_INFO_COLOR 0
#endif

// <o> APP_TIMER_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef APP_TIMER_CONFIG_DEBUG_COLOR
#define APP_TIMER_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> APP_USBD_CDC_ACM_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef APP_USBD_CDC_ACM_CONFIG_LOG_ENABLED
#define APP_USBD_CDC_ACM_CONFIG_LOG_ENABLED 0
#endif
// <o> APP_USBD_CDC_ACM_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef APP_USBD_CDC_ACM_CONFIG_LOG_LEVEL
#define APP_USBD_CDC_ACM_CONFIG_LOG_LEVEL 3
#endif

// <o> APP_USBD_CDC_ACM_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef APP_USBD_CDC_ACM_CONFIG_INFO_COLOR
#define APP_USBD_CDC_ACM_CONFIG_INFO_COLOR 0
#endif

// <o> APP_USBD_CDC_ACM_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef APP_USBD_CDC_ACM_CONFIG_DEBUG_COLOR
#define APP_USBD_CDC_ACM_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> APP_USBD_CONFIG_LOG_ENABLED - Enable logging in the module.
//==========================================================
#ifndef APP_USBD_CONFIG_LOG_ENABLED
#define APP_USBD_CONFIG_LOG_ENABLED 0
#endif
// <o> APP_USBD_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef APP_USBD_CONFIG_LOG_LEVEL
#define APP_USBD_CONFIG_LOG_LEVEL 3
#endif

// <o> APP_USBD_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef APP_USBD_CONFIG_INFO_COLOR
#define APP_USBD_CONFIG_INFO_COLOR 0
#endif

// <o> APP_USBD_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef APP_USBD_CONFIG_DEBUG_COLOR
#define APP_USBD_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> APP_USBD_DUMMY_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef APP_USBD_DUMMY_CONFIG_LOG_ENABLED
#define APP_USBD_DUMMY_CONFIG_LOG_ENABLED 0
#endif
// <o> APP_USBD_DUMMY_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef APP_USBD_DUMMY_CONFIG_LOG_LEVEL
#define APP_USBD_DUMMY_CONFIG_LOG_LEVEL 3
#endif

// <o> APP_USBD_DUMMY_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef APP_USBD_DUMMY_CONFIG_INFO_COLOR
#define APP_USBD_DUMMY_CONFIG_INFO_COLOR 0
#endif

// <o> APP_USBD_DUMMY_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef APP_USBD_DUMMY_CONFIG_DEBUG_COLOR
#define APP_USBD_DUMMY_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> APP_USBD_MSC_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef APP_USBD_MSC_CONFIG_LOG_ENABLED
#define APP_USBD_MSC_CONFIG_LOG_ENABLED 0
#endif
// <o> APP_USBD_MSC_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef APP_USBD_MSC_CONFIG_LOG_LEVEL
#define APP_USBD_MSC_CONFIG_LOG_LEVEL 3
#endif

// <o> APP_USBD_MSC_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef APP_USBD_MSC_CONFIG_INFO_COLOR
#define APP_USBD_MSC_CONFIG_INFO_COLOR 0
#endif

// <o> APP_USBD_MSC_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef APP_USBD_MSC_CONFIG_DEBUG_COLOR
#define APP_USBD_MSC_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> APP_USBD_NRF_DFU_TRIGGER_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef APP_USBD_NRF_DFU_TRIGGER_CONFIG_LOG_ENABLED
#define APP_USBD_NRF_DFU_TRIGGER_CONFIG_LOG_ENABLED 0
#endif
// <o> APP_USBD_NRF_DFU_TRIGGER_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef APP_USBD_NRF_DFU_TRIGGER_CONFIG_LOG_LEVEL
#define APP_USBD_NRF_DFU_TRIGGER_CONFIG_LOG_LEVEL 3
#endif

// <o> APP_USBD_NRF_DFU_TRIGGER_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef APP_USBD_NRF_DFU_TRIGGER_CONFIG_INFO_COLOR
#define APP_USBD_NRF_DFU_TRIGGER_CONFIG_INFO_COLOR 0
#endif

// <o> APP_USBD_NRF_DFU_TRIGGER_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef APP_USBD_NRF_DFU_TRIGGER_CONFIG_DEBUG_COLOR
#define APP_USBD_NRF_DFU_TRIGGER_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> NRF_ATFIFO_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRF_ATFIFO_CONFIG_LOG_ENABLED
#define NRF_ATFIFO_CONFIG_LOG_ENABLED 0
#endif
// <o> NRF_ATFIFO_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_ATFIFO_CONFIG_LOG_LEVEL
#define NRF_ATFIFO_CONFIG_LOG_LEVEL 3
#endif

// <o> NRF_ATFIFO_CONFIG_LOG_INIT_FILTER_LEVEL  - Initial severity level if dynamic filtering is enabled
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_ATFIFO_CONFIG_LOG_INIT_FILTER_LEVEL
#define NRF_ATFIFO_CONFIG_LOG_INIT_FILTER_LEVEL 3
#endif

// <o> NRF_ATFIFO_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_ATFIFO_CONFIG_INFO_COLOR
#define NRF_ATFIFO_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_ATFIFO_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_ATFIFO_CONFIG_DEBUG_COLOR
#define NRF_ATFIFO_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> NRF_BALLOC_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRF_BALLOC_CONFIG_LOG_ENABLED
#define NRF_BALLOC_CONFIG_LOG_ENABLED 0
#endif
// <o> NRF_BALLOC_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_BALLOC_CONFIG_LOG_LEVEL
#define NRF_BALLOC_CONFIG_LOG_LEVEL 3
#endif

// <o> NRF_BALLOC_CONFIG_INITIAL_LOG_LEVEL  - Initial severity level if dynamic filtering is enabled.
 

// <i> If module generates a lot of logs, initial log level can
// <i> be decreased to prevent flooding. Severity level can be
// <i> increased on instance basis.
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_BALLOC_CONFIG_INITIAL_LOG_LEVEL
#define NRF_BALLOC_CONFIG_INITIAL_LOG_LEVEL 3
#endif

// <o> NRF_BALLOC_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_BALLOC_CONFIG_INFO_COLOR
#define NRF_BALLOC_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_BALLOC_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_BALLOC_CONFIG_DEBUG_COLOR
#define NRF_BALLOC_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> NRF_BLOCK_DEV_EMPTY_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRF_BLOCK_DEV_EMPTY_CONFIG_LOG_ENABLED
#define NRF_BLOCK_DEV_EMPTY_CONFIG_LOG_ENABLED 0
#endif
// <o> NRF_BLOCK_DEV_EMPTY_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_BLOCK_DEV_EMPTY_CONFIG_LOG_LEVEL
#define NRF_BLOCK_DEV_EMPTY_CONFIG_LOG_LEVEL 3
#endif

// <o> NRF_BLOCK_DEV_EMPTY_CONFIG_LOG_INIT_FILTER_LEVEL  - Initial severity level if dynamic filtering is enabled
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_BLOCK_DEV_EMPTY_CONFIG_LOG_INIT_FILTER_LEVEL
#define NRF_BLOCK_DEV_EMPTY_CONFIG_LOG_INIT_FILTER_LEVEL 3
#endif

// <o> NRF_BLOCK_DEV_EMPTY_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_BLOCK_DEV_EMPTY_CONFIG_INFO_COLOR
#define NRF_BLOCK_DEV_EMPTY_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_BLOCK_DEV_EMPTY_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_BLOCK_DEV_EMPTY_CONFIG_DEBUG_COLOR
#define NRF_BLOCK_DEV_EMPTY_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> NRF_BLOCK_DEV_QSPI_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRF_BLOCK_DEV_QSPI_CONFIG_LOG_ENABLED
#define NRF_BLOCK_DEV_QSPI_CONFIG_LOG_ENABLED 0
#endif
// <o> NRF_BLOCK_DEV_QSPI_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_BLOCK_DEV_QSPI_CONFIG_LOG_LEVEL
#define NRF_BLOCK_DEV_QSPI_CONFIG_LOG_LEVEL 3
#endif

// <o> NRF_BLOCK_DEV_QSPI_CONFIG_LOG_INIT_FILTER_LEVEL  - Initial severity level if dynamic filtering is enabled
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_BLOCK_DEV_QSPI_CONFIG_LOG_INIT_FILTER_LEVEL
#define NRF_BLOCK_DEV_QSPI_CONFIG_LOG_INIT_FILTER_LEVEL 3
#endif

// <o> NRF_BLOCK_DEV_QSPI_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_BLOCK_DEV_QSPI_CONFIG_INFO_COLOR
#define NRF_BLOCK_DEV_QSPI_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_BLOCK_DEV_QSPI_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_BLOCK_DEV_QSPI_CONFIG_DEBUG_COLOR
#define NRF_BLOCK_DEV_QSPI_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> NRF_BLOCK_DEV_RAM_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRF_BLOCK_DEV_RAM_CONFIG_LOG_ENABLED
#define NRF_BLOCK_DEV_RAM_CONFIG_LOG_ENABLED 0
#endif
// <o> NRF_BLOCK_DEV_RAM_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_BLOCK_DEV_RAM_CONFIG_LOG_LEVEL
#define NRF_BLOCK_DEV_RAM_CONFIG_LOG_LEVEL 3
#endif

// <o> NRF_BLOCK_DEV_RAM_CONFIG_LOG_INIT_FILTER_LEVEL  - Initial severity level if dynamic filtering is enabled
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_BLOCK_DEV_RAM_CONFIG_LOG_INIT_FILTER_LEVEL
#define NRF_BLOCK_DEV_RAM_CONFIG_LOG_INIT_FILTER_LEVEL 3
#endif

// <o> NRF_BLOCK_DEV_RAM_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_BLOCK_DEV_RAM_CONFIG_INFO_COLOR
#define NRF_BLOCK_DEV_RAM_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_BLOCK_DEV_RAM_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_BLOCK_DEV_RAM_CONFIG_DEBUG_COLOR
#define NRF_BLOCK_DEV_RAM_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> NRF_CLI_BLE_UART_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRF_CLI_BLE_UART_CONFIG_LOG_ENABLED
#define NRF_CLI_BLE_UART_CONFIG_LOG_ENABLED 0
#endif
// <o> NRF_CLI_BLE_UART_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_CLI_BLE_UART_CONFIG_LOG_LEVEL
#define NRF_CLI_BLE_UART_CONFIG_LOG_LEVEL 3
#endif

// <o> NRF_CLI_BLE_UART_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_CLI_BLE_UART_CONFIG_INFO_COLOR
#define NRF_CLI_BLE_UART_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_CLI_BLE_UART_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_CLI_BLE_UART_CONFIG_DEBUG_COLOR
#define NRF_CLI_BLE_UART_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> NRF_CLI_LIBUARTE_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRF_CLI_LIBUARTE_CONFIG_LOG_ENABLED
#define NRF_CLI_LIBUARTE_CONFIG_LOG_ENABLED 0
#endif
// <o> NRF_CLI_LIBUARTE_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_CLI_LIBUARTE_CONFIG_LOG_LEVEL
#define NRF_CLI_LIBUARTE_CONFIG_LOG_LEVEL 3
#endif

// <o> NRF_CLI_LIBUARTE_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_CLI_LIBUARTE_CONFIG_INFO_COLOR
#define NRF_CLI_LIBUARTE_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_CLI_LIBUARTE_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_CLI_LIBUARTE_CONFIG_DEBUG_COLOR
#define NRF_CLI_LIBUARTE_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> NRF_CLI_UART_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRF_CLI_UART_CONFIG_LOG_ENABLED
#define NRF_CLI_UART_CONFIG_LOG_ENABLED 0
#endif
// <o> NRF_CLI_UART_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_CLI_UART_CONFIG_LOG_LEVEL
#define NRF_CLI_UART_CONFIG_LOG_LEVEL 3
#endif

// <o> NRF_CLI_UART_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_CLI_UART_CONFIG_INFO_COLOR
#define NRF_CLI_UART_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_CLI_UART_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_CLI_UART_CONFIG_DEBUG_COLOR
#define NRF_CLI_UART_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> NRF_LIBUARTE_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRF_LIBUARTE_CONFIG_LOG_ENABLED
#define NRF_LIBUARTE_CONFIG_LOG_ENABLED 0
#endif
// <o> NRF_LIBUARTE_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_LIBUARTE_CONFIG_LOG_LEVEL
#define NRF_LIBUARTE_CONFIG_LOG_LEVEL 3
#endif

// <o> NRF_LIBUARTE_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_LIBUARTE_CONFIG_INFO_COLOR
#define NRF_LIBUARTE_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_LIBUARTE_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_LIBUARTE_CONFIG_DEBUG_COLOR
#define NRF_LIBUARTE_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> NRF_MEMOBJ_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRF_MEMOBJ_CONFIG_LOG_ENABLED
#define NRF_MEMOBJ_CONFIG_LOG_ENABLED 0
#endif
// <o> NRF_MEMOBJ_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_MEMOBJ_CONFIG_LOG_LEVEL
#define NRF_MEMOBJ_CONFIG_LOG_LEVEL 3
#endif

// <o> NRF_MEMOBJ_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_MEMOBJ_CONFIG_INFO_COLOR
#define NRF_MEMOBJ_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_MEMOBJ_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_MEMOBJ_CONFIG_DEBUG_COLOR
#define NRF_MEMOBJ_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> NRF_PWR_MGMT_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRF_PWR_MGMT_CONFIG_LOG_ENABLED
#define NRF_PWR_MGMT_CONFIG_LOG_ENABLED 0
#endif
// <o> NRF_PWR_MGMT_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_PWR_MGMT_CONFIG_LOG_LEVEL
#define NRF_PWR_MGMT_CONFIG_LOG_LEVEL 3
#endif

// <o> NRF_PWR_MGMT_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_PWR_MGMT_CONFIG_INFO_COLOR
#define NRF_PWR_MGMT_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_PWR_MGMT_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_PWR_MGMT_CONFIG_DEBUG_COLOR
#define NRF_PWR_MGMT_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> NRF_QUEUE_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRF_QUEUE_CONFIG_LOG_ENABLED
#define NRF_QUEUE_CONFIG_LOG_ENABLED 0
#endif
// <o> NRF_QUEUE_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_QUEUE_CONFIG_LOG_LEVEL
#define NRF_QUEUE_CONFIG_LOG_LEVEL 3
#endif

// <o> NRF_QUEUE_CONFIG_LOG_INIT_FILTER_LEVEL  - Initial severity level if dynamic filtering is enabled
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_QUEUE_CONFIG_LOG_INIT_FILTER_LEVEL
#define NRF_QUEUE_CONFIG_LOG_INIT_FILTER_LEVEL 3
#endif

// <o> NRF_QUEUE_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_QUEUE_CONFIG_INFO_COLOR
#define NRF_QUEUE_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_QUEUE_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_QUEUE_CONFIG_DEBUG_COLOR
#define NRF_QUEUE_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> NRF_SDH_ANT_LOG_ENABLED - Enable logging in SoftDevice handler (ANT) module.
//==========================================================
#ifndef NRF_SDH_ANT_LOG_ENABLED
#define NRF_SDH_ANT_LOG_ENABLED 0
#endif
// <o> NRF_SDH_ANT_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_SDH_ANT_LOG_LEVEL
#define NRF_SDH_ANT_LOG_LEVEL 3
#endif

// <o> NRF_SDH_ANT_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_SDH_ANT_INFO_COLOR
#define NRF_SDH_ANT_INFO_COLOR 0
#endif

// <o> NRF_SDH_ANT_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_SDH_ANT_DEBUG_COLOR
#define NRF_SDH_ANT_DEBUG_COLOR 0
#endif

// </e>

// <e> NRF_SDH_BLE_LOG_ENABLED - Enable logging in SoftDevice handler (BLE) module.
//==========================================================
#ifndef NRF_SDH_BLE_LOG_ENABLED
#define NRF_SDH_BLE_LOG_ENABLED 0
#endif
// <o> NRF_SDH_BLE_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_SDH_BLE_LOG_LEVEL
#define NRF_SDH_BLE_LOG_LEVEL 3
#endif

// <o> NRF_SDH_BLE_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_SDH_BLE_INFO_COLOR
#define NRF_SDH_BLE_INFO_COLOR 0
#endif

// <o> NRF_SDH_BLE_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_SDH_BLE_DEBUG_COLOR
#define NRF_SDH_BLE_DEBUG_COLOR 0
#endif

// </e>

// <e> NRF_SDH_LOG_ENABLED - Enable logging in SoftDevice handler module.
//==========================================================
#ifndef NRF_SDH_LOG_ENABLED
#define NRF_SDH_LOG_ENABLED 0
#endif
// <o> NRF_SDH_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_SDH_LOG_LEVEL
#define NRF_SDH_LOG_LEVEL 3
#endif

// <o> NRF_SDH_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_SDH_INFO_COLOR
#define NRF_SDH_INFO_COLOR 0
#endif

// <o> NRF_SDH_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_SDH_DEBUG_COLOR
#define NRF_SDH_DEBUG_COLOR 0
#endif

// </e>

// <e> NRF_SDH_SOC_LOG_ENABLED - Enable logging in SoftDevice handler (SoC) module.
//==========================================================
#ifndef NRF_SDH_SOC_LOG_ENABLED
#define NRF_SDH_SOC_LOG_ENABLED 0
#endif
// <o> NRF_SDH_SOC_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_SDH_SOC_LOG_LEVEL
#define NRF_SDH_SOC_LOG_LEVEL 3
#endif

// <o> NRF_SDH_SOC_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_SDH_SOC_INFO_COLOR
#define NRF_SDH_SOC_INFO_COLOR 0
#endif

// <o> NRF_SDH_SOC_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_SDH_SOC_DEBUG_COLOR
#define NRF_SDH_SOC_DEBUG_COLOR 0
#endif

// </e>

// <e> NRF_SORTLIST_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRF_SORTLIST_CONFIG_LOG_ENABLED
#define NRF_SORTLIST_CONFIG_LOG_ENABLED 0
#endif
// <o> NRF_SORTLIST_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_SORTLIST_CONFIG_LOG_LEVEL
#define NRF_SORTLIST_CONFIG_LOG_LEVEL 3
#endif

// <o> NRF_SORTLIST_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_SORTLIST_CONFIG_INFO_COLOR
#define NRF_SORTLIST_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_SORTLIST_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_SORTLIST_CONFIG_DEBUG_COLOR
#define NRF_SORTLIST_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> NRF_TWI_SENSOR_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef NRF_TWI_SENSOR_CONFIG_LOG_ENABLED
#define NRF_TWI_SENSOR_CONFIG_LOG_ENABLED 0
#endif
// <o> NRF_TWI_SENSOR_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef NRF_TWI_SENSOR_CONFIG_LOG_LEVEL
#define NRF_TWI_SENSOR_CONFIG_LOG_LEVEL 3
#endif

// <o> NRF_TWI_SENSOR_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_TWI_SENSOR_CONFIG_INFO_COLOR
#define NRF_TWI_SENSOR_CONFIG_INFO_COLOR 0
#endif

// <o> NRF_TWI_SENSOR_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef NRF_TWI_SENSOR_CONFIG_DEBUG_COLOR
#define NRF_TWI_SENSOR_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// <e> PM_LOG_ENABLED - Enable logging in Peer Manager and its submodules.
//==========================================================
#ifndef PM_LOG_ENABLED
#define PM_LOG_ENABLED 1
#endif
// <o> PM_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef PM_LOG_LEVEL
#define PM_LOG_LEVEL 3
#endif

// <o> PM_LOG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef PM_LOG_INFO_COLOR
#define PM_LOG_INFO_COLOR 0
#endif

// <o> PM_LOG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef PM_LOG_DEBUG_COLOR
#define PM_LOG_DEBUG_COLOR 0
#endif

// </e>

// </h> 
//==========================================================

// <h> nrf_log in nRF_Serialization 

//==========================================================
// <e> SER_HAL_TRANSPORT_CONFIG_LOG_ENABLED - Enables logging in the module.
//==========================================================
#ifndef SER_HAL_TRANSPORT_CONFIG_LOG_ENABLED
#define SER_HAL_TRANSPORT_CONFIG_LOG_ENABLED 0
#endif
// <o> SER_HAL_TRANSPORT_CONFIG_LOG_LEVEL  - Default Severity level
 
// <0=> Off 
// <1=> Error 
// <2=> Warning 
// <3=> Info 
// <4=> Debug 

#ifndef SER_HAL_TRANSPORT_CONFIG_LOG_LEVEL
#define SER_HAL_TRANSPORT_CONFIG_LOG_LEVEL 3
#endif

// <o> SER_HAL_TRANSPORT_CONFIG_INFO_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef SER_HAL_TRANSPORT_CONFIG_INFO_COLOR
#define SER_HAL_TRANSPORT_CONFIG_INFO_COLOR 0
#endif

// <o> SER_HAL_TRANSPORT_CONFIG_DEBUG_COLOR  - ANSI escape code prefix.
 
// <0=> Default 
// <1=> Black 
// <2=> Red 
// <3=> Green 
// <4=> Yellow 
// <5=> Blue 
// <6=> Magenta 
// <7=> Cyan 
// <8=> White 

#ifndef SER_HAL_TRANSPORT_CONFIG_DEBUG_COLOR
#define SER_HAL_TRANSPORT_CONFIG_DEBUG_COLOR 0
#endif

// </e>

// </h> 
//==========================================================

// </h> 
//==========================================================

// </e>

// <q> NRF_LOG_STR_FORMATTER_TIMESTAMP_FORMAT_ENABLED  - nrf_log_str_formatter - Log string formatter
 

#ifndef NRF_LOG_STR_FORMATTER_TIMESTAMP_FORMAT_ENABLED
#define NRF_LOG_STR_FORMATTER_TIMESTAMP_FORMAT_ENABLED 1
#endif

// </h> 
//==========================================================

// <<< end of configuration section >>>
#endif //SDK_CONFIG_H

