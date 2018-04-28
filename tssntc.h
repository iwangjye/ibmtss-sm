/********************************************************************************/
/*										*/
/*		     	Nuvoton Command Common Routines				*/
/*			     Written by Ken Goldman				*/
/*		       IBM Thomas J. Watson Research Center			*/
/*	      $Id: tssntc.h 1055 2017-08-08 20:30:09Z kgoldman $		*/
/*										*/
/* (c) Copyright IBM Corporation 2015, 2017					*/
/*										*/
/* All rights reserved.								*/
/* 										*/
/* Redistribution and use in source and binary forms, with or without		*/
/* modification, are permitted provided that the following conditions are	*/
/* met:										*/
/* 										*/
/* Redistributions of source code must retain the above copyright notice,	*/
/* this list of conditions and the following disclaimer.			*/
/* 										*/
/* Redistributions in binary form must reproduce the above copyright		*/
/* notice, this list of conditions and the following disclaimer in the		*/
/* documentation and/or other materials provided with the distribution.		*/
/* 										*/
/* Neither the names of the IBM Corporation nor the names of its		*/
/* contributors may be used to endorse or promote products derived from		*/
/* this software without specific prior written permission.			*/
/* 										*/
/* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS		*/
/* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT		*/
/* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR	*/
/* A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT		*/
/* HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,	*/
/* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT		*/
/* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,	*/
/* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY	*/
/* THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT		*/
/* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE	*/
/* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.		*/
/********************************************************************************/

#ifndef TSSNTC2_H
#define TSSNTC2_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#ifndef TPM_TSS
#define TPM_TSS
#endif
#include <tss2/TPM_Types.h>
#include "Commands_fp.h"

#ifdef __cplusplus
extern "C" {
#endif

    TPM_RC
    NTC2_CFG_STRUCT_Unmarshal(NTC2_CFG_STRUCT *target, BYTE **buffer, INT32 *size);
    TPM_RC
    TSS_NTC2_CFG_STRUCT_Marshal(NTC2_CFG_STRUCT *source, UINT16 *written, BYTE **buffer, INT32 *size);

    TPM_RC
    NTC2_PreConfig_In_Unmarshal(NTC2_PreConfig_In *target, BYTE **buffer, INT32 *size, TPM_HANDLE handles[]);
    TPM_RC
    TSS_NTC2_PreConfig_In_Marshal(NTC2_PreConfig_In *source, UINT16 *written, BYTE **buffer, INT32 *size);

    TPM_RC
    TSS_NTC2_GetConfig_Out_Unmarshal(NTC2_GetConfig_Out *target, TPM_ST tag, BYTE **buffer, INT32 *size);

#ifdef __cplusplus
}
#endif

#endif
