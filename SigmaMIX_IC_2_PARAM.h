/*
 * File:           C:\Users\shun\SimplicityStudio\v4_workspace\SigmaMIX\SigmaMIX_IC_2_PARAM.h
 *
 * Created:        Monday, July 31, 2017 3:20:12 PM
 * Description:    SigmaMIX_2:IC 2 parameter RAM definitions.
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
#ifndef __SIGMAMIX_IC_2_PARAM_H__
#define __SIGMAMIX_IC_2_PARAM_H__


/* Module DC1 - DC Input Entry*/
#define MOD_DC1_COUNT                                  1
#define MOD_DC1_DEVICE                                 "IC2"
#define MOD_DC1_DCINPALG1_ADDR                         0
#define MOD_DC1_DCINPALG1_FIXPT                        0x00400000
#define MOD_DC1_DCINPALG1_VALUE                        SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.5)
#define MOD_DC1_DCINPALG1_TYPE                         SIGMASTUDIOTYPE_FIXPOINT

/* Module DC2 - DC Input Entry*/
#define MOD_DC2_COUNT                                  1
#define MOD_DC2_DEVICE                                 "IC2"
#define MOD_DC2_DCINPALG2_ADDR                         1
#define MOD_DC2_DCINPALG2_FIXPT                        0x00400000
#define MOD_DC2_DCINPALG2_VALUE                        SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.5)
#define MOD_DC2_DCINPALG2_TYPE                         SIGMASTUDIOTYPE_FIXPOINT

/* Module DC3 - DC Input Entry*/
#define MOD_DC3_COUNT                                  1
#define MOD_DC3_DEVICE                                 "IC2"
#define MOD_DC3_DCINPALG3_ADDR                         2
#define MOD_DC3_DCINPALG3_FIXPT                        0x00800000
#define MOD_DC3_DCINPALG3_VALUE                        SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_DC3_DCINPALG3_TYPE                         SIGMASTUDIOTYPE_FIXPOINT

/* Module DC4 - DC Input Entry*/
#define MOD_DC4_COUNT                                  1
#define MOD_DC4_DEVICE                                 "IC2"
#define MOD_DC4_DCINPALG4_ADDR                         3
#define MOD_DC4_DCINPALG4_FIXPT                        0x00800000
#define MOD_DC4_DCINPALG4_VALUE                        SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_DC4_DCINPALG4_TYPE                         SIGMASTUDIOTYPE_FIXPOINT

/* Module if1 - DC Input Entry*/
#define MOD_IF1_COUNT                                  1
#define MOD_IF1_DEVICE                                 "IC2"
#define MOD_IF1_DCINPALG5_ADDR                         4
#define MOD_IF1_DCINPALG5_FIXPT                        0x00800000
#define MOD_IF1_DCINPALG5_VALUE                        SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_IF1_DCINPALG5_TYPE                         SIGMASTUDIOTYPE_FIXPOINT

/* Module if2 - DC Input Entry*/
#define MOD_IF2_COUNT                                  1
#define MOD_IF2_DEVICE                                 "IC2"
#define MOD_IF2_DCINPALG6_ADDR                         5
#define MOD_IF2_DCINPALG6_FIXPT                        0x00800000
#define MOD_IF2_DCINPALG6_VALUE                        SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_IF2_DCINPALG6_TYPE                         SIGMASTUDIOTYPE_FIXPOINT

/* Module SW vol 3 - Single slew ext vol*/
#define MOD_SWVOL3_COUNT                               1
#define MOD_SWVOL3_DEVICE                              "IC2"
#define MOD_SWVOL3_EXTSWGAINDB5STEP_ADDR               6
#define MOD_SWVOL3_EXTSWGAINDB5STEP_FIXPT              0x00004000
#define MOD_SWVOL3_EXTSWGAINDB5STEP_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.001953125)
#define MOD_SWVOL3_EXTSWGAINDB5STEP_TYPE               SIGMASTUDIOTYPE_FIXPOINT

/* Module SW vol 4 - Single slew ext vol*/
#define MOD_SWVOL4_COUNT                               1
#define MOD_SWVOL4_DEVICE                              "IC2"
#define MOD_SWVOL4_EXTSWGAINDB6STEP_ADDR               7
#define MOD_SWVOL4_EXTSWGAINDB6STEP_FIXPT              0x00004000
#define MOD_SWVOL4_EXTSWGAINDB6STEP_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.001953125)
#define MOD_SWVOL4_EXTSWGAINDB6STEP_TYPE               SIGMASTUDIOTYPE_FIXPOINT

/* Module ch sel sw - Stereo Switch Nx2*/
#define MOD_CHSELSW_COUNT                              1
#define MOD_CHSELSW_DEVICE                             "IC2"
#define MOD_CHSELSW_STEREOSWSLEW_ADDR                  8
#define MOD_CHSELSW_STEREOSWSLEW_FIXPT                 0x00000000
#define MOD_CHSELSW_STEREOSWSLEW_VALUE                 SIGMASTUDIOTYPE_INTEGER_CONVERT(0)
#define MOD_CHSELSW_STEREOSWSLEW_TYPE                  SIGMASTUDIOTYPE_INTEGER

/* Module SW vol 5 - Single slew ext vol*/
#define MOD_SWVOL5_COUNT                               1
#define MOD_SWVOL5_DEVICE                              "IC2"
#define MOD_SWVOL5_EXTSWGAINDB1STEP_ADDR               9
#define MOD_SWVOL5_EXTSWGAINDB1STEP_FIXPT              0x00004000
#define MOD_SWVOL5_EXTSWGAINDB1STEP_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.001953125)
#define MOD_SWVOL5_EXTSWGAINDB1STEP_TYPE               SIGMASTUDIOTYPE_FIXPOINT

/* Module fxSnd1 - Stereo Switch 2xN*/
#define MOD_FXSND1_COUNT                               3
#define MOD_FXSND1_DEVICE                              "IC2"
#define MOD_FXSND1_ALG0_STEREODEMUXSLEW10_ADDR         10
#define MOD_FXSND1_ALG0_STEREODEMUXSLEW10_FIXPT        0x00800000
#define MOD_FXSND1_ALG0_STEREODEMUXSLEW10_VALUE        SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_FXSND1_ALG0_STEREODEMUXSLEW10_TYPE         SIGMASTUDIOTYPE_FIXPOINT
#define MOD_FXSND1_ALG0_STEREODEMUXSLEW11_ADDR         11
#define MOD_FXSND1_ALG0_STEREODEMUXSLEW11_FIXPT        0x00000000
#define MOD_FXSND1_ALG0_STEREODEMUXSLEW11_VALUE        SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_FXSND1_ALG0_STEREODEMUXSLEW11_TYPE         SIGMASTUDIOTYPE_FIXPOINT
#define MOD_FXSND1_ALG0_STEREODEMUXSLEW12_ADDR         12
#define MOD_FXSND1_ALG0_STEREODEMUXSLEW12_FIXPT        0x00000000
#define MOD_FXSND1_ALG0_STEREODEMUXSLEW12_VALUE        SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_FXSND1_ALG0_STEREODEMUXSLEW12_TYPE         SIGMASTUDIOTYPE_FIXPOINT

/* Module fxSnd2 - Stereo Switch 2xN*/
#define MOD_FXSND2_COUNT                               3
#define MOD_FXSND2_DEVICE                              "IC2"
#define MOD_FXSND2_ALG0_STEREODEMUXSLEW20_ADDR         13
#define MOD_FXSND2_ALG0_STEREODEMUXSLEW20_FIXPT        0x00800000
#define MOD_FXSND2_ALG0_STEREODEMUXSLEW20_VALUE        SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_FXSND2_ALG0_STEREODEMUXSLEW20_TYPE         SIGMASTUDIOTYPE_FIXPOINT
#define MOD_FXSND2_ALG0_STEREODEMUXSLEW21_ADDR         14
#define MOD_FXSND2_ALG0_STEREODEMUXSLEW21_FIXPT        0x00000000
#define MOD_FXSND2_ALG0_STEREODEMUXSLEW21_VALUE        SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_FXSND2_ALG0_STEREODEMUXSLEW21_TYPE         SIGMASTUDIOTYPE_FIXPOINT
#define MOD_FXSND2_ALG0_STEREODEMUXSLEW22_ADDR         15
#define MOD_FXSND2_ALG0_STEREODEMUXSLEW22_FIXPT        0x00000000
#define MOD_FXSND2_ALG0_STEREODEMUXSLEW22_VALUE        SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0)
#define MOD_FXSND2_ALG0_STEREODEMUXSLEW22_TYPE         SIGMASTUDIOTYPE_FIXPOINT

/* Module PitchTransL2 - Pitch Transposer*/
#define MOD_PITCHTRANSL2_COUNT                         4
#define MOD_PITCHTRANSL2_DEVICE                        "IC2"
#define MOD_PITCHTRANSL2_ALG0_PITCHSHIFTSALG2MASK_ADDR 16
#define MOD_PITCHTRANSL2_ALG0_PITCHSHIFTSALG2MASK_FIXPT 0x000000FF
#define MOD_PITCHTRANSL2_ALG0_PITCHSHIFTSALG2MASK_VALUE SIGMASTUDIOTYPE_INTEGER_CONVERT(255)
#define MOD_PITCHTRANSL2_ALG0_PITCHSHIFTSALG2MASK_TYPE SIGMASTUDIOTYPE_INTEGER
#define MOD_PITCHTRANSL2_ALG0_PITCHSHIFTSALG2FREQ_ADDR 17
#define MOD_PITCHTRANSL2_ALG0_PITCHSHIFTSALG2FREQ_FIXPT 0x0000009D
#define MOD_PITCHTRANSL2_ALG0_PITCHSHIFTSALG2FREQ_VALUE SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1.875E-05)
#define MOD_PITCHTRANSL2_ALG0_PITCHSHIFTSALG2FREQ_TYPE SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PITCHTRANSL2_ALG0_PITCHSHIFTSALG2SCALINGFACTOR_ADDR 18
#define MOD_PITCHTRANSL2_ALG0_PITCHSHIFTSALG2SCALINGFACTOR_FIXPT 0x00000168
#define MOD_PITCHTRANSL2_ALG0_PITCHSHIFTSALG2SCALINGFACTOR_VALUE SIGMASTUDIOTYPE_INTEGER_CONVERT(360)
#define MOD_PITCHTRANSL2_ALG0_PITCHSHIFTSALG2SCALINGFACTOR_TYPE SIGMASTUDIOTYPE_INTEGER
#define MOD_PITCHTRANSL2_ALG0_PITCHSHIFTSALG2LIMIT1BUFFERSIZE_ADDR 19
#define MOD_PITCHTRANSL2_ALG0_PITCHSHIFTSALG2LIMIT1BUFFERSIZE_FIXPT 0x000002D0
#define MOD_PITCHTRANSL2_ALG0_PITCHSHIFTSALG2LIMIT1BUFFERSIZE_VALUE SIGMASTUDIOTYPE_INTEGER_CONVERT(720)
#define MOD_PITCHTRANSL2_ALG0_PITCHSHIFTSALG2LIMIT1BUFFERSIZE_TYPE SIGMASTUDIOTYPE_INTEGER

/* Module PitchTransL1 - Pitch Transposer*/
#define MOD_PITCHTRANSL1_COUNT                         4
#define MOD_PITCHTRANSL1_DEVICE                        "IC2"
#define MOD_PITCHTRANSL1_ALG0_PITCHSHIFTSALG1MASK_ADDR 20
#define MOD_PITCHTRANSL1_ALG0_PITCHSHIFTSALG1MASK_FIXPT 0x000000FF
#define MOD_PITCHTRANSL1_ALG0_PITCHSHIFTSALG1MASK_VALUE SIGMASTUDIOTYPE_INTEGER_CONVERT(255)
#define MOD_PITCHTRANSL1_ALG0_PITCHSHIFTSALG1MASK_TYPE SIGMASTUDIOTYPE_INTEGER
#define MOD_PITCHTRANSL1_ALG0_PITCHSHIFTSALG1FREQ_ADDR 21
#define MOD_PITCHTRANSL1_ALG0_PITCHSHIFTSALG1FREQ_FIXPT 0x0000009D
#define MOD_PITCHTRANSL1_ALG0_PITCHSHIFTSALG1FREQ_VALUE SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1.875E-05)
#define MOD_PITCHTRANSL1_ALG0_PITCHSHIFTSALG1FREQ_TYPE SIGMASTUDIOTYPE_FIXPOINT
#define MOD_PITCHTRANSL1_ALG0_PITCHSHIFTSALG1SCALINGFACTOR_ADDR 22
#define MOD_PITCHTRANSL1_ALG0_PITCHSHIFTSALG1SCALINGFACTOR_FIXPT 0x00000168
#define MOD_PITCHTRANSL1_ALG0_PITCHSHIFTSALG1SCALINGFACTOR_VALUE SIGMASTUDIOTYPE_INTEGER_CONVERT(360)
#define MOD_PITCHTRANSL1_ALG0_PITCHSHIFTSALG1SCALINGFACTOR_TYPE SIGMASTUDIOTYPE_INTEGER
#define MOD_PITCHTRANSL1_ALG0_PITCHSHIFTSALG1LIMIT1BUFFERSIZE_ADDR 23
#define MOD_PITCHTRANSL1_ALG0_PITCHSHIFTSALG1LIMIT1BUFFERSIZE_FIXPT 0x000002D0
#define MOD_PITCHTRANSL1_ALG0_PITCHSHIFTSALG1LIMIT1BUFFERSIZE_VALUE SIGMASTUDIOTYPE_INTEGER_CONVERT(720)
#define MOD_PITCHTRANSL1_ALG0_PITCHSHIFTSALG1LIMIT1BUFFERSIZE_TYPE SIGMASTUDIOTYPE_INTEGER

/* Module lpf1 - General (2nd order)*/
#define MOD_LPF1_COUNT                                 5
#define MOD_LPF1_DEVICE                                "IC2"
#define MOD_LPF1_ALG0_STAGE0_B0_ADDR                   24
#define MOD_LPF1_ALG0_STAGE0_B0_FIXPT                  0x000CFA7E
#define MOD_LPF1_ALG0_STAGE0_B0_VALUE                  SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.101394423168704)
#define MOD_LPF1_ALG0_STAGE0_B0_TYPE                   SIGMASTUDIOTYPE_FIXPOINT
#define MOD_LPF1_ALG0_STAGE0_B1_ADDR                   25
#define MOD_LPF1_ALG0_STAGE0_B1_FIXPT                  0x0019F4FC
#define MOD_LPF1_ALG0_STAGE0_B1_VALUE                  SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.202788846337409)
#define MOD_LPF1_ALG0_STAGE0_B1_TYPE                   SIGMASTUDIOTYPE_FIXPOINT
#define MOD_LPF1_ALG0_STAGE0_B2_ADDR                   26
#define MOD_LPF1_ALG0_STAGE0_B2_FIXPT                  0x000CFA7E
#define MOD_LPF1_ALG0_STAGE0_B2_VALUE                  SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.101394423168704)
#define MOD_LPF1_ALG0_STAGE0_B2_TYPE                   SIGMASTUDIOTYPE_FIXPOINT
#define MOD_LPF1_ALG0_STAGE0_A1_ADDR                   27
#define MOD_LPF1_ALG0_STAGE0_A1_FIXPT                  0x00C74E8F
#define MOD_LPF1_ALG0_STAGE0_A1_VALUE                  SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1.55708501499447)
#define MOD_LPF1_ALG0_STAGE0_A1_TYPE                   SIGMASTUDIOTYPE_FIXPOINT
#define MOD_LPF1_ALG0_STAGE0_A2_ADDR                   28
#define MOD_LPF1_ALG0_STAGE0_A2_FIXPT                  0xFF84C778
#define MOD_LPF1_ALG0_STAGE0_A2_VALUE                  SIGMASTUDIOTYPE_FIXPOINT_CONVERT(-0.962662707669285)
#define MOD_LPF1_ALG0_STAGE0_A2_TYPE                   SIGMASTUDIOTYPE_FIXPOINT

/* Module fxRtn1 - Stereo Switch Nx2*/
#define MOD_FXRTN1_COUNT                               1
#define MOD_FXRTN1_DEVICE                              "IC2"
#define MOD_FXRTN1_STEREOSWSLEW_ADDR                   29
#define MOD_FXRTN1_STEREOSWSLEW_FIXPT                  0x00000000
#define MOD_FXRTN1_STEREOSWSLEW_VALUE                  SIGMASTUDIOTYPE_INTEGER_CONVERT(0)
#define MOD_FXRTN1_STEREOSWSLEW_TYPE                   SIGMASTUDIOTYPE_INTEGER

/* Module fxRtn2 - Stereo Switch Nx2*/
#define MOD_FXRTN2_COUNT                               1
#define MOD_FXRTN2_DEVICE                              "IC2"
#define MOD_FXRTN2_STEREOSWSLEW_ADDR                   30
#define MOD_FXRTN2_STEREOSWSLEW_FIXPT                  0x00000000
#define MOD_FXRTN2_STEREOSWSLEW_VALUE                  SIGMASTUDIOTYPE_INTEGER_CONVERT(0)
#define MOD_FXRTN2_STEREOSWSLEW_TYPE                   SIGMASTUDIOTYPE_INTEGER

/* Module SW vol 1 - Single slew ext vol*/
#define MOD_SWVOL1_COUNT                               1
#define MOD_SWVOL1_DEVICE                              "IC2"
#define MOD_SWVOL1_EXTSWGAINDB2STEP_ADDR               31
#define MOD_SWVOL1_EXTSWGAINDB2STEP_FIXPT              0x00004000
#define MOD_SWVOL1_EXTSWGAINDB2STEP_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.001953125)
#define MOD_SWVOL1_EXTSWGAINDB2STEP_TYPE               SIGMASTUDIOTYPE_FIXPOINT

/* Module SW vol 2 - Single slew ext vol*/
#define MOD_SWVOL2_COUNT                               1
#define MOD_SWVOL2_DEVICE                              "IC2"
#define MOD_SWVOL2_EXTSWGAINDB3STEP_ADDR               32
#define MOD_SWVOL2_EXTSWGAINDB3STEP_FIXPT              0x00004000
#define MOD_SWVOL2_EXTSWGAINDB3STEP_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.001953125)
#define MOD_SWVOL2_EXTSWGAINDB3STEP_TYPE               SIGMASTUDIOTYPE_FIXPOINT

/* Module SW vol 6 - Single slew ext vol*/
#define MOD_SWVOL6_COUNT                               1
#define MOD_SWVOL6_DEVICE                              "IC2"
#define MOD_SWVOL6_EXTSWGAINDB4STEP_ADDR               33
#define MOD_SWVOL6_EXTSWGAINDB4STEP_FIXPT              0x00004000
#define MOD_SWVOL6_EXTSWGAINDB4STEP_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.001953125)
#define MOD_SWVOL6_EXTSWGAINDB4STEP_TYPE               SIGMASTUDIOTYPE_FIXPOINT

/* Module master gain - Single SW slew vol (adjustable)*/
#define MOD_MASTERGAIN_COUNT                           2
#define MOD_MASTERGAIN_DEVICE                          "IC2"
#define MOD_MASTERGAIN_ALG0_TARGET_ADDR                34
#define MOD_MASTERGAIN_ALG0_TARGET_FIXPT               0x00800000
#define MOD_MASTERGAIN_ALG0_TARGET_VALUE               SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_MASTERGAIN_ALG0_TARGET_TYPE                SIGMASTUDIOTYPE_FIXPOINT
#define MOD_MASTERGAIN_ALG0_STEP_ADDR                  35
#define MOD_MASTERGAIN_ALG0_STEP_FIXPT                 0x00008000
#define MOD_MASTERGAIN_ALG0_STEP_VALUE                 SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.00390625)
#define MOD_MASTERGAIN_ALG0_STEP_TYPE                  SIGMASTUDIOTYPE_FIXPOINT

/* Module monitor gain - Single SW slew vol (adjustable)*/
#define MOD_MONITORGAIN_COUNT                          2
#define MOD_MONITORGAIN_DEVICE                         "IC2"
#define MOD_MONITORGAIN_ALG0_TARGET_ADDR               36
#define MOD_MONITORGAIN_ALG0_TARGET_FIXPT              0x00800000
#define MOD_MONITORGAIN_ALG0_TARGET_VALUE              SIGMASTUDIOTYPE_FIXPOINT_CONVERT(1)
#define MOD_MONITORGAIN_ALG0_TARGET_TYPE               SIGMASTUDIOTYPE_FIXPOINT
#define MOD_MONITORGAIN_ALG0_STEP_ADDR                 37
#define MOD_MONITORGAIN_ALG0_STEP_FIXPT                0x00008000
#define MOD_MONITORGAIN_ALG0_STEP_VALUE                SIGMASTUDIOTYPE_FIXPOINT_CONVERT(0.00390625)
#define MOD_MONITORGAIN_ALG0_STEP_TYPE                 SIGMASTUDIOTYPE_FIXPOINT

#endif
