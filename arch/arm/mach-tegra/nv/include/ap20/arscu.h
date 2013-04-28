/*
 * Copyright (c) 2009 NVIDIA Corporation.
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

#ifndef ___ARSCU_H_INC_
#define ___ARSCU_H_INC_

// Register SCU_CONTROL_0  
#define SCU_CONTROL_0                   _MK_ADDR_CONST(0x0)
#define SCU_CONTROL_0_SECURE                    0x0
#define SCU_CONTROL_0_WORD_COUNT                        0x1
#define SCU_CONTROL_0_RESET_VAL                         _MK_MASK_CONST(0x0)
#define SCU_CONTROL_0_RESET_MASK                        _MK_MASK_CONST(0x7)
#define SCU_CONTROL_0_SW_DEFAULT_VAL                    _MK_MASK_CONST(0x0)
#define SCU_CONTROL_0_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SCU_CONTROL_0_READ_MASK                         _MK_MASK_CONST(0x7)
#define SCU_CONTROL_0_WRITE_MASK                        _MK_MASK_CONST(0x7)
#define SCU_CONTROL_0_SCU_ENABLE_SHIFT                  _MK_SHIFT_CONST(0)
#define SCU_CONTROL_0_SCU_ENABLE_FIELD                  (_MK_MASK_CONST(0x1) << SCU_CONTROL_0_SCU_ENABLE_SHIFT)
#define SCU_CONTROL_0_SCU_ENABLE_RANGE                  0:0
#define SCU_CONTROL_0_SCU_ENABLE_WOFFSET                        0x0
#define SCU_CONTROL_0_SCU_ENABLE_DEFAULT                        _MK_MASK_CONST(0x0)
#define SCU_CONTROL_0_SCU_ENABLE_DEFAULT_MASK                   _MK_MASK_CONST(0x1)
#define SCU_CONTROL_0_SCU_ENABLE_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define SCU_CONTROL_0_SCU_ENABLE_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)

#define SCU_CONTROL_0_ADDR_FILTER_ENABLE_SHIFT                  _MK_SHIFT_CONST(1)
#define SCU_CONTROL_0_ADDR_FILTER_ENABLE_FIELD                  (_MK_MASK_CONST(0x1) << SCU_CONTROL_0_ADDR_FILTER_ENABLE_SHIFT)
#define SCU_CONTROL_0_ADDR_FILTER_ENABLE_RANGE                  1:1
#define SCU_CONTROL_0_ADDR_FILTER_ENABLE_WOFFSET                        0x0
#define SCU_CONTROL_0_ADDR_FILTER_ENABLE_DEFAULT                        _MK_MASK_CONST(0x0)
#define SCU_CONTROL_0_ADDR_FILTER_ENABLE_DEFAULT_MASK                   _MK_MASK_CONST(0x1)
#define SCU_CONTROL_0_ADDR_FILTER_ENABLE_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define SCU_CONTROL_0_ADDR_FILTER_ENABLE_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)

#define SCU_CONTROL_0_PARITY_ON_SHIFT                   _MK_SHIFT_CONST(2)
#define SCU_CONTROL_0_PARITY_ON_FIELD                   (_MK_MASK_CONST(0x1) << SCU_CONTROL_0_PARITY_ON_SHIFT)
#define SCU_CONTROL_0_PARITY_ON_RANGE                   2:2
#define SCU_CONTROL_0_PARITY_ON_WOFFSET                 0x0
#define SCU_CONTROL_0_PARITY_ON_DEFAULT                 _MK_MASK_CONST(0x0)
#define SCU_CONTROL_0_PARITY_ON_DEFAULT_MASK                    _MK_MASK_CONST(0x1)
#define SCU_CONTROL_0_PARITY_ON_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define SCU_CONTROL_0_PARITY_ON_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)


// Register SCU_CONFIG_0  
#define SCU_CONFIG_0                    _MK_ADDR_CONST(0x4)
#define SCU_CONFIG_0_SECURE                     0x0
#define SCU_CONFIG_0_WORD_COUNT                         0x1
#define SCU_CONFIG_0_RESET_VAL                  _MK_MASK_CONST(0xff00)
#define SCU_CONFIG_0_RESET_MASK                         _MK_MASK_CONST(0xfff3)
#define SCU_CONFIG_0_SW_DEFAULT_VAL                     _MK_MASK_CONST(0x0)
#define SCU_CONFIG_0_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SCU_CONFIG_0_READ_MASK                  _MK_MASK_CONST(0xfff3)
#define SCU_CONFIG_0_WRITE_MASK                         _MK_MASK_CONST(0x0)
#define SCU_CONFIG_0_CPU_NUM_SHIFT                      _MK_SHIFT_CONST(0)
#define SCU_CONFIG_0_CPU_NUM_FIELD                      (_MK_MASK_CONST(0x3) << SCU_CONFIG_0_CPU_NUM_SHIFT)
#define SCU_CONFIG_0_CPU_NUM_RANGE                      1:0
#define SCU_CONFIG_0_CPU_NUM_WOFFSET                    0x0
#define SCU_CONFIG_0_CPU_NUM_DEFAULT                    _MK_MASK_CONST(0x0)
#define SCU_CONFIG_0_CPU_NUM_DEFAULT_MASK                       _MK_MASK_CONST(0x3)
#define SCU_CONFIG_0_CPU_NUM_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SCU_CONFIG_0_CPU_NUM_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SCU_CONFIG_0_CPU_NUM_INIT_ENUM                  ONE
#define SCU_CONFIG_0_CPU_NUM_ONE                        _MK_ENUM_CONST(0)
#define SCU_CONFIG_0_CPU_NUM_TWO                        _MK_ENUM_CONST(1)
#define SCU_CONFIG_0_CPU_NUM_THREE                      _MK_ENUM_CONST(2)
#define SCU_CONFIG_0_CPU_NUM_FOUR                       _MK_ENUM_CONST(3)

// define SMP mode for core 0
#define SCU_CONFIG_0_CPU0_SMP_SHIFT                     _MK_SHIFT_CONST(4)
#define SCU_CONFIG_0_CPU0_SMP_FIELD                     (_MK_MASK_CONST(0x1) << SCU_CONFIG_0_CPU0_SMP_SHIFT)
#define SCU_CONFIG_0_CPU0_SMP_RANGE                     4:4
#define SCU_CONFIG_0_CPU0_SMP_WOFFSET                   0x0
#define SCU_CONFIG_0_CPU0_SMP_DEFAULT                   _MK_MASK_CONST(0x0)
#define SCU_CONFIG_0_CPU0_SMP_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SCU_CONFIG_0_CPU0_SMP_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SCU_CONFIG_0_CPU0_SMP_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)

//                     core 1
#define SCU_CONFIG_0_CPU1_SMP_SHIFT                     _MK_SHIFT_CONST(5)
#define SCU_CONFIG_0_CPU1_SMP_FIELD                     (_MK_MASK_CONST(0x1) << SCU_CONFIG_0_CPU1_SMP_SHIFT)
#define SCU_CONFIG_0_CPU1_SMP_RANGE                     5:5
#define SCU_CONFIG_0_CPU1_SMP_WOFFSET                   0x0
#define SCU_CONFIG_0_CPU1_SMP_DEFAULT                   _MK_MASK_CONST(0x0)
#define SCU_CONFIG_0_CPU1_SMP_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SCU_CONFIG_0_CPU1_SMP_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SCU_CONFIG_0_CPU1_SMP_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)

//                     core 2
#define SCU_CONFIG_0_CPU2_SMP_SHIFT                     _MK_SHIFT_CONST(6)
#define SCU_CONFIG_0_CPU2_SMP_FIELD                     (_MK_MASK_CONST(0x1) << SCU_CONFIG_0_CPU2_SMP_SHIFT)
#define SCU_CONFIG_0_CPU2_SMP_RANGE                     6:6
#define SCU_CONFIG_0_CPU2_SMP_WOFFSET                   0x0
#define SCU_CONFIG_0_CPU2_SMP_DEFAULT                   _MK_MASK_CONST(0x0)
#define SCU_CONFIG_0_CPU2_SMP_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SCU_CONFIG_0_CPU2_SMP_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SCU_CONFIG_0_CPU2_SMP_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)

//                     core 3
#define SCU_CONFIG_0_CPU3_SMP_SHIFT                     _MK_SHIFT_CONST(7)
#define SCU_CONFIG_0_CPU3_SMP_FIELD                     (_MK_MASK_CONST(0x1) << SCU_CONFIG_0_CPU3_SMP_SHIFT)
#define SCU_CONFIG_0_CPU3_SMP_RANGE                     7:7
#define SCU_CONFIG_0_CPU3_SMP_WOFFSET                   0x0
#define SCU_CONFIG_0_CPU3_SMP_DEFAULT                   _MK_MASK_CONST(0x0)
#define SCU_CONFIG_0_CPU3_SMP_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SCU_CONFIG_0_CPU3_SMP_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SCU_CONFIG_0_CPU3_SMP_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)

#define SCU_CONFIG_0_CPU0_TAG_RAM_SIZE_SHIFT                    _MK_SHIFT_CONST(8)
#define SCU_CONFIG_0_CPU0_TAG_RAM_SIZE_FIELD                    (_MK_MASK_CONST(0x3) << SCU_CONFIG_0_CPU0_TAG_RAM_SIZE_SHIFT)
#define SCU_CONFIG_0_CPU0_TAG_RAM_SIZE_RANGE                    9:8
#define SCU_CONFIG_0_CPU0_TAG_RAM_SIZE_WOFFSET                  0x0
#define SCU_CONFIG_0_CPU0_TAG_RAM_SIZE_DEFAULT                  _MK_MASK_CONST(0x3)
#define SCU_CONFIG_0_CPU0_TAG_RAM_SIZE_DEFAULT_MASK                     _MK_MASK_CONST(0x3)
#define SCU_CONFIG_0_CPU0_TAG_RAM_SIZE_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SCU_CONFIG_0_CPU0_TAG_RAM_SIZE_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SCU_CONFIG_0_CPU0_TAG_RAM_SIZE_INIT_ENUM                        T64KB
#define SCU_CONFIG_0_CPU0_TAG_RAM_SIZE_T16KB                    _MK_ENUM_CONST(0)
#define SCU_CONFIG_0_CPU0_TAG_RAM_SIZE_T32KB                    _MK_ENUM_CONST(1)
#define SCU_CONFIG_0_CPU0_TAG_RAM_SIZE_T64KB                    _MK_ENUM_CONST(3)

#define SCU_CONFIG_0_CPU1_TAG_RAM_SIZE_SHIFT                    _MK_SHIFT_CONST(10)
#define SCU_CONFIG_0_CPU1_TAG_RAM_SIZE_FIELD                    (_MK_MASK_CONST(0x3) << SCU_CONFIG_0_CPU1_TAG_RAM_SIZE_SHIFT)
#define SCU_CONFIG_0_CPU1_TAG_RAM_SIZE_RANGE                    11:10
#define SCU_CONFIG_0_CPU1_TAG_RAM_SIZE_WOFFSET                  0x0
#define SCU_CONFIG_0_CPU1_TAG_RAM_SIZE_DEFAULT                  _MK_MASK_CONST(0x3)
#define SCU_CONFIG_0_CPU1_TAG_RAM_SIZE_DEFAULT_MASK                     _MK_MASK_CONST(0x3)
#define SCU_CONFIG_0_CPU1_TAG_RAM_SIZE_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SCU_CONFIG_0_CPU1_TAG_RAM_SIZE_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SCU_CONFIG_0_CPU1_TAG_RAM_SIZE_INIT_ENUM                        T64KB
#define SCU_CONFIG_0_CPU1_TAG_RAM_SIZE_T16KB                    _MK_ENUM_CONST(0)
#define SCU_CONFIG_0_CPU1_TAG_RAM_SIZE_T32KB                    _MK_ENUM_CONST(1)
#define SCU_CONFIG_0_CPU1_TAG_RAM_SIZE_T64KB                    _MK_ENUM_CONST(3)

#define SCU_CONFIG_0_CPU2_TAG_RAM_SIZE_SHIFT                    _MK_SHIFT_CONST(12)
#define SCU_CONFIG_0_CPU2_TAG_RAM_SIZE_FIELD                    (_MK_MASK_CONST(0x3) << SCU_CONFIG_0_CPU2_TAG_RAM_SIZE_SHIFT)
#define SCU_CONFIG_0_CPU2_TAG_RAM_SIZE_RANGE                    13:12
#define SCU_CONFIG_0_CPU2_TAG_RAM_SIZE_WOFFSET                  0x0
#define SCU_CONFIG_0_CPU2_TAG_RAM_SIZE_DEFAULT                  _MK_MASK_CONST(0x3)
#define SCU_CONFIG_0_CPU2_TAG_RAM_SIZE_DEFAULT_MASK                     _MK_MASK_CONST(0x3)
#define SCU_CONFIG_0_CPU2_TAG_RAM_SIZE_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SCU_CONFIG_0_CPU2_TAG_RAM_SIZE_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SCU_CONFIG_0_CPU2_TAG_RAM_SIZE_INIT_ENUM                        T64KB
#define SCU_CONFIG_0_CPU2_TAG_RAM_SIZE_T16KB                    _MK_ENUM_CONST(0)
#define SCU_CONFIG_0_CPU2_TAG_RAM_SIZE_T32KB                    _MK_ENUM_CONST(1)
#define SCU_CONFIG_0_CPU2_TAG_RAM_SIZE_T64KB                    _MK_ENUM_CONST(3)

#define SCU_CONFIG_0_CPU3_TAG_RAM_SIZE_SHIFT                    _MK_SHIFT_CONST(14)
#define SCU_CONFIG_0_CPU3_TAG_RAM_SIZE_FIELD                    (_MK_MASK_CONST(0x3) << SCU_CONFIG_0_CPU3_TAG_RAM_SIZE_SHIFT)
#define SCU_CONFIG_0_CPU3_TAG_RAM_SIZE_RANGE                    15:14
#define SCU_CONFIG_0_CPU3_TAG_RAM_SIZE_WOFFSET                  0x0
#define SCU_CONFIG_0_CPU3_TAG_RAM_SIZE_DEFAULT                  _MK_MASK_CONST(0x3)
#define SCU_CONFIG_0_CPU3_TAG_RAM_SIZE_DEFAULT_MASK                     _MK_MASK_CONST(0x3)
#define SCU_CONFIG_0_CPU3_TAG_RAM_SIZE_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SCU_CONFIG_0_CPU3_TAG_RAM_SIZE_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SCU_CONFIG_0_CPU3_TAG_RAM_SIZE_INIT_ENUM                        T64KB
#define SCU_CONFIG_0_CPU3_TAG_RAM_SIZE_T16KB                    _MK_ENUM_CONST(0)
#define SCU_CONFIG_0_CPU3_TAG_RAM_SIZE_T32KB                    _MK_ENUM_CONST(1)
#define SCU_CONFIG_0_CPU3_TAG_RAM_SIZE_T64KB                    _MK_ENUM_CONST(3)


// Register SCU_POWER_STATUS_0  
#define SCU_POWER_STATUS_0                      _MK_ADDR_CONST(0x8)
#define SCU_POWER_STATUS_0_SECURE                       0x0
#define SCU_POWER_STATUS_0_WORD_COUNT                   0x1
#define SCU_POWER_STATUS_0_RESET_VAL                    _MK_MASK_CONST(0x0)
#define SCU_POWER_STATUS_0_RESET_MASK                   _MK_MASK_CONST(0x3030303)
#define SCU_POWER_STATUS_0_SW_DEFAULT_VAL                       _MK_MASK_CONST(0x0)
#define SCU_POWER_STATUS_0_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SCU_POWER_STATUS_0_READ_MASK                    _MK_MASK_CONST(0x3030303)
#define SCU_POWER_STATUS_0_WRITE_MASK                   _MK_MASK_CONST(0x3030303)
#define SCU_POWER_STATUS_0_CPU0_STATUS_SHIFT                    _MK_SHIFT_CONST(0)
#define SCU_POWER_STATUS_0_CPU0_STATUS_FIELD                    (_MK_MASK_CONST(0x3) << SCU_POWER_STATUS_0_CPU0_STATUS_SHIFT)
#define SCU_POWER_STATUS_0_CPU0_STATUS_RANGE                    1:0
#define SCU_POWER_STATUS_0_CPU0_STATUS_WOFFSET                  0x0
#define SCU_POWER_STATUS_0_CPU0_STATUS_DEFAULT                  _MK_MASK_CONST(0x0)
#define SCU_POWER_STATUS_0_CPU0_STATUS_DEFAULT_MASK                     _MK_MASK_CONST(0x3)
#define SCU_POWER_STATUS_0_CPU0_STATUS_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SCU_POWER_STATUS_0_CPU0_STATUS_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SCU_POWER_STATUS_0_CPU0_STATUS_INIT_ENUM                        NORMAL
#define SCU_POWER_STATUS_0_CPU0_STATUS_NORMAL                   _MK_ENUM_CONST(0)
#define SCU_POWER_STATUS_0_CPU0_STATUS_DORMANT                  _MK_ENUM_CONST(2)
#define SCU_POWER_STATUS_0_CPU0_STATUS_PWROFF                   _MK_ENUM_CONST(3)

#define SCU_POWER_STATUS_0_CPU1_STATUS_SHIFT                    _MK_SHIFT_CONST(8)
#define SCU_POWER_STATUS_0_CPU1_STATUS_FIELD                    (_MK_MASK_CONST(0x3) << SCU_POWER_STATUS_0_CPU1_STATUS_SHIFT)
#define SCU_POWER_STATUS_0_CPU1_STATUS_RANGE                    9:8
#define SCU_POWER_STATUS_0_CPU1_STATUS_WOFFSET                  0x0
#define SCU_POWER_STATUS_0_CPU1_STATUS_DEFAULT                  _MK_MASK_CONST(0x0)
#define SCU_POWER_STATUS_0_CPU1_STATUS_DEFAULT_MASK                     _MK_MASK_CONST(0x3)
#define SCU_POWER_STATUS_0_CPU1_STATUS_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SCU_POWER_STATUS_0_CPU1_STATUS_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SCU_POWER_STATUS_0_CPU1_STATUS_INIT_ENUM                        NORMAL
#define SCU_POWER_STATUS_0_CPU1_STATUS_NORMAL                   _MK_ENUM_CONST(0)
#define SCU_POWER_STATUS_0_CPU1_STATUS_DORMANT                  _MK_ENUM_CONST(2)
#define SCU_POWER_STATUS_0_CPU1_STATUS_PWROFF                   _MK_ENUM_CONST(3)

#define SCU_POWER_STATUS_0_CPU2_STATUS_SHIFT                    _MK_SHIFT_CONST(16)
#define SCU_POWER_STATUS_0_CPU2_STATUS_FIELD                    (_MK_MASK_CONST(0x3) << SCU_POWER_STATUS_0_CPU2_STATUS_SHIFT)
#define SCU_POWER_STATUS_0_CPU2_STATUS_RANGE                    17:16
#define SCU_POWER_STATUS_0_CPU2_STATUS_WOFFSET                  0x0
#define SCU_POWER_STATUS_0_CPU2_STATUS_DEFAULT                  _MK_MASK_CONST(0x0)
#define SCU_POWER_STATUS_0_CPU2_STATUS_DEFAULT_MASK                     _MK_MASK_CONST(0x3)
#define SCU_POWER_STATUS_0_CPU2_STATUS_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SCU_POWER_STATUS_0_CPU2_STATUS_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SCU_POWER_STATUS_0_CPU2_STATUS_INIT_ENUM                        NORMAL
#define SCU_POWER_STATUS_0_CPU2_STATUS_NORMAL                   _MK_ENUM_CONST(0)
#define SCU_POWER_STATUS_0_CPU2_STATUS_DORMANT                  _MK_ENUM_CONST(2)
#define SCU_POWER_STATUS_0_CPU2_STATUS_PWROFF                   _MK_ENUM_CONST(3)

#define SCU_POWER_STATUS_0_CPU3_STATUS_SHIFT                    _MK_SHIFT_CONST(24)
#define SCU_POWER_STATUS_0_CPU3_STATUS_FIELD                    (_MK_MASK_CONST(0x3) << SCU_POWER_STATUS_0_CPU3_STATUS_SHIFT)
#define SCU_POWER_STATUS_0_CPU3_STATUS_RANGE                    25:24
#define SCU_POWER_STATUS_0_CPU3_STATUS_WOFFSET                  0x0
#define SCU_POWER_STATUS_0_CPU3_STATUS_DEFAULT                  _MK_MASK_CONST(0x0)
#define SCU_POWER_STATUS_0_CPU3_STATUS_DEFAULT_MASK                     _MK_MASK_CONST(0x3)
#define SCU_POWER_STATUS_0_CPU3_STATUS_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SCU_POWER_STATUS_0_CPU3_STATUS_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SCU_POWER_STATUS_0_CPU3_STATUS_INIT_ENUM                        NORMAL
#define SCU_POWER_STATUS_0_CPU3_STATUS_NORMAL                   _MK_ENUM_CONST(0)
#define SCU_POWER_STATUS_0_CPU3_STATUS_DORMANT                  _MK_ENUM_CONST(2)
#define SCU_POWER_STATUS_0_CPU3_STATUS_PWROFF                   _MK_ENUM_CONST(3)


// Register SCU_INVALID_ALL_0  
#define SCU_INVALID_ALL_0                       _MK_ADDR_CONST(0xc)
#define SCU_INVALID_ALL_0_SECURE                        0x0
#define SCU_INVALID_ALL_0_WORD_COUNT                    0x1
#define SCU_INVALID_ALL_0_RESET_VAL                     _MK_MASK_CONST(0x0)
#define SCU_INVALID_ALL_0_RESET_MASK                    _MK_MASK_CONST(0xffff)
#define SCU_INVALID_ALL_0_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SCU_INVALID_ALL_0_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SCU_INVALID_ALL_0_READ_MASK                     _MK_MASK_CONST(0xffff)
#define SCU_INVALID_ALL_0_WRITE_MASK                    _MK_MASK_CONST(0xffff)
#define SCU_INVALID_ALL_0_CPU0_WAYS_SHIFT                       _MK_SHIFT_CONST(0)
#define SCU_INVALID_ALL_0_CPU0_WAYS_FIELD                       (_MK_MASK_CONST(0xf) << SCU_INVALID_ALL_0_CPU0_WAYS_SHIFT)
#define SCU_INVALID_ALL_0_CPU0_WAYS_RANGE                       3:0
#define SCU_INVALID_ALL_0_CPU0_WAYS_WOFFSET                     0x0
#define SCU_INVALID_ALL_0_CPU0_WAYS_DEFAULT                     _MK_MASK_CONST(0x0)
#define SCU_INVALID_ALL_0_CPU0_WAYS_DEFAULT_MASK                        _MK_MASK_CONST(0xf)
#define SCU_INVALID_ALL_0_CPU0_WAYS_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SCU_INVALID_ALL_0_CPU0_WAYS_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)

#define SCU_INVALID_ALL_0_CPU1_WAYS_SHIFT                       _MK_SHIFT_CONST(4)
#define SCU_INVALID_ALL_0_CPU1_WAYS_FIELD                       (_MK_MASK_CONST(0xf) << SCU_INVALID_ALL_0_CPU1_WAYS_SHIFT)
#define SCU_INVALID_ALL_0_CPU1_WAYS_RANGE                       7:4
#define SCU_INVALID_ALL_0_CPU1_WAYS_WOFFSET                     0x0
#define SCU_INVALID_ALL_0_CPU1_WAYS_DEFAULT                     _MK_MASK_CONST(0x0)
#define SCU_INVALID_ALL_0_CPU1_WAYS_DEFAULT_MASK                        _MK_MASK_CONST(0xf)
#define SCU_INVALID_ALL_0_CPU1_WAYS_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SCU_INVALID_ALL_0_CPU1_WAYS_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)

#define SCU_INVALID_ALL_0_CPU2_WAYS_SHIFT                       _MK_SHIFT_CONST(8)
#define SCU_INVALID_ALL_0_CPU2_WAYS_FIELD                       (_MK_MASK_CONST(0xf) << SCU_INVALID_ALL_0_CPU2_WAYS_SHIFT)
#define SCU_INVALID_ALL_0_CPU2_WAYS_RANGE                       11:8
#define SCU_INVALID_ALL_0_CPU2_WAYS_WOFFSET                     0x0
#define SCU_INVALID_ALL_0_CPU2_WAYS_DEFAULT                     _MK_MASK_CONST(0x0)
#define SCU_INVALID_ALL_0_CPU2_WAYS_DEFAULT_MASK                        _MK_MASK_CONST(0xf)
#define SCU_INVALID_ALL_0_CPU2_WAYS_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SCU_INVALID_ALL_0_CPU2_WAYS_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)

#define SCU_INVALID_ALL_0_CPU3_WAYS_SHIFT                       _MK_SHIFT_CONST(12)
#define SCU_INVALID_ALL_0_CPU3_WAYS_FIELD                       (_MK_MASK_CONST(0xf) << SCU_INVALID_ALL_0_CPU3_WAYS_SHIFT)
#define SCU_INVALID_ALL_0_CPU3_WAYS_RANGE                       15:12
#define SCU_INVALID_ALL_0_CPU3_WAYS_WOFFSET                     0x0
#define SCU_INVALID_ALL_0_CPU3_WAYS_DEFAULT                     _MK_MASK_CONST(0x0)
#define SCU_INVALID_ALL_0_CPU3_WAYS_DEFAULT_MASK                        _MK_MASK_CONST(0xf)
#define SCU_INVALID_ALL_0_CPU3_WAYS_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SCU_INVALID_ALL_0_CPU3_WAYS_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)


// Reserved address 16 [0x10] 

// Reserved address 20 [0x14] 

// Reserved address 24 [0x18] 

// Reserved address 28 [0x1c] 

// Reserved address 32 [0x20] 

// Reserved address 36 [0x24] 

// Reserved address 40 [0x28] 

// Reserved address 44 [0x2c] 

// Reserved address 48 [0x30] 

// Reserved address 52 [0x34] 

// Reserved address 56 [0x38] 

// Reserved address 60 [0x3c] 

// Register SCU_FILTER_START_0  
#define SCU_FILTER_START_0                      _MK_ADDR_CONST(0x40)
#define SCU_FILTER_START_0_SECURE                       0x0
#define SCU_FILTER_START_0_WORD_COUNT                   0x1
#define SCU_FILTER_START_0_RESET_VAL                    _MK_MASK_CONST(0x0)
#define SCU_FILTER_START_0_RESET_MASK                   _MK_MASK_CONST(0xfff00000)
#define SCU_FILTER_START_0_SW_DEFAULT_VAL                       _MK_MASK_CONST(0x0)
#define SCU_FILTER_START_0_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SCU_FILTER_START_0_READ_MASK                    _MK_MASK_CONST(0xfff00000)
#define SCU_FILTER_START_0_WRITE_MASK                   _MK_MASK_CONST(0xfff00000)
#define SCU_FILTER_START_0_ADDR_SHIFT                   _MK_SHIFT_CONST(20)
#define SCU_FILTER_START_0_ADDR_FIELD                   (_MK_MASK_CONST(0xfff) << SCU_FILTER_START_0_ADDR_SHIFT)
#define SCU_FILTER_START_0_ADDR_RANGE                   31:20
#define SCU_FILTER_START_0_ADDR_WOFFSET                 0x0
#define SCU_FILTER_START_0_ADDR_DEFAULT                 _MK_MASK_CONST(0x0)
#define SCU_FILTER_START_0_ADDR_DEFAULT_MASK                    _MK_MASK_CONST(0xfff)
#define SCU_FILTER_START_0_ADDR_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define SCU_FILTER_START_0_ADDR_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)


// Register SCU_FILTER_END_0  
#define SCU_FILTER_END_0                        _MK_ADDR_CONST(0x44)
#define SCU_FILTER_END_0_SECURE                         0x0
#define SCU_FILTER_END_0_WORD_COUNT                     0x1
#define SCU_FILTER_END_0_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SCU_FILTER_END_0_RESET_MASK                     _MK_MASK_CONST(0xfff00000)
#define SCU_FILTER_END_0_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SCU_FILTER_END_0_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SCU_FILTER_END_0_READ_MASK                      _MK_MASK_CONST(0xfff00000)
#define SCU_FILTER_END_0_WRITE_MASK                     _MK_MASK_CONST(0xfff00000)
#define SCU_FILTER_END_0_ADDR_SHIFT                     _MK_SHIFT_CONST(20)
#define SCU_FILTER_END_0_ADDR_FIELD                     (_MK_MASK_CONST(0xfff) << SCU_FILTER_END_0_ADDR_SHIFT)
#define SCU_FILTER_END_0_ADDR_RANGE                     31:20
#define SCU_FILTER_END_0_ADDR_WOFFSET                   0x0
#define SCU_FILTER_END_0_ADDR_DEFAULT                   _MK_MASK_CONST(0x0)
#define SCU_FILTER_END_0_ADDR_DEFAULT_MASK                      _MK_MASK_CONST(0xfff)
#define SCU_FILTER_END_0_ADDR_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SCU_FILTER_END_0_ADDR_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)


// Reserved address 72 [0x48] 

// Reserved address 76 [0x4c] 

// Register SCU_ACCESS_CONTROL_0  
#define SCU_ACCESS_CONTROL_0                    _MK_ADDR_CONST(0x50)
#define SCU_ACCESS_CONTROL_0_SECURE                     0x0
#define SCU_ACCESS_CONTROL_0_WORD_COUNT                         0x1
#define SCU_ACCESS_CONTROL_0_RESET_VAL                  _MK_MASK_CONST(0xf)
#define SCU_ACCESS_CONTROL_0_RESET_MASK                         _MK_MASK_CONST(0xf)
#define SCU_ACCESS_CONTROL_0_SW_DEFAULT_VAL                     _MK_MASK_CONST(0x0)
#define SCU_ACCESS_CONTROL_0_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SCU_ACCESS_CONTROL_0_READ_MASK                  _MK_MASK_CONST(0xf)
#define SCU_ACCESS_CONTROL_0_WRITE_MASK                         _MK_MASK_CONST(0xf)
// 1: access_allowed
#define SCU_ACCESS_CONTROL_0_CPU0_CTRL_SHIFT                    _MK_SHIFT_CONST(0)
#define SCU_ACCESS_CONTROL_0_CPU0_CTRL_FIELD                    (_MK_MASK_CONST(0x1) << SCU_ACCESS_CONTROL_0_CPU0_CTRL_SHIFT)
#define SCU_ACCESS_CONTROL_0_CPU0_CTRL_RANGE                    0:0
#define SCU_ACCESS_CONTROL_0_CPU0_CTRL_WOFFSET                  0x0
#define SCU_ACCESS_CONTROL_0_CPU0_CTRL_DEFAULT                  _MK_MASK_CONST(0x1)
#define SCU_ACCESS_CONTROL_0_CPU0_CTRL_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SCU_ACCESS_CONTROL_0_CPU0_CTRL_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SCU_ACCESS_CONTROL_0_CPU0_CTRL_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)

#define SCU_ACCESS_CONTROL_0_CPU1_CTRL_SHIFT                    _MK_SHIFT_CONST(1)
#define SCU_ACCESS_CONTROL_0_CPU1_CTRL_FIELD                    (_MK_MASK_CONST(0x1) << SCU_ACCESS_CONTROL_0_CPU1_CTRL_SHIFT)
#define SCU_ACCESS_CONTROL_0_CPU1_CTRL_RANGE                    1:1
#define SCU_ACCESS_CONTROL_0_CPU1_CTRL_WOFFSET                  0x0
#define SCU_ACCESS_CONTROL_0_CPU1_CTRL_DEFAULT                  _MK_MASK_CONST(0x1)
#define SCU_ACCESS_CONTROL_0_CPU1_CTRL_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SCU_ACCESS_CONTROL_0_CPU1_CTRL_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SCU_ACCESS_CONTROL_0_CPU1_CTRL_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)

#define SCU_ACCESS_CONTROL_0_CPU2_CTRL_SHIFT                    _MK_SHIFT_CONST(2)
#define SCU_ACCESS_CONTROL_0_CPU2_CTRL_FIELD                    (_MK_MASK_CONST(0x1) << SCU_ACCESS_CONTROL_0_CPU2_CTRL_SHIFT)
#define SCU_ACCESS_CONTROL_0_CPU2_CTRL_RANGE                    2:2
#define SCU_ACCESS_CONTROL_0_CPU2_CTRL_WOFFSET                  0x0
#define SCU_ACCESS_CONTROL_0_CPU2_CTRL_DEFAULT                  _MK_MASK_CONST(0x1)
#define SCU_ACCESS_CONTROL_0_CPU2_CTRL_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SCU_ACCESS_CONTROL_0_CPU2_CTRL_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SCU_ACCESS_CONTROL_0_CPU2_CTRL_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)

#define SCU_ACCESS_CONTROL_0_CPU3_CTRL_SHIFT                    _MK_SHIFT_CONST(3)
#define SCU_ACCESS_CONTROL_0_CPU3_CTRL_FIELD                    (_MK_MASK_CONST(0x1) << SCU_ACCESS_CONTROL_0_CPU3_CTRL_SHIFT)
#define SCU_ACCESS_CONTROL_0_CPU3_CTRL_RANGE                    3:3
#define SCU_ACCESS_CONTROL_0_CPU3_CTRL_WOFFSET                  0x0
#define SCU_ACCESS_CONTROL_0_CPU3_CTRL_DEFAULT                  _MK_MASK_CONST(0x1)
#define SCU_ACCESS_CONTROL_0_CPU3_CTRL_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SCU_ACCESS_CONTROL_0_CPU3_CTRL_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SCU_ACCESS_CONTROL_0_CPU3_CTRL_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)


// Register SCU_SECURE_ACCESS_CONTROL_0  
#define SCU_SECURE_ACCESS_CONTROL_0                     _MK_ADDR_CONST(0x54)
#define SCU_SECURE_ACCESS_CONTROL_0_SECURE                      0x0
#define SCU_SECURE_ACCESS_CONTROL_0_WORD_COUNT                  0x1
#define SCU_SECURE_ACCESS_CONTROL_0_RESET_VAL                   _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_RESET_MASK                  _MK_MASK_CONST(0xfff)
#define SCU_SECURE_ACCESS_CONTROL_0_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_READ_MASK                   _MK_MASK_CONST(0xfff)
#define SCU_SECURE_ACCESS_CONTROL_0_WRITE_MASK                  _MK_MASK_CONST(0xfff)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU0_CTRL_SHIFT                     _MK_SHIFT_CONST(0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU0_CTRL_FIELD                     (_MK_MASK_CONST(0x1) << SCU_SECURE_ACCESS_CONTROL_0_CPU0_CTRL_SHIFT)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU0_CTRL_RANGE                     0:0
#define SCU_SECURE_ACCESS_CONTROL_0_CPU0_CTRL_WOFFSET                   0x0
#define SCU_SECURE_ACCESS_CONTROL_0_CPU0_CTRL_DEFAULT                   _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU0_CTRL_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU0_CTRL_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU0_CTRL_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)

#define SCU_SECURE_ACCESS_CONTROL_0_CPU1_CTRL_SHIFT                     _MK_SHIFT_CONST(1)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU1_CTRL_FIELD                     (_MK_MASK_CONST(0x1) << SCU_SECURE_ACCESS_CONTROL_0_CPU1_CTRL_SHIFT)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU1_CTRL_RANGE                     1:1
#define SCU_SECURE_ACCESS_CONTROL_0_CPU1_CTRL_WOFFSET                   0x0
#define SCU_SECURE_ACCESS_CONTROL_0_CPU1_CTRL_DEFAULT                   _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU1_CTRL_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU1_CTRL_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU1_CTRL_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)

#define SCU_SECURE_ACCESS_CONTROL_0_CPU2_CTRL_SHIFT                     _MK_SHIFT_CONST(2)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU2_CTRL_FIELD                     (_MK_MASK_CONST(0x1) << SCU_SECURE_ACCESS_CONTROL_0_CPU2_CTRL_SHIFT)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU2_CTRL_RANGE                     2:2
#define SCU_SECURE_ACCESS_CONTROL_0_CPU2_CTRL_WOFFSET                   0x0
#define SCU_SECURE_ACCESS_CONTROL_0_CPU2_CTRL_DEFAULT                   _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU2_CTRL_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU2_CTRL_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU2_CTRL_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)

#define SCU_SECURE_ACCESS_CONTROL_0_CPU3_CTRL_SHIFT                     _MK_SHIFT_CONST(3)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU3_CTRL_FIELD                     (_MK_MASK_CONST(0x1) << SCU_SECURE_ACCESS_CONTROL_0_CPU3_CTRL_SHIFT)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU3_CTRL_RANGE                     3:3
#define SCU_SECURE_ACCESS_CONTROL_0_CPU3_CTRL_WOFFSET                   0x0
#define SCU_SECURE_ACCESS_CONTROL_0_CPU3_CTRL_DEFAULT                   _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU3_CTRL_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU3_CTRL_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU3_CTRL_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)

#define SCU_SECURE_ACCESS_CONTROL_0_CPU0_TIMER_SHIFT                    _MK_SHIFT_CONST(4)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU0_TIMER_FIELD                    (_MK_MASK_CONST(0x1) << SCU_SECURE_ACCESS_CONTROL_0_CPU0_TIMER_SHIFT)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU0_TIMER_RANGE                    4:4
#define SCU_SECURE_ACCESS_CONTROL_0_CPU0_TIMER_WOFFSET                  0x0
#define SCU_SECURE_ACCESS_CONTROL_0_CPU0_TIMER_DEFAULT                  _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU0_TIMER_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU0_TIMER_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU0_TIMER_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)

#define SCU_SECURE_ACCESS_CONTROL_0_CPU1_TIMER_SHIFT                    _MK_SHIFT_CONST(5)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU1_TIMER_FIELD                    (_MK_MASK_CONST(0x1) << SCU_SECURE_ACCESS_CONTROL_0_CPU1_TIMER_SHIFT)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU1_TIMER_RANGE                    5:5
#define SCU_SECURE_ACCESS_CONTROL_0_CPU1_TIMER_WOFFSET                  0x0
#define SCU_SECURE_ACCESS_CONTROL_0_CPU1_TIMER_DEFAULT                  _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU1_TIMER_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU1_TIMER_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU1_TIMER_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)

#define SCU_SECURE_ACCESS_CONTROL_0_CPU2_TIMER_SHIFT                    _MK_SHIFT_CONST(6)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU2_TIMER_FIELD                    (_MK_MASK_CONST(0x1) << SCU_SECURE_ACCESS_CONTROL_0_CPU2_TIMER_SHIFT)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU2_TIMER_RANGE                    6:6
#define SCU_SECURE_ACCESS_CONTROL_0_CPU2_TIMER_WOFFSET                  0x0
#define SCU_SECURE_ACCESS_CONTROL_0_CPU2_TIMER_DEFAULT                  _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU2_TIMER_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU2_TIMER_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU2_TIMER_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)

#define SCU_SECURE_ACCESS_CONTROL_0_CPU3_TIMER_SHIFT                    _MK_SHIFT_CONST(7)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU3_TIMER_FIELD                    (_MK_MASK_CONST(0x1) << SCU_SECURE_ACCESS_CONTROL_0_CPU3_TIMER_SHIFT)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU3_TIMER_RANGE                    7:7
#define SCU_SECURE_ACCESS_CONTROL_0_CPU3_TIMER_WOFFSET                  0x0
#define SCU_SECURE_ACCESS_CONTROL_0_CPU3_TIMER_DEFAULT                  _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU3_TIMER_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU3_TIMER_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU3_TIMER_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)

#define SCU_SECURE_ACCESS_CONTROL_0_CPU0_GLOBAL_TIMER_SHIFT                     _MK_SHIFT_CONST(8)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU0_GLOBAL_TIMER_FIELD                     (_MK_MASK_CONST(0x1) << SCU_SECURE_ACCESS_CONTROL_0_CPU0_GLOBAL_TIMER_SHIFT)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU0_GLOBAL_TIMER_RANGE                     8:8
#define SCU_SECURE_ACCESS_CONTROL_0_CPU0_GLOBAL_TIMER_WOFFSET                   0x0
#define SCU_SECURE_ACCESS_CONTROL_0_CPU0_GLOBAL_TIMER_DEFAULT                   _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU0_GLOBAL_TIMER_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU0_GLOBAL_TIMER_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU0_GLOBAL_TIMER_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)

#define SCU_SECURE_ACCESS_CONTROL_0_CPU1_GLOBAL_TIMER_SHIFT                     _MK_SHIFT_CONST(9)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU1_GLOBAL_TIMER_FIELD                     (_MK_MASK_CONST(0x1) << SCU_SECURE_ACCESS_CONTROL_0_CPU1_GLOBAL_TIMER_SHIFT)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU1_GLOBAL_TIMER_RANGE                     9:9
#define SCU_SECURE_ACCESS_CONTROL_0_CPU1_GLOBAL_TIMER_WOFFSET                   0x0
#define SCU_SECURE_ACCESS_CONTROL_0_CPU1_GLOBAL_TIMER_DEFAULT                   _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU1_GLOBAL_TIMER_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU1_GLOBAL_TIMER_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU1_GLOBAL_TIMER_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)

#define SCU_SECURE_ACCESS_CONTROL_0_CPU2_GLOBAL_TIMER_SHIFT                     _MK_SHIFT_CONST(10)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU2_GLOBAL_TIMER_FIELD                     (_MK_MASK_CONST(0x1) << SCU_SECURE_ACCESS_CONTROL_0_CPU2_GLOBAL_TIMER_SHIFT)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU2_GLOBAL_TIMER_RANGE                     10:10
#define SCU_SECURE_ACCESS_CONTROL_0_CPU2_GLOBAL_TIMER_WOFFSET                   0x0
#define SCU_SECURE_ACCESS_CONTROL_0_CPU2_GLOBAL_TIMER_DEFAULT                   _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU2_GLOBAL_TIMER_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU2_GLOBAL_TIMER_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU2_GLOBAL_TIMER_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)

#define SCU_SECURE_ACCESS_CONTROL_0_CPU3_GLOBAL_TIMER_SHIFT                     _MK_SHIFT_CONST(11)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU3_GLOBAL_TIMER_FIELD                     (_MK_MASK_CONST(0x1) << SCU_SECURE_ACCESS_CONTROL_0_CPU3_GLOBAL_TIMER_SHIFT)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU3_GLOBAL_TIMER_RANGE                     11:11
#define SCU_SECURE_ACCESS_CONTROL_0_CPU3_GLOBAL_TIMER_WOFFSET                   0x0
#define SCU_SECURE_ACCESS_CONTROL_0_CPU3_GLOBAL_TIMER_DEFAULT                   _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU3_GLOBAL_TIMER_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU3_GLOBAL_TIMER_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SCU_SECURE_ACCESS_CONTROL_0_CPU3_GLOBAL_TIMER_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)


//
// REGISTER LIST
//
#define LIST_ARSCU_REGS(_op_) \
_op_(SCU_CONTROL_0) \
_op_(SCU_CONFIG_0) \
_op_(SCU_POWER_STATUS_0) \
_op_(SCU_INVALID_ALL_0) \
_op_(SCU_FILTER_START_0) \
_op_(SCU_FILTER_END_0) \
_op_(SCU_ACCESS_CONTROL_0) \
_op_(SCU_SECURE_ACCESS_CONTROL_0)


//
// ADDRESS SPACES
//

#define BASE_ADDRESS_SCU        0x00000000

//
// ARSCU REGISTER BANKS
//

#define SCU0_FIRST_REG 0x0000 // SCU_CONTROL_0
#define SCU0_LAST_REG 0x000c // SCU_INVALID_ALL_0
#define SCU1_FIRST_REG 0x0040 // SCU_FILTER_START_0
#define SCU1_LAST_REG 0x0044 // SCU_FILTER_END_0
#define SCU2_FIRST_REG 0x0050 // SCU_ACCESS_CONTROL_0
#define SCU2_LAST_REG 0x0054 // SCU_SECURE_ACCESS_CONTROL_0

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

#endif // ifndef ___ARSCU_H_INC_
