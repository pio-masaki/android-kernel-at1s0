/*
 * Copyright (c) 2010 NVIDIA Corporation.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * Neither the name of the NVIDIA Corporation nor the names of its contributors
 * may be used to endorse or promote products derived from this software
 * without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */
//
// DO NOT EDIT - generated by simspec!
//

#ifndef ___ARRES_SEMA_H_INC_
#define ___ARRES_SEMA_H_INC_
// Shared Resource Semaphore Status

// Register RES_SEMA_SHRD_SMP_STA_0  
#define RES_SEMA_SHRD_SMP_STA_0                 _MK_ADDR_CONST(0x0)
#define RES_SEMA_SHRD_SMP_STA_0_WORD_COUNT                      0x1
#define RES_SEMA_SHRD_SMP_STA_0_RESET_VAL                       _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_SMP_STA_0_RESET_MASK                      _MK_MASK_CONST(0xffffffff)
#define RES_SEMA_SHRD_SMP_STA_0_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_SMP_STA_0_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_SMP_STA_0_READ_MASK                       _MK_MASK_CONST(0xffffffff)
#define RES_SEMA_SHRD_SMP_STA_0_WRITE_MASK                      _MK_MASK_CONST(0x0)
// SMP.27:SMP.24: Available in APB_DMA.REQUESTORS  register
#define RES_SEMA_SHRD_SMP_STA_0_SMP_31_SMP_0_SHIFT                      _MK_SHIFT_CONST(0)
#define RES_SEMA_SHRD_SMP_STA_0_SMP_31_SMP_0_FIELD                      (_MK_MASK_CONST(0xffffffff) << RES_SEMA_SHRD_SMP_STA_0_SMP_31_SMP_0_SHIFT)
#define RES_SEMA_SHRD_SMP_STA_0_SMP_31_SMP_0_RANGE                      31:0
#define RES_SEMA_SHRD_SMP_STA_0_SMP_31_SMP_0_WOFFSET                    0x0
#define RES_SEMA_SHRD_SMP_STA_0_SMP_31_SMP_0_DEFAULT                    _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_SMP_STA_0_SMP_31_SMP_0_DEFAULT_MASK                       _MK_MASK_CONST(0xffffffff)
#define RES_SEMA_SHRD_SMP_STA_0_SMP_31_SMP_0_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_SMP_STA_0_SMP_31_SMP_0_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)

// Shared Resource Semaphore Set-bit Request

// Register RES_SEMA_SHRD_SMP_SET_0  
#define RES_SEMA_SHRD_SMP_SET_0                 _MK_ADDR_CONST(0x4)
#define RES_SEMA_SHRD_SMP_SET_0_WORD_COUNT                      0x1
#define RES_SEMA_SHRD_SMP_SET_0_RESET_VAL                       _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_SMP_SET_0_RESET_MASK                      _MK_MASK_CONST(0xffffffff)
#define RES_SEMA_SHRD_SMP_SET_0_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_SMP_SET_0_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_SMP_SET_0_READ_MASK                       _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_SMP_SET_0_WRITE_MASK                      _MK_MASK_CONST(0xffffffff)
// Semaphore set register. Writing a one to any bit  will set the corresponding semaphore bit. Shared resource set-bit requests
#define RES_SEMA_SHRD_SMP_SET_0_SET_31_SET_0_SHIFT                      _MK_SHIFT_CONST(0)
#define RES_SEMA_SHRD_SMP_SET_0_SET_31_SET_0_FIELD                      (_MK_MASK_CONST(0xffffffff) << RES_SEMA_SHRD_SMP_SET_0_SET_31_SET_0_SHIFT)
#define RES_SEMA_SHRD_SMP_SET_0_SET_31_SET_0_RANGE                      31:0
#define RES_SEMA_SHRD_SMP_SET_0_SET_31_SET_0_WOFFSET                    0x0
#define RES_SEMA_SHRD_SMP_SET_0_SET_31_SET_0_DEFAULT                    _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_SMP_SET_0_SET_31_SET_0_DEFAULT_MASK                       _MK_MASK_CONST(0xffffffff)
#define RES_SEMA_SHRD_SMP_SET_0_SET_31_SET_0_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_SMP_SET_0_SET_31_SET_0_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)

// Shared Resource Semaphore Clr-bit Request Register

// Register RES_SEMA_SHRD_SMP_CLR_0  
#define RES_SEMA_SHRD_SMP_CLR_0                 _MK_ADDR_CONST(0x8)
#define RES_SEMA_SHRD_SMP_CLR_0_WORD_COUNT                      0x1
#define RES_SEMA_SHRD_SMP_CLR_0_RESET_VAL                       _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_SMP_CLR_0_RESET_MASK                      _MK_MASK_CONST(0xffffffff)
#define RES_SEMA_SHRD_SMP_CLR_0_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_SMP_CLR_0_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_SMP_CLR_0_READ_MASK                       _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_SMP_CLR_0_WRITE_MASK                      _MK_MASK_CONST(0x0)
// corresponding semaphore bit
#define RES_SEMA_SHRD_SMP_CLR_0_CLR_31_CLR_0_SHIFT                      _MK_SHIFT_CONST(0)
#define RES_SEMA_SHRD_SMP_CLR_0_CLR_31_CLR_0_FIELD                      (_MK_MASK_CONST(0xffffffff) << RES_SEMA_SHRD_SMP_CLR_0_CLR_31_CLR_0_SHIFT)
#define RES_SEMA_SHRD_SMP_CLR_0_CLR_31_CLR_0_RANGE                      31:0
#define RES_SEMA_SHRD_SMP_CLR_0_CLR_31_CLR_0_WOFFSET                    0x0
#define RES_SEMA_SHRD_SMP_CLR_0_CLR_31_CLR_0_DEFAULT                    _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_SMP_CLR_0_CLR_31_CLR_0_DEFAULT_MASK                       _MK_MASK_CONST(0xffffffff)
#define RES_SEMA_SHRD_SMP_CLR_0_CLR_31_CLR_0_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_SMP_CLR_0_CLR_31_CLR_0_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Reserved address 12 [0xc] 
// Shared Resource Inbox (messages from COP to CPU)

// Register RES_SEMA_SHRD_INBOX_0  
#define RES_SEMA_SHRD_INBOX_0                   _MK_ADDR_CONST(0x10)
#define RES_SEMA_SHRD_INBOX_0_WORD_COUNT                        0x1
#define RES_SEMA_SHRD_INBOX_0_RESET_VAL                         _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_INBOX_0_RESET_MASK                        _MK_MASK_CONST(0xffffffff)
#define RES_SEMA_SHRD_INBOX_0_SW_DEFAULT_VAL                    _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_INBOX_0_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_INBOX_0_READ_MASK                         _MK_MASK_CONST(0xffffffff)
#define RES_SEMA_SHRD_INBOX_0_WRITE_MASK                        _MK_MASK_CONST(0x0)
// Interrupt CPU on INBOX Full (TAG=1)
#define RES_SEMA_SHRD_INBOX_0_IE_IBF_SHIFT                      _MK_SHIFT_CONST(31)
#define RES_SEMA_SHRD_INBOX_0_IE_IBF_FIELD                      (_MK_MASK_CONST(0x1) << RES_SEMA_SHRD_INBOX_0_IE_IBF_SHIFT)
#define RES_SEMA_SHRD_INBOX_0_IE_IBF_RANGE                      31:31
#define RES_SEMA_SHRD_INBOX_0_IE_IBF_WOFFSET                    0x0
#define RES_SEMA_SHRD_INBOX_0_IE_IBF_DEFAULT                    _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_INBOX_0_IE_IBF_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define RES_SEMA_SHRD_INBOX_0_IE_IBF_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_INBOX_0_IE_IBF_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_INBOX_0_IE_IBF_EMPTY                      _MK_ENUM_CONST(0)
#define RES_SEMA_SHRD_INBOX_0_IE_IBF_FULL                       _MK_ENUM_CONST(1)

// Interrupt COP on INBOX Empty (TAG=0)
#define RES_SEMA_SHRD_INBOX_0_IE_IBE_SHIFT                      _MK_SHIFT_CONST(30)
#define RES_SEMA_SHRD_INBOX_0_IE_IBE_FIELD                      (_MK_MASK_CONST(0x1) << RES_SEMA_SHRD_INBOX_0_IE_IBE_SHIFT)
#define RES_SEMA_SHRD_INBOX_0_IE_IBE_RANGE                      30:30
#define RES_SEMA_SHRD_INBOX_0_IE_IBE_WOFFSET                    0x0
#define RES_SEMA_SHRD_INBOX_0_IE_IBE_DEFAULT                    _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_INBOX_0_IE_IBE_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define RES_SEMA_SHRD_INBOX_0_IE_IBE_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_INBOX_0_IE_IBE_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_INBOX_0_IE_IBE_EMPTY                      _MK_ENUM_CONST(0)
#define RES_SEMA_SHRD_INBOX_0_IE_IBE_FULL                       _MK_ENUM_CONST(1)

// Read-only. Set when COP writes this register and  cleared when CPU Reads this register.
#define RES_SEMA_SHRD_INBOX_0_TAG_SHIFT                 _MK_SHIFT_CONST(29)
#define RES_SEMA_SHRD_INBOX_0_TAG_FIELD                 (_MK_MASK_CONST(0x1) << RES_SEMA_SHRD_INBOX_0_TAG_SHIFT)
#define RES_SEMA_SHRD_INBOX_0_TAG_RANGE                 29:29
#define RES_SEMA_SHRD_INBOX_0_TAG_WOFFSET                       0x0
#define RES_SEMA_SHRD_INBOX_0_TAG_DEFAULT                       _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_INBOX_0_TAG_DEFAULT_MASK                  _MK_MASK_CONST(0x1)
#define RES_SEMA_SHRD_INBOX_0_TAG_SW_DEFAULT                    _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_INBOX_0_TAG_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_INBOX_0_TAG_INVALID                       _MK_ENUM_CONST(0)
#define RES_SEMA_SHRD_INBOX_0_TAG_VALID                 _MK_ENUM_CONST(1)

// Reserved = 0
#define RES_SEMA_SHRD_INBOX_0_N_A1_SHIFT                        _MK_SHIFT_CONST(28)
#define RES_SEMA_SHRD_INBOX_0_N_A1_FIELD                        (_MK_MASK_CONST(0x1) << RES_SEMA_SHRD_INBOX_0_N_A1_SHIFT)
#define RES_SEMA_SHRD_INBOX_0_N_A1_RANGE                        28:28
#define RES_SEMA_SHRD_INBOX_0_N_A1_WOFFSET                      0x0
#define RES_SEMA_SHRD_INBOX_0_N_A1_DEFAULT                      _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_INBOX_0_N_A1_DEFAULT_MASK                 _MK_MASK_CONST(0x1)
#define RES_SEMA_SHRD_INBOX_0_N_A1_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_INBOX_0_N_A1_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)

// definition)
#define RES_SEMA_SHRD_INBOX_0_IN_BOX_STAT_SHIFT                 _MK_SHIFT_CONST(24)
#define RES_SEMA_SHRD_INBOX_0_IN_BOX_STAT_FIELD                 (_MK_MASK_CONST(0xf) << RES_SEMA_SHRD_INBOX_0_IN_BOX_STAT_SHIFT)
#define RES_SEMA_SHRD_INBOX_0_IN_BOX_STAT_RANGE                 27:24
#define RES_SEMA_SHRD_INBOX_0_IN_BOX_STAT_WOFFSET                       0x0
#define RES_SEMA_SHRD_INBOX_0_IN_BOX_STAT_DEFAULT                       _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_INBOX_0_IN_BOX_STAT_DEFAULT_MASK                  _MK_MASK_CONST(0xf)
#define RES_SEMA_SHRD_INBOX_0_IN_BOX_STAT_SW_DEFAULT                    _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_INBOX_0_IN_BOX_STAT_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)

// General purpose data bits, suggested usage is for  INBOX command (SW can change definition)
#define RES_SEMA_SHRD_INBOX_0_IN_BOX_CMD_SHIFT                  _MK_SHIFT_CONST(17)
#define RES_SEMA_SHRD_INBOX_0_IN_BOX_CMD_FIELD                  (_MK_MASK_CONST(0x7f) << RES_SEMA_SHRD_INBOX_0_IN_BOX_CMD_SHIFT)
#define RES_SEMA_SHRD_INBOX_0_IN_BOX_CMD_RANGE                  23:17
#define RES_SEMA_SHRD_INBOX_0_IN_BOX_CMD_WOFFSET                        0x0
#define RES_SEMA_SHRD_INBOX_0_IN_BOX_CMD_DEFAULT                        _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_INBOX_0_IN_BOX_CMD_DEFAULT_MASK                   _MK_MASK_CONST(0x7f)
#define RES_SEMA_SHRD_INBOX_0_IN_BOX_CMD_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_INBOX_0_IN_BOX_CMD_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)

// definition)
#define RES_SEMA_SHRD_INBOX_0_IN_BOX_DATA_SHIFT                 _MK_SHIFT_CONST(0)
#define RES_SEMA_SHRD_INBOX_0_IN_BOX_DATA_FIELD                 (_MK_MASK_CONST(0x1ffff) << RES_SEMA_SHRD_INBOX_0_IN_BOX_DATA_SHIFT)
#define RES_SEMA_SHRD_INBOX_0_IN_BOX_DATA_RANGE                 16:0
#define RES_SEMA_SHRD_INBOX_0_IN_BOX_DATA_WOFFSET                       0x0
#define RES_SEMA_SHRD_INBOX_0_IN_BOX_DATA_DEFAULT                       _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_INBOX_0_IN_BOX_DATA_DEFAULT_MASK                  _MK_MASK_CONST(0x1ffff)
#define RES_SEMA_SHRD_INBOX_0_IN_BOX_DATA_SW_DEFAULT                    _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_INBOX_0_IN_BOX_DATA_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)


// Reserved address 20 [0x14] 

// Reserved address 24 [0x18] 

// Reserved address 28 [0x1c] 
// Shared Resource Outbox (messages from CPU to COP)

// Register RES_SEMA_SHRD_OUTBOX_0  
#define RES_SEMA_SHRD_OUTBOX_0                  _MK_ADDR_CONST(0x20)
#define RES_SEMA_SHRD_OUTBOX_0_WORD_COUNT                       0x1
#define RES_SEMA_SHRD_OUTBOX_0_RESET_VAL                        _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_OUTBOX_0_RESET_MASK                       _MK_MASK_CONST(0xffffffff)
#define RES_SEMA_SHRD_OUTBOX_0_SW_DEFAULT_VAL                   _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_OUTBOX_0_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_OUTBOX_0_READ_MASK                        _MK_MASK_CONST(0xffffffff)
#define RES_SEMA_SHRD_OUTBOX_0_WRITE_MASK                       _MK_MASK_CONST(0x0)
// Interrupt COP on OUTBOX Full (TAG=1)
#define RES_SEMA_SHRD_OUTBOX_0_IE_OBF_SHIFT                     _MK_SHIFT_CONST(31)
#define RES_SEMA_SHRD_OUTBOX_0_IE_OBF_FIELD                     (_MK_MASK_CONST(0x1) << RES_SEMA_SHRD_OUTBOX_0_IE_OBF_SHIFT)
#define RES_SEMA_SHRD_OUTBOX_0_IE_OBF_RANGE                     31:31
#define RES_SEMA_SHRD_OUTBOX_0_IE_OBF_WOFFSET                   0x0
#define RES_SEMA_SHRD_OUTBOX_0_IE_OBF_DEFAULT                   _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_OUTBOX_0_IE_OBF_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define RES_SEMA_SHRD_OUTBOX_0_IE_OBF_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_OUTBOX_0_IE_OBF_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_OUTBOX_0_IE_OBF_EMPTY                     _MK_ENUM_CONST(0)
#define RES_SEMA_SHRD_OUTBOX_0_IE_OBF_FULL                      _MK_ENUM_CONST(1)

// Interrupt CPU on OUTBOX Empty (TAG=0)
#define RES_SEMA_SHRD_OUTBOX_0_IE_OBE_SHIFT                     _MK_SHIFT_CONST(30)
#define RES_SEMA_SHRD_OUTBOX_0_IE_OBE_FIELD                     (_MK_MASK_CONST(0x1) << RES_SEMA_SHRD_OUTBOX_0_IE_OBE_SHIFT)
#define RES_SEMA_SHRD_OUTBOX_0_IE_OBE_RANGE                     30:30
#define RES_SEMA_SHRD_OUTBOX_0_IE_OBE_WOFFSET                   0x0
#define RES_SEMA_SHRD_OUTBOX_0_IE_OBE_DEFAULT                   _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_OUTBOX_0_IE_OBE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define RES_SEMA_SHRD_OUTBOX_0_IE_OBE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_OUTBOX_0_IE_OBE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_OUTBOX_0_IE_OBE_EMPTY                     _MK_ENUM_CONST(0)
#define RES_SEMA_SHRD_OUTBOX_0_IE_OBE_FULL                      _MK_ENUM_CONST(1)

// HW clears this bit when COP Reads the Outbox Register.  Read-only. Set when CPU writes this register and cleared when COP reads this  register.
#define RES_SEMA_SHRD_OUTBOX_0_TAG_SHIFT                        _MK_SHIFT_CONST(29)
#define RES_SEMA_SHRD_OUTBOX_0_TAG_FIELD                        (_MK_MASK_CONST(0x1) << RES_SEMA_SHRD_OUTBOX_0_TAG_SHIFT)
#define RES_SEMA_SHRD_OUTBOX_0_TAG_RANGE                        29:29
#define RES_SEMA_SHRD_OUTBOX_0_TAG_WOFFSET                      0x0
#define RES_SEMA_SHRD_OUTBOX_0_TAG_DEFAULT                      _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_OUTBOX_0_TAG_DEFAULT_MASK                 _MK_MASK_CONST(0x1)
#define RES_SEMA_SHRD_OUTBOX_0_TAG_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_OUTBOX_0_TAG_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_OUTBOX_0_TAG_INVALID                      _MK_ENUM_CONST(0)
#define RES_SEMA_SHRD_OUTBOX_0_TAG_VALID                        _MK_ENUM_CONST(1)

// Reserved = 0
#define RES_SEMA_SHRD_OUTBOX_0_N_A1_SHIFT                       _MK_SHIFT_CONST(28)
#define RES_SEMA_SHRD_OUTBOX_0_N_A1_FIELD                       (_MK_MASK_CONST(0x1) << RES_SEMA_SHRD_OUTBOX_0_N_A1_SHIFT)
#define RES_SEMA_SHRD_OUTBOX_0_N_A1_RANGE                       28:28
#define RES_SEMA_SHRD_OUTBOX_0_N_A1_WOFFSET                     0x0
#define RES_SEMA_SHRD_OUTBOX_0_N_A1_DEFAULT                     _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_OUTBOX_0_N_A1_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define RES_SEMA_SHRD_OUTBOX_0_N_A1_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_OUTBOX_0_N_A1_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)

// General purpose data bits, suggested usage is for  Out Box OUTBOX status (SW can change definition)
#define RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_STAT_SHIFT                       _MK_SHIFT_CONST(24)
#define RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_STAT_FIELD                       (_MK_MASK_CONST(0xf) << RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_STAT_SHIFT)
#define RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_STAT_RANGE                       27:24
#define RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_STAT_WOFFSET                     0x0
#define RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_STAT_DEFAULT                     _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_STAT_DEFAULT_MASK                        _MK_MASK_CONST(0xf)
#define RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_STAT_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_STAT_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)

// General purpose data bits, suggested usage is for  Out Box OUTBOX command (SW can change definition)
#define RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_CMD_SHIFT                        _MK_SHIFT_CONST(17)
#define RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_CMD_FIELD                        (_MK_MASK_CONST(0x7f) << RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_CMD_SHIFT)
#define RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_CMD_RANGE                        23:17
#define RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_CMD_WOFFSET                      0x0
#define RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_CMD_DEFAULT                      _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_CMD_DEFAULT_MASK                 _MK_MASK_CONST(0x7f)
#define RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_CMD_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_CMD_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)

// General purpose Out Box data bits, suggested usage  is for OUTBOX data (SW can change definition)
#define RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_DATA_SHIFT                       _MK_SHIFT_CONST(0)
#define RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_DATA_FIELD                       (_MK_MASK_CONST(0x1ffff) << RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_DATA_SHIFT)
#define RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_DATA_RANGE                       16:0
#define RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_DATA_WOFFSET                     0x0
#define RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_DATA_DEFAULT                     _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_DATA_DEFAULT_MASK                        _MK_MASK_CONST(0x1ffff)
#define RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_DATA_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define RES_SEMA_SHRD_OUTBOX_0_OUT_BOX_DATA_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)


//
// REGISTER LIST
//
#define LIST_ARRES_SEMA_REGS(_op_) \
_op_(RES_SEMA_SHRD_SMP_STA_0) \
_op_(RES_SEMA_SHRD_SMP_SET_0) \
_op_(RES_SEMA_SHRD_SMP_CLR_0) \
_op_(RES_SEMA_SHRD_INBOX_0) \
_op_(RES_SEMA_SHRD_OUTBOX_0)


//
// ADDRESS SPACES
//

#define BASE_ADDRESS_RES_SEMA   0x00000000

//
// ARRES_SEMA REGISTER BANKS
//

#define RES_SEMA0_FIRST_REG 0x0000 // RES_SEMA_SHRD_SMP_STA_0
#define RES_SEMA0_LAST_REG 0x0008 // RES_SEMA_SHRD_SMP_CLR_0
#define RES_SEMA1_FIRST_REG 0x0010 // RES_SEMA_SHRD_INBOX_0
#define RES_SEMA1_LAST_REG 0x0010 // RES_SEMA_SHRD_INBOX_0
#define RES_SEMA2_FIRST_REG 0x0020 // RES_SEMA_SHRD_OUTBOX_0
#define RES_SEMA2_LAST_REG 0x0020 // RES_SEMA_SHRD_OUTBOX_0

#ifndef _MK_SHIFT_CONST
  #define _MK_SHIFT_CONST(_constant_) _constant_
#endif
#ifndef _MK_MASK_CONST
  #define _MK_MASK_CONST(_constant_) _constant_
#endif
#ifndef _MK_ENUM_CONST
  #define _MK_ENUM_CONST(_constant_) (_constant_ ## UL)
#endif
#ifndef _MK_ADDR_CONST
  #define _MK_ADDR_CONST(_constant_) _constant_
#endif

#endif // ifndef ___ARRES_SEMA_H_INC_
