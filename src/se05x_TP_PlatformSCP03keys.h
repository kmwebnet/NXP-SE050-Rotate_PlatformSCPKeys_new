/* Copyright 2019 NXP
 *
 * This software is owned or controlled by NXP and may only be used
 * strictly in accordance with the applicable license terms.  By expressly
 * accepting such terms or by downloading, installing, activating and/or
 * otherwise using the software, you are agreeing that you have read, and
 * that you agree to comply with and are bound by, such license terms.  If
 * you do not agree to be bound by the applicable license terms, then you
 * may not retain, install, activate or otherwise use the software.
 */

/* ************************************************************************** */
/* Includes                                                                   */
/* ************************************************************************** */
#include <nxEnsure.h>
#include <string.h>

#include "ex_sss_boot.h"
#include "se05x_APDU.h"
/* ************************************************************************** */
/* Defines                                                                    */
/* ************************************************************************** */
#define AES_KEY_LEN_nBYTE 0x10
#define PUT_KEYS_KEY_TYPE_CODING_AES 0x88
#define CRYPTO_KEY_CHECK_LEN 0x03
#define GP_CLA_BYTE 0x80
#define GP_INS_PUTKEY 0xD8
#define GP_P2_MULTIPLEKEYS 0x81
