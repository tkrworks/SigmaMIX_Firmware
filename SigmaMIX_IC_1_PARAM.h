/*
 * File:           C:\Users\shun\SimplicityStudio\v4_workspace\SigmaMIX\SigmaMIX_IC_1_PARAM.h
 *
 * Created:        Friday, July 21, 2017 2:19:59 PM
 * Description:    SigmaMIX_2:IC 1 parameter RAM definitions.
 *
 * This software is distributed in the hope that it will be useful,
 * but is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
 * CONDITIONS OF ANY KIND, without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * This software may only be used to program products purchased from
 * Analog Devices for incorporation by you into audio products that
 * are intended for resale to audio product end users. This software
 * may not be distributed whole or in any part to third parties.
 *
 * Copyright ©2017 Analog Devices, Inc. All rights reserved.
 */
#ifndef __SIGMAMIX_IC_1_PARAM_H__
#define __SIGMAMIX_IC_1_PARAM_H__


/* Module ph ln sw2 - Stereo Switch 2xN*/
#define MOD_PHLNSW2_COUNT                              2
#define MOD_PHLNSW2_DEVICE                             "IC1"
#define MOD_PHLNSW2_ALG0_STEREODEMUX1940NS20_ADDR      0
#define MOD_PHLNSW2_ALG0_STEREODEMUX1940NS20_FIXPT     0x00800000
#define MOD_PHLNSW2_ALG0_STEREODEMUX1940NS20_VALUE     SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_PHLNSW2_ALG0_STEREODEMUX1940NS20_TYPE      SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHLNSW2_ALG0_STEREODEMUX1940NS21_ADDR      1
#define MOD_PHLNSW2_ALG0_STEREODEMUX1940NS21_FIXPT     0x00000000
#define MOD_PHLNSW2_ALG0_STEREODEMUX1940NS21_VALUE     SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_PHLNSW2_ALG0_STEREODEMUX1940NS21_TYPE      SIGMASTUDIOTYPE_FIXPOINT

/* Module ph ln sw1 - Stereo Switch 2xN*/
#define MOD_PHLNSW1_COUNT                              2
#define MOD_PHLNSW1_DEVICE                             "IC1"
#define MOD_PHLNSW1_ALG0_STEREODEMUX1940NS10_ADDR      2
#define MOD_PHLNSW1_ALG0_STEREODEMUX1940NS10_FIXPT     0x00800000
#define MOD_PHLNSW1_ALG0_STEREODEMUX1940NS10_VALUE     SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_PHLNSW1_ALG0_STEREODEMUX1940NS10_TYPE      SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHLNSW1_ALG0_STEREODEMUX1940NS11_ADDR      3
#define MOD_PHLNSW1_ALG0_STEREODEMUX1940NS11_FIXPT     0x00000000
#define MOD_PHLNSW1_ALG0_STEREODEMUX1940NS11_VALUE     SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_PHLNSW1_ALG0_STEREODEMUX1940NS11_TYPE      SIGMASTUDIOTYPE_FIXPOINT

/* Module phono eq1 - Parametric EQ*/
#define MOD_PHONOEQ1_COUNT                             30
#define MOD_PHONOEQ1_DEVICE                            "IC1"
#define MOD_PHONOEQ1_ALG0_STAGE0_B0_ADDR               4
#define MOD_PHONOEQ1_ALG0_STAGE0_B0_FIXPT              0x008130E0
#define MOD_PHONOEQ1_ALG0_STAGE0_B0_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1.00930404751396)
#define MOD_PHONOEQ1_ALG0_STAGE0_B0_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE0_B0_ADDR               4
#define MOD_PHONOEQ1_ALG0_STAGE0_B0_FIXPT              0x008130E0
#define MOD_PHONOEQ1_ALG0_STAGE0_B0_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1.00930404751396)
#define MOD_PHONOEQ1_ALG0_STAGE0_B0_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE0_B1_ADDR               5
#define MOD_PHONOEQ1_ALG0_STAGE0_B1_FIXPT              0xFF0043C4
#define MOD_PHONOEQ1_ALG0_STAGE0_B1_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-1.9979320059604)
#define MOD_PHONOEQ1_ALG0_STAGE0_B1_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE0_B1_ADDR               5
#define MOD_PHONOEQ1_ALG0_STAGE0_B1_FIXPT              0xFF0043C4
#define MOD_PHONOEQ1_ALG0_STAGE0_B1_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-1.9979320059604)
#define MOD_PHONOEQ1_ALG0_STAGE0_B1_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE0_B2_ADDR               6
#define MOD_PHONOEQ1_ALG0_STAGE0_B2_FIXPT              0x007E8B5F
#define MOD_PHONOEQ1_ALG0_STAGE0_B2_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.988628386371827)
#define MOD_PHONOEQ1_ALG0_STAGE0_B2_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE0_B2_ADDR               6
#define MOD_PHONOEQ1_ALG0_STAGE0_B2_FIXPT              0x007E8B5F
#define MOD_PHONOEQ1_ALG0_STAGE0_B2_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.988628386371827)
#define MOD_PHONOEQ1_ALG0_STAGE0_B2_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE0_A0_ADDR               7
#define MOD_PHONOEQ1_ALG0_STAGE0_A0_FIXPT              0x00FFBC3C
#define MOD_PHONOEQ1_ALG0_STAGE0_A0_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1.9979320059604)
#define MOD_PHONOEQ1_ALG0_STAGE0_A0_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE0_A0_ADDR               7
#define MOD_PHONOEQ1_ALG0_STAGE0_A0_FIXPT              0x00FFBC3C
#define MOD_PHONOEQ1_ALG0_STAGE0_A0_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1.9979320059604)
#define MOD_PHONOEQ1_ALG0_STAGE0_A0_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE0_A1_ADDR               8
#define MOD_PHONOEQ1_ALG0_STAGE0_A1_FIXPT              0xFF8043C1
#define MOD_PHONOEQ1_ALG0_STAGE0_A1_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-0.997932433885787)
#define MOD_PHONOEQ1_ALG0_STAGE0_A1_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE0_A1_ADDR               8
#define MOD_PHONOEQ1_ALG0_STAGE0_A1_FIXPT              0xFF8043C1
#define MOD_PHONOEQ1_ALG0_STAGE0_A1_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-0.997932433885787)
#define MOD_PHONOEQ1_ALG0_STAGE0_A1_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE1_B0_ADDR               9
#define MOD_PHONOEQ1_ALG0_STAGE1_B0_FIXPT              0x007FA043
#define MOD_PHONOEQ1_ALG0_STAGE1_B0_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.997078372556115)
#define MOD_PHONOEQ1_ALG0_STAGE1_B0_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE1_B0_ADDR               9
#define MOD_PHONOEQ1_ALG0_STAGE1_B0_FIXPT              0x007FA043
#define MOD_PHONOEQ1_ALG0_STAGE1_B0_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.997078372556115)
#define MOD_PHONOEQ1_ALG0_STAGE1_B0_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE1_B1_ADDR               10
#define MOD_PHONOEQ1_ALG0_STAGE1_B1_FIXPT              0xFF01B606
#define MOD_PHONOEQ1_ALG0_STAGE1_B1_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-1.98663268494166)
#define MOD_PHONOEQ1_ALG0_STAGE1_B1_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE1_B1_ADDR               10
#define MOD_PHONOEQ1_ALG0_STAGE1_B1_FIXPT              0xFF01B606
#define MOD_PHONOEQ1_ALG0_STAGE1_B1_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-1.98663268494166)
#define MOD_PHONOEQ1_ALG0_STAGE1_B1_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE1_B2_ADDR               11
#define MOD_PHONOEQ1_ALG0_STAGE1_B2_FIXPT              0x007EAA3E
#define MOD_PHONOEQ1_ALG0_STAGE1_B2_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.989570458544258)
#define MOD_PHONOEQ1_ALG0_STAGE1_B2_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE1_B2_ADDR               11
#define MOD_PHONOEQ1_ALG0_STAGE1_B2_FIXPT              0x007EAA3E
#define MOD_PHONOEQ1_ALG0_STAGE1_B2_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.989570458544258)
#define MOD_PHONOEQ1_ALG0_STAGE1_B2_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE1_A0_ADDR               12
#define MOD_PHONOEQ1_ALG0_STAGE1_A0_FIXPT              0x00FE49FA
#define MOD_PHONOEQ1_ALG0_STAGE1_A0_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1.98663268494166)
#define MOD_PHONOEQ1_ALG0_STAGE1_A0_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE1_A0_ADDR               12
#define MOD_PHONOEQ1_ALG0_STAGE1_A0_FIXPT              0x00FE49FA
#define MOD_PHONOEQ1_ALG0_STAGE1_A0_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1.98663268494166)
#define MOD_PHONOEQ1_ALG0_STAGE1_A0_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE1_A1_ADDR               13
#define MOD_PHONOEQ1_ALG0_STAGE1_A1_FIXPT              0xFF81B57E
#define MOD_PHONOEQ1_ALG0_STAGE1_A1_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-0.986648831100373)
#define MOD_PHONOEQ1_ALG0_STAGE1_A1_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE1_A1_ADDR               13
#define MOD_PHONOEQ1_ALG0_STAGE1_A1_FIXPT              0xFF81B57E
#define MOD_PHONOEQ1_ALG0_STAGE1_A1_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-0.986648831100373)
#define MOD_PHONOEQ1_ALG0_STAGE1_A1_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE2_B0_ADDR               14
#define MOD_PHONOEQ1_ALG0_STAGE2_B0_FIXPT              0x002E9E89
#define MOD_PHONOEQ1_ALG0_STAGE2_B0_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.364213137738593)
#define MOD_PHONOEQ1_ALG0_STAGE2_B0_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE2_B0_ADDR               14
#define MOD_PHONOEQ1_ALG0_STAGE2_B0_FIXPT              0x002E9E89
#define MOD_PHONOEQ1_ALG0_STAGE2_B0_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.364213137738593)
#define MOD_PHONOEQ1_ALG0_STAGE2_B0_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE2_B1_ADDR               15
#define MOD_PHONOEQ1_ALG0_STAGE2_B1_FIXPT              0xFFC46059
#define MOD_PHONOEQ1_ALG0_STAGE2_B1_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-0.465809723052758)
#define MOD_PHONOEQ1_ALG0_STAGE2_B1_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE2_B1_ADDR               15
#define MOD_PHONOEQ1_ALG0_STAGE2_B1_FIXPT              0xFFC46059
#define MOD_PHONOEQ1_ALG0_STAGE2_B1_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-0.465809723052758)
#define MOD_PHONOEQ1_ALG0_STAGE2_B1_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE2_B2_ADDR               16
#define MOD_PHONOEQ1_ALG0_STAGE2_B2_FIXPT              0x001C88E0
#define MOD_PHONOEQ1_ALG0_STAGE2_B2_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.222927168347169)
#define MOD_PHONOEQ1_ALG0_STAGE2_B2_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE2_B2_ADDR               16
#define MOD_PHONOEQ1_ALG0_STAGE2_B2_FIXPT              0x001C88E0
#define MOD_PHONOEQ1_ALG0_STAGE2_B2_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.222927168347169)
#define MOD_PHONOEQ1_ALG0_STAGE2_B2_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE2_A0_ADDR               17
#define MOD_PHONOEQ1_ALG0_STAGE2_A0_FIXPT              0x003B9FA7
#define MOD_PHONOEQ1_ALG0_STAGE2_A0_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.465809723052758)
#define MOD_PHONOEQ1_ALG0_STAGE2_A0_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE2_A0_ADDR               17
#define MOD_PHONOEQ1_ALG0_STAGE2_A0_FIXPT              0x003B9FA7
#define MOD_PHONOEQ1_ALG0_STAGE2_A0_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.465809723052758)
#define MOD_PHONOEQ1_ALG0_STAGE2_A0_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE2_A1_ADDR               18
#define MOD_PHONOEQ1_ALG0_STAGE2_A1_FIXPT              0x0034D896
#define MOD_PHONOEQ1_ALG0_STAGE2_A1_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.412859693914238)
#define MOD_PHONOEQ1_ALG0_STAGE2_A1_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ1_ALG0_STAGE2_A1_ADDR               18
#define MOD_PHONOEQ1_ALG0_STAGE2_A1_FIXPT              0x0034D896
#define MOD_PHONOEQ1_ALG0_STAGE2_A1_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.412859693914238)
#define MOD_PHONOEQ1_ALG0_STAGE2_A1_TYPE               SIGMASTUDIOTYPE_FIXPOINT

/* Module phono eq2 - Parametric EQ*/
#define MOD_PHONOEQ2_COUNT                             30
#define MOD_PHONOEQ2_DEVICE                            "IC1"
#define MOD_PHONOEQ2_ALG0_STAGE0_B0_ADDR               19
#define MOD_PHONOEQ2_ALG0_STAGE0_B0_FIXPT              0x008130E0
#define MOD_PHONOEQ2_ALG0_STAGE0_B0_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1.00930404751396)
#define MOD_PHONOEQ2_ALG0_STAGE0_B0_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE0_B0_ADDR               19
#define MOD_PHONOEQ2_ALG0_STAGE0_B0_FIXPT              0x008130E0
#define MOD_PHONOEQ2_ALG0_STAGE0_B0_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1.00930404751396)
#define MOD_PHONOEQ2_ALG0_STAGE0_B0_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE0_B1_ADDR               20
#define MOD_PHONOEQ2_ALG0_STAGE0_B1_FIXPT              0xFF0043C4
#define MOD_PHONOEQ2_ALG0_STAGE0_B1_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-1.9979320059604)
#define MOD_PHONOEQ2_ALG0_STAGE0_B1_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE0_B1_ADDR               20
#define MOD_PHONOEQ2_ALG0_STAGE0_B1_FIXPT              0xFF0043C4
#define MOD_PHONOEQ2_ALG0_STAGE0_B1_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-1.9979320059604)
#define MOD_PHONOEQ2_ALG0_STAGE0_B1_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE0_B2_ADDR               21
#define MOD_PHONOEQ2_ALG0_STAGE0_B2_FIXPT              0x007E8B5F
#define MOD_PHONOEQ2_ALG0_STAGE0_B2_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.988628386371827)
#define MOD_PHONOEQ2_ALG0_STAGE0_B2_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE0_B2_ADDR               21
#define MOD_PHONOEQ2_ALG0_STAGE0_B2_FIXPT              0x007E8B5F
#define MOD_PHONOEQ2_ALG0_STAGE0_B2_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.988628386371827)
#define MOD_PHONOEQ2_ALG0_STAGE0_B2_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE0_A0_ADDR               22
#define MOD_PHONOEQ2_ALG0_STAGE0_A0_FIXPT              0x00FFBC3C
#define MOD_PHONOEQ2_ALG0_STAGE0_A0_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1.9979320059604)
#define MOD_PHONOEQ2_ALG0_STAGE0_A0_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE0_A0_ADDR               22
#define MOD_PHONOEQ2_ALG0_STAGE0_A0_FIXPT              0x00FFBC3C
#define MOD_PHONOEQ2_ALG0_STAGE0_A0_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1.9979320059604)
#define MOD_PHONOEQ2_ALG0_STAGE0_A0_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE0_A1_ADDR               23
#define MOD_PHONOEQ2_ALG0_STAGE0_A1_FIXPT              0xFF8043C1
#define MOD_PHONOEQ2_ALG0_STAGE0_A1_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-0.997932433885787)
#define MOD_PHONOEQ2_ALG0_STAGE0_A1_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE0_A1_ADDR               23
#define MOD_PHONOEQ2_ALG0_STAGE0_A1_FIXPT              0xFF8043C1
#define MOD_PHONOEQ2_ALG0_STAGE0_A1_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-0.997932433885787)
#define MOD_PHONOEQ2_ALG0_STAGE0_A1_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE1_B0_ADDR               24
#define MOD_PHONOEQ2_ALG0_STAGE1_B0_FIXPT              0x007FA043
#define MOD_PHONOEQ2_ALG0_STAGE1_B0_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.997078372556115)
#define MOD_PHONOEQ2_ALG0_STAGE1_B0_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE1_B0_ADDR               24
#define MOD_PHONOEQ2_ALG0_STAGE1_B0_FIXPT              0x007FA043
#define MOD_PHONOEQ2_ALG0_STAGE1_B0_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.997078372556115)
#define MOD_PHONOEQ2_ALG0_STAGE1_B0_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE1_B1_ADDR               25
#define MOD_PHONOEQ2_ALG0_STAGE1_B1_FIXPT              0xFF01B606
#define MOD_PHONOEQ2_ALG0_STAGE1_B1_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-1.98663268494166)
#define MOD_PHONOEQ2_ALG0_STAGE1_B1_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE1_B1_ADDR               25
#define MOD_PHONOEQ2_ALG0_STAGE1_B1_FIXPT              0xFF01B606
#define MOD_PHONOEQ2_ALG0_STAGE1_B1_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-1.98663268494166)
#define MOD_PHONOEQ2_ALG0_STAGE1_B1_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE1_B2_ADDR               26
#define MOD_PHONOEQ2_ALG0_STAGE1_B2_FIXPT              0x007EAA3E
#define MOD_PHONOEQ2_ALG0_STAGE1_B2_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.989570458544258)
#define MOD_PHONOEQ2_ALG0_STAGE1_B2_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE1_B2_ADDR               26
#define MOD_PHONOEQ2_ALG0_STAGE1_B2_FIXPT              0x007EAA3E
#define MOD_PHONOEQ2_ALG0_STAGE1_B2_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.989570458544258)
#define MOD_PHONOEQ2_ALG0_STAGE1_B2_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE1_A0_ADDR               27
#define MOD_PHONOEQ2_ALG0_STAGE1_A0_FIXPT              0x00FE49FA
#define MOD_PHONOEQ2_ALG0_STAGE1_A0_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1.98663268494166)
#define MOD_PHONOEQ2_ALG0_STAGE1_A0_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE1_A0_ADDR               27
#define MOD_PHONOEQ2_ALG0_STAGE1_A0_FIXPT              0x00FE49FA
#define MOD_PHONOEQ2_ALG0_STAGE1_A0_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1.98663268494166)
#define MOD_PHONOEQ2_ALG0_STAGE1_A0_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE1_A1_ADDR               28
#define MOD_PHONOEQ2_ALG0_STAGE1_A1_FIXPT              0xFF81B57E
#define MOD_PHONOEQ2_ALG0_STAGE1_A1_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-0.986648831100373)
#define MOD_PHONOEQ2_ALG0_STAGE1_A1_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE1_A1_ADDR               28
#define MOD_PHONOEQ2_ALG0_STAGE1_A1_FIXPT              0xFF81B57E
#define MOD_PHONOEQ2_ALG0_STAGE1_A1_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-0.986648831100373)
#define MOD_PHONOEQ2_ALG0_STAGE1_A1_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE2_B0_ADDR               29
#define MOD_PHONOEQ2_ALG0_STAGE2_B0_FIXPT              0x002E9E89
#define MOD_PHONOEQ2_ALG0_STAGE2_B0_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.364213137738593)
#define MOD_PHONOEQ2_ALG0_STAGE2_B0_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE2_B0_ADDR               29
#define MOD_PHONOEQ2_ALG0_STAGE2_B0_FIXPT              0x002E9E89
#define MOD_PHONOEQ2_ALG0_STAGE2_B0_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.364213137738593)
#define MOD_PHONOEQ2_ALG0_STAGE2_B0_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE2_B1_ADDR               30
#define MOD_PHONOEQ2_ALG0_STAGE2_B1_FIXPT              0xFFC46059
#define MOD_PHONOEQ2_ALG0_STAGE2_B1_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-0.465809723052758)
#define MOD_PHONOEQ2_ALG0_STAGE2_B1_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE2_B1_ADDR               30
#define MOD_PHONOEQ2_ALG0_STAGE2_B1_FIXPT              0xFFC46059
#define MOD_PHONOEQ2_ALG0_STAGE2_B1_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-0.465809723052758)
#define MOD_PHONOEQ2_ALG0_STAGE2_B1_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE2_B2_ADDR               31
#define MOD_PHONOEQ2_ALG0_STAGE2_B2_FIXPT              0x001C88E0
#define MOD_PHONOEQ2_ALG0_STAGE2_B2_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.222927168347169)
#define MOD_PHONOEQ2_ALG0_STAGE2_B2_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE2_B2_ADDR               31
#define MOD_PHONOEQ2_ALG0_STAGE2_B2_FIXPT              0x001C88E0
#define MOD_PHONOEQ2_ALG0_STAGE2_B2_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.222927168347169)
#define MOD_PHONOEQ2_ALG0_STAGE2_B2_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE2_A0_ADDR               32
#define MOD_PHONOEQ2_ALG0_STAGE2_A0_FIXPT              0x003B9FA7
#define MOD_PHONOEQ2_ALG0_STAGE2_A0_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.465809723052758)
#define MOD_PHONOEQ2_ALG0_STAGE2_A0_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE2_A0_ADDR               32
#define MOD_PHONOEQ2_ALG0_STAGE2_A0_FIXPT              0x003B9FA7
#define MOD_PHONOEQ2_ALG0_STAGE2_A0_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.465809723052758)
#define MOD_PHONOEQ2_ALG0_STAGE2_A0_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE2_A1_ADDR               33
#define MOD_PHONOEQ2_ALG0_STAGE2_A1_FIXPT              0x0034D896
#define MOD_PHONOEQ2_ALG0_STAGE2_A1_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.412859693914238)
#define MOD_PHONOEQ2_ALG0_STAGE2_A1_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOEQ2_ALG0_STAGE2_A1_ADDR               33
#define MOD_PHONOEQ2_ALG0_STAGE2_A1_FIXPT              0x0034D896
#define MOD_PHONOEQ2_ALG0_STAGE2_A1_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.412859693914238)
#define MOD_PHONOEQ2_ALG0_STAGE2_A1_TYPE               SIGMASTUDIOTYPE_FIXPOINT

/* Module phono gain1 - Single SW slew vol (adjustable)*/
#define MOD_PHONOGAIN1_COUNT                           2
#define MOD_PHONOGAIN1_DEVICE                          "IC1"
#define MOD_PHONOGAIN1_ALG0_TARGET_ADDR                34
#define MOD_PHONOGAIN1_ALG0_TARGET_FIXPT               0x03F8BD79
#define MOD_PHONOGAIN1_ALG0_TARGET_VALUE               SIGMASTUDIOTYPE_FIXPOINT_CONVERT(7.94328234724282)
#define MOD_PHONOGAIN1_ALG0_TARGET_TYPE                SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOGAIN1_ALG0_STEP_ADDR                  35
#define MOD_PHONOGAIN1_ALG0_STEP_FIXPT                 0x00008000
#define MOD_PHONOGAIN1_ALG0_STEP_VALUE                 SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.00390625)
#define MOD_PHONOGAIN1_ALG0_STEP_TYPE                  SIGMASTUDIOTYPE_FIXPOINT

/* Module phono gain2 - Single SW slew vol (adjustable)*/
#define MOD_PHONOGAIN2_COUNT                           2
#define MOD_PHONOGAIN2_DEVICE                          "IC1"
#define MOD_PHONOGAIN2_ALG0_TARGET_ADDR                36
#define MOD_PHONOGAIN2_ALG0_TARGET_FIXPT               0x03F8BD79
#define MOD_PHONOGAIN2_ALG0_TARGET_VALUE               SIGMASTUDIOTYPE_FIXPOINT_CONVERT(7.94328234724282)
#define MOD_PHONOGAIN2_ALG0_TARGET_TYPE                SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PHONOGAIN2_ALG0_STEP_ADDR                  37
#define MOD_PHONOGAIN2_ALG0_STEP_FIXPT                 0x00008000
#define MOD_PHONOGAIN2_ALG0_STEP_VALUE                 SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.00390625)
#define MOD_PHONOGAIN2_ALG0_STEP_TYPE                  SIGMASTUDIOTYPE_FIXPOINT

/* Module mg3 - Signal Merger*/
#define MOD_MG3_COUNT                                  1
#define MOD_MG3_DEVICE                                 "IC1"
#define MOD_MG3_SINGLECTRLMIXER19403_ADDR              38
#define MOD_MG3_SINGLECTRLMIXER19403_FIXPT             0x00400000
#define MOD_MG3_SINGLECTRLMIXER19403_VALUE             SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.5)
#define MOD_MG3_SINGLECTRLMIXER19403_TYPE              SIGMASTUDIOTYPE_FIXPOINT

/* Module mg2 - Signal Merger*/
#define MOD_MG2_COUNT                                  1
#define MOD_MG2_DEVICE                                 "IC1"
#define MOD_MG2_SINGLECTRLMIXER19402_ADDR              39
#define MOD_MG2_SINGLECTRLMIXER19402_FIXPT             0x00400000
#define MOD_MG2_SINGLECTRLMIXER19402_VALUE             SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.5)
#define MOD_MG2_SINGLECTRLMIXER19402_TYPE              SIGMASTUDIOTYPE_FIXPOINT

/* Module mg1 - Signal Merger*/
#define MOD_MG1_COUNT                                  1
#define MOD_MG1_DEVICE                                 "IC1"
#define MOD_MG1_SINGLECTRLMIXER19401_ADDR              40
#define MOD_MG1_SINGLECTRLMIXER19401_FIXPT             0x00400000
#define MOD_MG1_SINGLECTRLMIXER19401_VALUE             SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.5)
#define MOD_MG1_SINGLECTRLMIXER19401_TYPE              SIGMASTUDIOTYPE_FIXPOINT

/* Module mg4 - Signal Merger*/
#define MOD_MG4_COUNT                                  1
#define MOD_MG4_DEVICE                                 "IC1"
#define MOD_MG4_SINGLECTRLMIXER19404_ADDR              41
#define MOD_MG4_SINGLECTRLMIXER19404_FIXPT             0x00400000
#define MOD_MG4_SINGLECTRLMIXER19404_VALUE             SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.5)
#define MOD_MG4_SINGLECTRLMIXER19404_TYPE              SIGMASTUDIOTYPE_FIXPOINT

/* Module gain1 - Single SW slew vol (adjustable)*/
#define MOD_GAIN1_COUNT                                2
#define MOD_GAIN1_DEVICE                               "IC1"
#define MOD_GAIN1_ALG0_TARGET_ADDR                     42
#define MOD_GAIN1_ALG0_TARGET_FIXPT                    0x00800000
#define MOD_GAIN1_ALG0_TARGET_VALUE                    SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_GAIN1_ALG0_TARGET_TYPE                     SIGMASTUDIOTYPE_FIXPOINT
#define MOD_GAIN1_ALG0_STEP_ADDR                       43
#define MOD_GAIN1_ALG0_STEP_FIXPT                      0x00008000
#define MOD_GAIN1_ALG0_STEP_VALUE                      SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.00390625)
#define MOD_GAIN1_ALG0_STEP_TYPE                       SIGMASTUDIOTYPE_FIXPOINT

/* Module gain2 - Single SW slew vol (adjustable)*/
#define MOD_GAIN2_COUNT                                2
#define MOD_GAIN2_DEVICE                               "IC1"
#define MOD_GAIN2_ALG0_TARGET_ADDR                     44
#define MOD_GAIN2_ALG0_TARGET_FIXPT                    0x00800000
#define MOD_GAIN2_ALG0_TARGET_VALUE                    SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_GAIN2_ALG0_TARGET_TYPE                     SIGMASTUDIOTYPE_FIXPOINT
#define MOD_GAIN2_ALG0_STEP_ADDR                       45
#define MOD_GAIN2_ALG0_STEP_FIXPT                      0x00008000
#define MOD_GAIN2_ALG0_STEP_VALUE                      SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.00390625)
#define MOD_GAIN2_ALG0_STEP_TYPE                       SIGMASTUDIOTYPE_FIXPOINT

/* Module eq1 - Medium Size Eq*/
#define MOD_EQ1_COUNT                                  15
#define MOD_EQ1_DEVICE                                 "IC1"
#define MOD_EQ1_ALG0_STAGE0_B0_ADDR                    46
#define MOD_EQ1_ALG0_STAGE0_B0_FIXPT                   0x00800000
#define MOD_EQ1_ALG0_STAGE0_B0_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_EQ1_ALG0_STAGE0_B0_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ1_ALG0_STAGE0_B1_ADDR                    47
#define MOD_EQ1_ALG0_STAGE0_B1_FIXPT                   0xFF264598
#define MOD_EQ1_ALG0_STAGE0_B1_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-1.70100119556335)
#define MOD_EQ1_ALG0_STAGE0_B1_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ1_ALG0_STAGE0_B2_ADDR                    48
#define MOD_EQ1_ALG0_STAGE0_B2_FIXPT                   0x005EBF9B
#define MOD_EQ1_ALG0_STAGE0_B2_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.740222370963895)
#define MOD_EQ1_ALG0_STAGE0_B2_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ1_ALG0_STAGE0_A1_ADDR                    49
#define MOD_EQ1_ALG0_STAGE0_A1_FIXPT                   0x00D9BA68
#define MOD_EQ1_ALG0_STAGE0_A1_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1.70100119556335)
#define MOD_EQ1_ALG0_STAGE0_A1_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ1_ALG0_STAGE0_A2_ADDR                    50
#define MOD_EQ1_ALG0_STAGE0_A2_FIXPT                   0xFFA14065
#define MOD_EQ1_ALG0_STAGE0_A2_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-0.740222370963895)
#define MOD_EQ1_ALG0_STAGE0_A2_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ1_ALG0_STAGE1_B0_ADDR                    51
#define MOD_EQ1_ALG0_STAGE1_B0_FIXPT                   0x007FFAD2
#define MOD_EQ1_ALG0_STAGE1_B0_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.999841930418486)
#define MOD_EQ1_ALG0_STAGE1_B0_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ1_ALG0_STAGE1_B1_ADDR                    52
#define MOD_EQ1_ALG0_STAGE1_B1_FIXPT                   0xFF03BAD0
#define MOD_EQ1_ALG0_STAGE1_B1_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-1.97086149316823)
#define MOD_EQ1_ALG0_STAGE1_B1_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ1_ALG0_STAGE1_B2_ADDR                    53
#define MOD_EQ1_ALG0_STAGE1_B2_FIXPT                   0x007C7C32
#define MOD_EQ1_ALG0_STAGE1_B2_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.972540197890118)
#define MOD_EQ1_ALG0_STAGE1_B2_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ1_ALG0_STAGE1_A1_ADDR                    54
#define MOD_EQ1_ALG0_STAGE1_A1_FIXPT                   0x00FC4530
#define MOD_EQ1_ALG0_STAGE1_A1_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1.97086149316823)
#define MOD_EQ1_ALG0_STAGE1_A1_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ1_ALG0_STAGE1_A2_ADDR                    55
#define MOD_EQ1_ALG0_STAGE1_A2_FIXPT                   0xFF8388FC
#define MOD_EQ1_ALG0_STAGE1_A2_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-0.972382128308604)
#define MOD_EQ1_ALG0_STAGE1_A2_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ1_ALG0_STAGE2_B0_ADDR                    56
#define MOD_EQ1_ALG0_STAGE2_B0_FIXPT                   0x00800000
#define MOD_EQ1_ALG0_STAGE2_B0_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_EQ1_ALG0_STAGE2_B0_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ1_ALG0_STAGE2_B1_ADDR                    57
#define MOD_EQ1_ALG0_STAGE2_B1_FIXPT                   0xFF012F4D
#define MOD_EQ1_ALG0_STAGE2_B1_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-1.99074405950505)
#define MOD_EQ1_ALG0_STAGE2_B1_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ1_ALG0_STAGE2_B2_ADDR                    58
#define MOD_EQ1_ALG0_STAGE2_B2_FIXPT                   0x007ED219
#define MOD_EQ1_ALG0_STAGE2_B2_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.990786698843211)
#define MOD_EQ1_ALG0_STAGE2_B2_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ1_ALG0_STAGE2_A1_ADDR                    59
#define MOD_EQ1_ALG0_STAGE2_A1_FIXPT                   0x00FED0B3
#define MOD_EQ1_ALG0_STAGE2_A1_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1.99074405950505)
#define MOD_EQ1_ALG0_STAGE2_A1_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ1_ALG0_STAGE2_A2_ADDR                    60
#define MOD_EQ1_ALG0_STAGE2_A2_FIXPT                   0xFF812DE7
#define MOD_EQ1_ALG0_STAGE2_A2_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-0.990786698843211)
#define MOD_EQ1_ALG0_STAGE2_A2_TYPE                    SIGMASTUDIOTYPE_FIXPOINT

/* Module eq2 - Medium Size Eq*/
#define MOD_EQ2_COUNT                                  15
#define MOD_EQ2_DEVICE                                 "IC1"
#define MOD_EQ2_ALG0_STAGE0_B0_ADDR                    61
#define MOD_EQ2_ALG0_STAGE0_B0_FIXPT                   0x00800000
#define MOD_EQ2_ALG0_STAGE0_B0_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_EQ2_ALG0_STAGE0_B0_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ2_ALG0_STAGE0_B1_ADDR                    62
#define MOD_EQ2_ALG0_STAGE0_B1_FIXPT                   0xFF264598
#define MOD_EQ2_ALG0_STAGE0_B1_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-1.70100119556335)
#define MOD_EQ2_ALG0_STAGE0_B1_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ2_ALG0_STAGE0_B2_ADDR                    63
#define MOD_EQ2_ALG0_STAGE0_B2_FIXPT                   0x005EBF9B
#define MOD_EQ2_ALG0_STAGE0_B2_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.740222370963895)
#define MOD_EQ2_ALG0_STAGE0_B2_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ2_ALG0_STAGE0_A1_ADDR                    64
#define MOD_EQ2_ALG0_STAGE0_A1_FIXPT                   0x00D9BA68
#define MOD_EQ2_ALG0_STAGE0_A1_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1.70100119556335)
#define MOD_EQ2_ALG0_STAGE0_A1_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ2_ALG0_STAGE0_A2_ADDR                    65
#define MOD_EQ2_ALG0_STAGE0_A2_FIXPT                   0xFFA14065
#define MOD_EQ2_ALG0_STAGE0_A2_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-0.740222370963895)
#define MOD_EQ2_ALG0_STAGE0_A2_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ2_ALG0_STAGE1_B0_ADDR                    66
#define MOD_EQ2_ALG0_STAGE1_B0_FIXPT                   0x00800000
#define MOD_EQ2_ALG0_STAGE1_B0_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_EQ2_ALG0_STAGE1_B0_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ2_ALG0_STAGE1_B1_ADDR                    67
#define MOD_EQ2_ALG0_STAGE1_B1_FIXPT                   0x00000000
#define MOD_EQ2_ALG0_STAGE1_B1_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_EQ2_ALG0_STAGE1_B1_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ2_ALG0_STAGE1_B2_ADDR                    68
#define MOD_EQ2_ALG0_STAGE1_B2_FIXPT                   0x00000000
#define MOD_EQ2_ALG0_STAGE1_B2_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_EQ2_ALG0_STAGE1_B2_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ2_ALG0_STAGE1_A1_ADDR                    69
#define MOD_EQ2_ALG0_STAGE1_A1_FIXPT                   0x00000000
#define MOD_EQ2_ALG0_STAGE1_A1_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_EQ2_ALG0_STAGE1_A1_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ2_ALG0_STAGE1_A2_ADDR                    70
#define MOD_EQ2_ALG0_STAGE1_A2_FIXPT                   0x00000000
#define MOD_EQ2_ALG0_STAGE1_A2_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_EQ2_ALG0_STAGE1_A2_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ2_ALG0_STAGE2_B0_ADDR                    71
#define MOD_EQ2_ALG0_STAGE2_B0_FIXPT                   0x00800000
#define MOD_EQ2_ALG0_STAGE2_B0_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_EQ2_ALG0_STAGE2_B0_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ2_ALG0_STAGE2_B1_ADDR                    72
#define MOD_EQ2_ALG0_STAGE2_B1_FIXPT                   0xFF012F4D
#define MOD_EQ2_ALG0_STAGE2_B1_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-1.99074405950505)
#define MOD_EQ2_ALG0_STAGE2_B1_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ2_ALG0_STAGE2_B2_ADDR                    73
#define MOD_EQ2_ALG0_STAGE2_B2_FIXPT                   0x007ED219
#define MOD_EQ2_ALG0_STAGE2_B2_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.990786698843211)
#define MOD_EQ2_ALG0_STAGE2_B2_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ2_ALG0_STAGE2_A1_ADDR                    74
#define MOD_EQ2_ALG0_STAGE2_A1_FIXPT                   0x00FED0B3
#define MOD_EQ2_ALG0_STAGE2_A1_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1.99074405950505)
#define MOD_EQ2_ALG0_STAGE2_A1_TYPE                    SIGMASTUDIOTYPE_FIXPOINT
#define MOD_EQ2_ALG0_STAGE2_A2_ADDR                    75
#define MOD_EQ2_ALG0_STAGE2_A2_FIXPT                   0xFF812DE7
#define MOD_EQ2_ALG0_STAGE2_A2_VALUE                   SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-0.990786698843211)
#define MOD_EQ2_ALG0_STAGE2_A2_TYPE                    SIGMASTUDIOTYPE_FIXPOINT

#endif
