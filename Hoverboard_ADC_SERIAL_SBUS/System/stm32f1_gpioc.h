// Header..: GPIOC.H
// Version.: 1.0
// Compiler: GCC-ARM
// Chip....: STM32F10x
// Date....: January 2025
// Author..: Udo Juerss
//-----------------------------------------------------------------------------

#pragma once
//-----------------------------------------------------------------------------

// GPIOC analog inputs
#define GPIOC_0_IN_AN() {GPIOC->CRL &= GPIO_MSK_CLR_0; GPIOC->CRL |= GPIO_MSK_AN_0;}
#define GPIOC_1_IN_AN() {GPIOC->CRL &= GPIO_MSK_CLR_1; GPIOC->CRL |= GPIO_MSK_AN_1;}
#define GPIOC_2_IN_AN() {GPIOC->CRL &= GPIO_MSK_CLR_2; GPIOC->CRL |= GPIO_MSK_AN_2;}
#define GPIOC_3_IN_AN() {GPIOC->CRL &= GPIO_MSK_CLR_3; GPIOC->CRL |= GPIO_MSK_AN_3;}
#define GPIOC_4_IN_AN() {GPIOC->CRL &= GPIO_MSK_CLR_4; GPIOC->CRL |= GPIO_MSK_AN_4;}
#define GPIOC_5_IN_AN() {GPIOC->CRL &= GPIO_MSK_CLR_5; GPIOC->CRL |= GPIO_MSK_AN_5;}
#define GPIOC_6_IN_AN() {GPIOC->CRL &= GPIO_MSK_CLR_6; GPIOC->CRL |= GPIO_MSK_AN_6;}
#define GPIOC_7_IN_AN() {GPIOC->CRL &= GPIO_MSK_CLR_7; GPIOC->CRL |= GPIO_MSK_AN_7;}
#define GPIOC_8_IN_AN() {GPIOC->CRH &= GPIO_MSK_CLR_0; GPIOC->CRH |= GPIO_MSK_AN_0;}
#define GPIOC_9_IN_AN() {GPIOC->CRH &= GPIO_MSK_CLR_1; GPIOC->CRH |= GPIO_MSK_AN_1;}
#define GPIOC_10_IN_AN() {GPIOC->CRH &= GPIO_MSK_CLR_2; GPIOC->CRH |= GPIO_MSK_AN_2;}
#define GPIOC_11_IN_AN() {GPIOC->CRH &= GPIO_MSK_CLR_3; GPIOC->CRH |= GPIO_MSK_AN_3;}
#define GPIOC_12_IN_AN() {GPIOC->CRH &= GPIO_MSK_CLR_4; GPIOC->CRH |= GPIO_MSK_AN_4;}
#define GPIOC_13_IN_AN() {GPIOC->CRH &= GPIO_MSK_CLR_5; GPIOC->CRH |= GPIO_MSK_AN_5;}
#define GPIOC_14_IN_AN() {GPIOC->CRH &= GPIO_MSK_CLR_6; GPIOC->CRH |= GPIO_MSK_AN_6;}
#define GPIOC_15_IN_AN() {GPIOC->CRH &= GPIO_MSK_CLR_7; GPIOC->CRH |= GPIO_MSK_AN_7;}

// GPIOC floating inputs
#define GPIOC_0_IN_FLT() {GPIOC->CRL &= GPIO_MSK_CLR_0; GPIOC->CRL |= GPIO_MSK_FLT_0;}
#define GPIOC_1_IN_FLT() {GPIOC->CRL &= GPIO_MSK_CLR_1; GPIOC->CRL |= GPIO_MSK_FLT_1;}
#define GPIOC_2_IN_FLT() {GPIOC->CRL &= GPIO_MSK_CLR_2; GPIOC->CRL |= GPIO_MSK_FLT_2;}
#define GPIOC_3_IN_FLT() {GPIOC->CRL &= GPIO_MSK_CLR_3; GPIOC->CRL |= GPIO_MSK_FLT_3;}
#define GPIOC_4_IN_FLT() {GPIOC->CRL &= GPIO_MSK_CLR_4; GPIOC->CRL |= GPIO_MSK_FLT_4;}
#define GPIOC_5_IN_FLT() {GPIOC->CRL &= GPIO_MSK_CLR_5; GPIOC->CRL |= GPIO_MSK_FLT_5;}
#define GPIOC_6_IN_FLT() {GPIOC->CRL &= GPIO_MSK_CLR_6; GPIOC->CRL |= GPIO_MSK_FLT_6;}
#define GPIOC_7_IN_FLT() {GPIOC->CRL &= GPIO_MSK_CLR_7; GPIOC->CRL |= GPIO_MSK_FLT_7;}
#define GPIOC_8_IN_FLT() {GPIOC->CRH &= GPIO_MSK_CLR_0; GPIOC->CRH |= GPIO_MSK_FLT_0;}
#define GPIOC_9_IN_FLT() {GPIOC->CRH &= GPIO_MSK_CLR_1; GPIOC->CRH |= GPIO_MSK_FLT_1;}
#define GPIOC_10_IN_FLT() {GPIOC->CRH &= GPIO_MSK_CLR_2; GPIOC->CRH |= GPIO_MSK_FLT_2;}
#define GPIOC_11_IN_FLT() {GPIOC->CRH &= GPIO_MSK_CLR_3; GPIOC->CRH |= GPIO_MSK_FLT_3;}
#define GPIOC_12_IN_FLT() {GPIOC->CRH &= GPIO_MSK_CLR_4; GPIOC->CRH |= GPIO_MSK_FLT_4;}
#define GPIOC_13_IN_FLT() {GPIOC->CRH &= GPIO_MSK_CLR_5; GPIOC->CRH |= GPIO_MSK_FLT_5;}
#define GPIOC_14_IN_FLT() {GPIOC->CRH &= GPIO_MSK_CLR_6; GPIOC->CRH |= GPIO_MSK_FLT_6;}
#define GPIOC_15_IN_FLT() {GPIOC->CRH &= GPIO_MSK_CLR_7; GPIOC->CRH |= GPIO_MSK_FLT_7;}

// GPIOC inputs with pullup enabled
#define GPIOC_0_IN_PU() {GPIOC->CRL &= GPIO_MSK_CLR_0; GPIOC->CRL |= GPIO_MSK_PUD_0; GPIOC_0_SET();}
#define GPIOC_1_IN_PU() {GPIOC->CRL &= GPIO_MSK_CLR_1; GPIOC->CRL |= GPIO_MSK_PUD_1; GPIOC_1_SET();}
#define GPIOC_2_IN_PU() {GPIOC->CRL &= GPIO_MSK_CLR_2; GPIOC->CRL |= GPIO_MSK_PUD_2; GPIOC_2_SET();}
#define GPIOC_3_IN_PU() {GPIOC->CRL &= GPIO_MSK_CLR_3; GPIOC->CRL |= GPIO_MSK_PUD_3; GPIOC_3_SET();}
#define GPIOC_4_IN_PU() {GPIOC->CRL &= GPIO_MSK_CLR_4; GPIOC->CRL |= GPIO_MSK_PUD_4; GPIOC_4_SET();}
#define GPIOC_5_IN_PU() {GPIOC->CRL &= GPIO_MSK_CLR_5; GPIOC->CRL |= GPIO_MSK_PUD_5; GPIOC_5_SET();}
#define GPIOC_6_IN_PU() {GPIOC->CRL &= GPIO_MSK_CLR_6; GPIOC->CRL |= GPIO_MSK_PUD_6; GPIOC_6_SET();}
#define GPIOC_7_IN_PU() {GPIOC->CRL &= GPIO_MSK_CLR_7; GPIOC->CRL |= GPIO_MSK_PUD_7; GPIOC_7_SET();}
#define GPIOC_8_IN_PU() {GPIOC->CRH &= GPIO_MSK_CLR_0; GPIOC->CRH |= GPIO_MSK_PUD_0; GPIOC_8_SET();}
#define GPIOC_9_IN_PU() {GPIOC->CRH &= GPIO_MSK_CLR_1; GPIOC->CRH |= GPIO_MSK_PUD_1; GPIOC_9_SET();}
#define GPIOC_10_IN_PU() {GPIOC->CRH &= GPIO_MSK_CLR_2; GPIOC->CRH |= GPIO_MSK_PUD_2; GPIOC_10_SET();}
#define GPIOC_11_IN_PU() {GPIOC->CRH &= GPIO_MSK_CLR_3; GPIOC->CRH |= GPIO_MSK_PUD_3; GPIOC_11_SET();}
#define GPIOC_12_IN_PU() {GPIOC->CRH &= GPIO_MSK_CLR_4; GPIOC->CRH |= GPIO_MSK_PUD_4; GPIOC_12_SET();}
#define GPIOC_13_IN_PU() {GPIOC->CRH &= GPIO_MSK_CLR_5; GPIOC->CRH |= GPIO_MSK_PUD_5; GPIOC_13_SET();}
#define GPIOC_14_IN_PU() {GPIOC->CRH &= GPIO_MSK_CLR_6; GPIOC->CRH |= GPIO_MSK_PUD_6; GPIOC_14_SET();}
#define GPIOC_15_IN_PU() {GPIOC->CRH &= GPIO_MSK_CLR_7; GPIOC->CRH |= GPIO_MSK_PUD_7; GPIOC_15_SET();}

// GPIOC inputs with pulldown enabled
#define GPIOC_0_IN_PD() {GPIOC->CRL &= GPIO_MSK_CLR_0; GPIOC->CRL |= GPIO_MSK_PUD_0; GPIOC_0_CLR();}
#define GPIOC_1_IN_PD() {GPIOC->CRL &= GPIO_MSK_CLR_1; GPIOC->CRL |= GPIO_MSK_PUD_1; GPIOC_1_CLR();}
#define GPIOC_2_IN_PD() {GPIOC->CRL &= GPIO_MSK_CLR_2; GPIOC->CRL |= GPIO_MSK_PUD_2; GPIOC_2_CLR();}
#define GPIOC_3_IN_PD() {GPIOC->CRL &= GPIO_MSK_CLR_3; GPIOC->CRL |= GPIO_MSK_PUD_3; GPIOC_3_CLR();}
#define GPIOC_4_IN_PD() {GPIOC->CRL &= GPIO_MSK_CLR_4; GPIOC->CRL |= GPIO_MSK_PUD_4; GPIOC_4_CLR();}
#define GPIOC_5_IN_PD() {GPIOC->CRL &= GPIO_MSK_CLR_5; GPIOC->CRL |= GPIO_MSK_PUD_5; GPIOC_5_CLR();}
#define GPIOC_6_IN_PD() {GPIOC->CRL &= GPIO_MSK_CLR_6; GPIOC->CRL |= GPIO_MSK_PUD_6; GPIOC_6_CLR();}
#define GPIOC_7_IN_PD() {GPIOC->CRL &= GPIO_MSK_CLR_7; GPIOC->CRL |= GPIO_MSK_PUD_7; GPIOC_7_CLR();}
#define GPIOC_8_IN_PD() {GPIOC->CRH &= GPIO_MSK_CLR_0; GPIOC->CRH |= GPIO_MSK_PUD_0; GPIOC_8_CLR();}
#define GPIOC_9_IN_PD() {GPIOC->CRH &= GPIO_MSK_CLR_1; GPIOC->CRH |= GPIO_MSK_PUD_1; GPIOC_9_CLR();}
#define GPIOC_10_IN_PD() {GPIOC->CRH &= GPIO_MSK_CLR_2; GPIOC->CRH |= GPIO_MSK_PUD_2; GPIOC_10_CLR();}
#define GPIOC_11_IN_PD() {GPIOC->CRH &= GPIO_MSK_CLR_3; GPIOC->CRH |= GPIO_MSK_PUD_3; GPIOC_11_CLR();}
#define GPIOC_12_IN_PD() {GPIOC->CRH &= GPIO_MSK_CLR_4; GPIOC->CRH |= GPIO_MSK_PUD_4; GPIOC_12_CLR();}
#define GPIOC_13_IN_PD() {GPIOC->CRH &= GPIO_MSK_CLR_5; GPIOC->CRH |= GPIO_MSK_PUD_5; GPIOC_13_CLR();}
#define GPIOC_14_IN_PD() {GPIOC->CRH &= GPIO_MSK_CLR_6; GPIOC->CRH |= GPIO_MSK_PUD_6; GPIOC_14_CLR();}
#define GPIOC_15_IN_PD() {GPIOC->CRH &= GPIO_MSK_CLR_7; GPIOC->CRH |= GPIO_MSK_PUD_7; GPIOC_15_CLR();}

// GPIOC push/pull outputs 2M/10M/50M
#define GPIOC_0_OUT_PP_2M() {GPIOC->CRL &= GPIO_MSK_CLR_0; GPIOC->CRL |= GPIO_MSK_PP_0_2M;}
#define GPIOC_0_OUT_PP_10M() {GPIOC->CRL &= GPIO_MSK_CLR_0; GPIOC->CRL |= GPIO_MSK_PP_0_10M;}
#define GPIOC_0_OUT_PP_50M() {GPIOC->CRL &= GPIO_MSK_CLR_0; GPIOC->CRL |= GPIO_MSK_PP_0_50M;}

#define GPIOC_1_OUT_PP_2M() {GPIOC->CRL &= GPIO_MSK_CLR_1; GPIOC->CRL |= GPIO_MSK_PP_1_2M;}
#define GPIOC_1_OUT_PP_10M() {GPIOC->CRL &= GPIO_MSK_CLR_1; GPIOC->CRL |= GPIO_MSK_PP_1_10M;}
#define GPIOC_1_OUT_PP_50M() {GPIOC->CRL &= GPIO_MSK_CLR_1; GPIOC->CRL |= GPIO_MSK_PP_1_50M;}

#define GPIOC_2_OUT_PP_2M() {GPIOC->CRL &= GPIO_MSK_CLR_2; GPIOC->CRL |= GPIO_MSK_PP_2_2M;}
#define GPIOC_2_OUT_PP_10M() {GPIOC->CRL &= GPIO_MSK_CLR_2; GPIOC->CRL |= GPIO_MSK_PP_2_10M;}
#define GPIOC_2_OUT_PP_50M() {GPIOC->CRL &= GPIO_MSK_CLR_2; GPIOC->CRL |= GPIO_MSK_PP_2_50M;}

#define GPIOC_3_OUT_PP_2M() {GPIOC->CRL &= GPIO_MSK_CLR_3; GPIOC->CRL |= GPIO_MSK_PP_3_2M;}
#define GPIOC_3_OUT_PP_10M() {GPIOC->CRL &= GPIO_MSK_CLR_3; GPIOC->CRL |= GPIO_MSK_PP_3_10M;}
#define GPIOC_3_OUT_PP_50M() {GPIOC->CRL &= GPIO_MSK_CLR_3; GPIOC->CRL |= GPIO_MSK_PP_3_50M;}

#define GPIOC_4_OUT_PP_2M() {GPIOC->CRL &= GPIO_MSK_CLR_4; GPIOC->CRL |= GPIO_MSK_PP_4_2M;}
#define GPIOC_4_OUT_PP_10M() {GPIOC->CRL &= GPIO_MSK_CLR_4; GPIOC->CRL |= GPIO_MSK_PP_4_10M;}
#define GPIOC_4_OUT_PP_50M() {GPIOC->CRL &= GPIO_MSK_CLR_4; GPIOC->CRL |= GPIO_MSK_PP_4_50M;}

#define GPIOC_5_OUT_PP_2M() {GPIOC->CRL &= GPIO_MSK_CLR_5; GPIOC->CRL |= GPIO_MSK_PP_5_2M;}
#define GPIOC_5_OUT_PP_10M() {GPIOC->CRL &= GPIO_MSK_CLR_5; GPIOC->CRL |= GPIO_MSK_PP_5_10M;}
#define GPIOC_5_OUT_PP_50M() {GPIOC->CRL &= GPIO_MSK_CLR_5; GPIOC->CRL |= GPIO_MSK_PP_5_50M;}

#define GPIOC_6_OUT_PP_2M() {GPIOC->CRL &= GPIO_MSK_CLR_6; GPIOC->CRL |= GPIO_MSK_PP_6_2M;}
#define GPIOC_6_OUT_PP_10M() {GPIOC->CRL &= GPIO_MSK_CLR_6; GPIOC->CRL |= GPIO_MSK_PP_6_10M;}
#define GPIOC_6_OUT_PP_50M() {GPIOC->CRL &= GPIO_MSK_CLR_6; GPIOC->CRL |= GPIO_MSK_PP_6_50M;}

#define GPIOC_7_OUT_PP_2M() {GPIOC->CRL &= GPIO_MSK_CLR_7; GPIOC->CRL |= GPIO_MSK_PP_7_2M;}
#define GPIOC_7_OUT_PP_10M() {GPIOC->CRL &= GPIO_MSK_CLR_7; GPIOC->CRL |= GPIO_MSK_PP_7_10M;}
#define GPIOC_7_OUT_PP_50M() {GPIOC->CRL &= GPIO_MSK_CLR_7; GPIOC->CRL |= GPIO_MSK_PP_7_50M;}

#define GPIOC_8_OUT_PP_2M() {GPIOC->CRH &= GPIO_MSK_CLR_0; GPIOC->CRH |= GPIO_MSK_PP_0_2M;}
#define GPIOC_8_OUT_PP_10M() {GPIOC->CRH &= GPIO_MSK_CLR_0; GPIOC->CRH |= GPIO_MSK_PP_0_10M;}
#define GPIOC_8_OUT_PP_50M() {GPIOC->CRH &= GPIO_MSK_CLR_0; GPIOC->CRH |= GPIO_MSK_PP_0_50M;}

#define GPIOC_9_OUT_PP_2M() {GPIOC->CRH &= GPIO_MSK_CLR_1; GPIOC->CRH |= GPIO_MSK_PP_1_2M;}
#define GPIOC_9_OUT_PP_10M() {GPIOC->CRH &= GPIO_MSK_CLR_1; GPIOC->CRH |= GPIO_MSK_PP_1_10M;}
#define GPIOC_9_OUT_PP_50M() {GPIOC->CRH &= GPIO_MSK_CLR_1; GPIOC->CRH |= GPIO_MSK_PP_1_50M;}

#define GPIOC_10_OUT_PP_2M() {GPIOC->CRH &= GPIO_MSK_CLR_2; GPIOC->CRH |= GPIO_MSK_PP_2_2M;}
#define GPIOC_10_OUT_PP_10M() {GPIOC->CRH &= GPIO_MSK_CLR_2; GPIOC->CRH |= GPIO_MSK_PP_2_10M;}
#define GPIOC_10_OUT_PP_50M() {GPIOC->CRH &= GPIO_MSK_CLR_2; GPIOC->CRH |= GPIO_MSK_PP_2_50M;}

#define GPIOC_11_OUT_PP_2M() {GPIOC->CRH &= GPIO_MSK_CLR_3; GPIOC->CRH |= GPIO_MSK_PP_3_2M;}
#define GPIOC_11_OUT_PP_10M() {GPIOC->CRH &= GPIO_MSK_CLR_3; GPIOC->CRH |= GPIO_MSK_PP_3_10M;}
#define GPIOC_11_OUT_PP_50M() {GPIOC->CRH &= GPIO_MSK_CLR_3; GPIOC->CRH |= GPIO_MSK_PP_3_50M;}

#define GPIOC_12_OUT_PP_2M() {GPIOC->CRH &= GPIO_MSK_CLR_4; GPIOC->CRH |= GPIO_MSK_PP_4_2M;}
#define GPIOC_12_OUT_PP_10M() {GPIOC->CRH &= GPIO_MSK_CLR_4; GPIOC->CRH |= GPIO_MSK_PP_4_10M;}
#define GPIOC_12_OUT_PP_50M() {GPIOC->CRH &= GPIO_MSK_CLR_4; GPIOC->CRH |= GPIO_MSK_PP_4_50M;}

#define GPIOC_13_OUT_PP_2M() {GPIOC->CRH &= GPIO_MSK_CLR_5; GPIOC->CRH |= GPIO_MSK_PP_5_2M;}
#define GPIOC_13_OUT_PP_10M() {GPIOC->CRH &= GPIO_MSK_CLR_5; GPIOC->CRH |= GPIO_MSK_PP_5_10M;}
#define GPIOC_13_OUT_PP_50M() {GPIOC->CRH &= GPIO_MSK_CLR_5; GPIOC->CRH |= GPIO_MSK_PP_5_50M;}

#define GPIOC_14_OUT_PP_2M() {GPIOC->CRH &= GPIO_MSK_CLR_6; GPIOC->CRH |= GPIO_MSK_PP_6_2M;}
#define GPIOC_14_OUT_PP_10M() {GPIOC->CRH &= GPIO_MSK_CLR_6; GPIOC->CRH |= GPIO_MSK_PP_6_10M;}
#define GPIOC_14_OUT_PP_50M() {GPIOC->CRH &= GPIO_MSK_CLR_6; GPIOC->CRH |= GPIO_MSK_PP_6_50M;}

#define GPIOC_15_OUT_PP_2M() {GPIOC->CRH &= GPIO_MSK_CLR_7; GPIOC->CRH |= GPIO_MSK_PP_7_2M;}
#define GPIOC_15_OUT_PP_10M() {GPIOC->CRH &= GPIO_MSK_CLR_7; GPIOC->CRH |= GPIO_MSK_PP_7_10M;}
#define GPIOC_15_OUT_PP_50M() {GPIOC->CRH &= GPIO_MSK_CLR_7; GPIOC->CRH |= GPIO_MSK_PP_7_50M;}

// GPIOC open drain outputs 2M/10M/50M
#define GPIOC_0_OUT_OD_2M() {GPIOC->CRL &= GPIO_MSK_CLR_0; GPIOC->CRL |= GPIO_MSK_OD_0_2M;}
#define GPIOC_0_OUT_OD_10M() {GPIOC->CRL &= GPIO_MSK_CLR_0; GPIOC->CRL |= GPIO_MSK_OD_0_10M;}
#define GPIOC_0_OUT_OD_50M() {GPIOC->CRL &= GPIO_MSK_CLR_0; GPIOC->CRL |= GPIO_MSK_OD_0_50M;}

#define GPIOC_1_OUT_OD_2M() {GPIOC->CRL &= GPIO_MSK_CLR_1; GPIOC->CRL |= GPIO_MSK_OD_1_2M;}
#define GPIOC_1_OUT_OD_10M() {GPIOC->CRL &= GPIO_MSK_CLR_1; GPIOC->CRL |= GPIO_MSK_OD_1_10M;}
#define GPIOC_1_OUT_OD_50M() {GPIOC->CRL &= GPIO_MSK_CLR_1; GPIOC->CRL |= GPIO_MSK_OD_1_50M;}

#define GPIOC_2_OUT_OD_2M() {GPIOC->CRL &= GPIO_MSK_CLR_2; GPIOC->CRL |= GPIO_MSK_OD_2_2M;}
#define GPIOC_2_OUT_OD_10M() {GPIOC->CRL &= GPIO_MSK_CLR_2; GPIOC->CRL |= GPIO_MSK_OD_2_10M;}
#define GPIOC_2_OUT_OD_50M() {GPIOC->CRL &= GPIO_MSK_CLR_2; GPIOC->CRL |= GPIO_MSK_OD_2_50M;}

#define GPIOC_3_OUT_OD_2M() {GPIOC->CRL &= GPIO_MSK_CLR_3; GPIOC->CRL |= GPIO_MSK_OD_3_2M;}
#define GPIOC_3_OUT_OD_10M() {GPIOC->CRL &= GPIO_MSK_CLR_3; GPIOC->CRL |= GPIO_MSK_OD_3_10M;}
#define GPIOC_3_OUT_OD_50M() {GPIOC->CRL &= GPIO_MSK_CLR_3; GPIOC->CRL |= GPIO_MSK_OD_3_50M;}

#define GPIOC_4_OUT_OD_2M() {GPIOC->CRL &= GPIO_MSK_CLR_4; GPIOC->CRL |= GPIO_MSK_OD_4_2M;}
#define GPIOC_4_OUT_OD_10M() {GPIOC->CRL &= GPIO_MSK_CLR_4; GPIOC->CRL |= GPIO_MSK_OD_4_10M;}
#define GPIOC_4_OUT_OD_50M() {GPIOC->CRL &= GPIO_MSK_CLR_4; GPIOC->CRL |= GPIO_MSK_OD_4_50M;}

#define GPIOC_5_OUT_OD_2M() {GPIOC->CRL &= GPIO_MSK_CLR_5; GPIOC->CRL |= GPIO_MSK_OD_5_2M;}
#define GPIOC_5_OUT_OD_10M() {GPIOC->CRL &= GPIO_MSK_CLR_5; GPIOC->CRL |= GPIO_MSK_OD_5_10M;}
#define GPIOC_5_OUT_OD_50M() {GPIOC->CRL &= GPIO_MSK_CLR_5; GPIOC->CRL |= GPIO_MSK_OD_5_50M;}

#define GPIOC_6_OUT_OD_2M() {GPIOC->CRL &= GPIO_MSK_CLR_6; GPIOC->CRL |= GPIO_MSK_OD_6_2M;}
#define GPIOC_6_OUT_OD_10M() {GPIOC->CRL &= GPIO_MSK_CLR_6; GPIOC->CRL |= GPIO_MSK_OD_6_10M;}
#define GPIOC_6_OUT_OD_50M() {GPIOC->CRL &= GPIO_MSK_CLR_6; GPIOC->CRL |= GPIO_MSK_OD_6_50M;}

#define GPIOC_7_OUT_OD_2M() {GPIOC->CRL &= GPIO_MSK_CLR_7; GPIOC->CRL |= GPIO_MSK_OD_7_2M;}
#define GPIOC_7_OUT_OD_10M() {GPIOC->CRL &= GPIO_MSK_CLR_7; GPIOC->CRL |= GPIO_MSK_OD_7_10M;}
#define GPIOC_7_OUT_OD_50M() {GPIOC->CRL &= GPIO_MSK_CLR_7; GPIOC->CRL |= GPIO_MSK_OD_7_50M;}

#define GPIOC_8_OUT_OD_2M() {GPIOC->CRH &= GPIO_MSK_CLR_0; GPIOC->CRH |= GPIO_MSK_OD_0_2M;}
#define GPIOC_8_OUT_OD_10M() {GPIOC->CRH &= GPIO_MSK_CLR_0; GPIOC->CRH |= GPIO_MSK_OD_0_10M;}
#define GPIOC_8_OUT_OD_50M() {GPIOC->CRH &= GPIO_MSK_CLR_0; GPIOC->CRH |= GPIO_MSK_OD_0_50M;}

#define GPIOC_9_OUT_OD_2M() {GPIOC->CRH &= GPIO_MSK_CLR_1; GPIOC->CRH |= GPIO_MSK_OD_1_2M;}
#define GPIOC_9_OUT_OD_10M() {GPIOC->CRH &= GPIO_MSK_CLR_1; GPIOC->CRH |= GPIO_MSK_OD_1_10M;}
#define GPIOC_9_OUT_OD_50M() {GPIOC->CRH &= GPIO_MSK_CLR_1; GPIOC->CRH |= GPIO_MSK_OD_1_50M;}

#define GPIOC_10_OUT_OD_2M() {GPIOC->CRH &= GPIO_MSK_CLR_2; GPIOC->CRH |= GPIO_MSK_OD_2_2M;}
#define GPIOC_10_OUT_OD_10M() {GPIOC->CRH &= GPIO_MSK_CLR_2; GPIOC->CRH |= GPIO_MSK_OD_2_10M;}
#define GPIOC_10_OUT_OD_50M() {GPIOC->CRH &= GPIO_MSK_CLR_2; GPIOC->CRH |= GPIO_MSK_OD_2_50M;}

#define GPIOC_11_OUT_OD_2M() {GPIOC->CRH &= GPIO_MSK_CLR_3; GPIOC->CRH |= GPIO_MSK_OD_3_2M;}
#define GPIOC_11_OUT_OD_10M() {GPIOC->CRH &= GPIO_MSK_CLR_3; GPIOC->CRH |= GPIO_MSK_OD_3_10M;}
#define GPIOC_11_OUT_OD_50M() {GPIOC->CRH &= GPIO_MSK_CLR_3; GPIOC->CRH |= GPIO_MSK_OD_3_50M;}

#define GPIOC_12_OUT_OD_2M() {GPIOC->CRH &= GPIO_MSK_CLR_4; GPIOC->CRH |= GPIO_MSK_OD_4_2M;}
#define GPIOC_12_OUT_OD_10M() {GPIOC->CRH &= GPIO_MSK_CLR_4; GPIOC->CRH |= GPIO_MSK_OD_4_10M;}
#define GPIOC_12_OUT_OD_50M() {GPIOC->CRH &= GPIO_MSK_CLR_4; GPIOC->CRH |= GPIO_MSK_OD_4_50M;}

#define GPIOC_13_OUT_OD_2M() {GPIOC->CRH &= GPIO_MSK_CLR_5; GPIOC->CRH |= GPIO_MSK_OD_5_2M;}
#define GPIOC_13_OUT_OD_10M() {GPIOC->CRH &= GPIO_MSK_CLR_5; GPIOC->CRH |= GPIO_MSK_OD_5_10M;}
#define GPIOC_13_OUT_OD_50M() {GPIOC->CRH &= GPIO_MSK_CLR_5; GPIOC->CRH |= GPIO_MSK_OD_5_50M;}

#define GPIOC_14_OUT_OD_2M() {GPIOC->CRH &= GPIO_MSK_CLR_6; GPIOC->CRH |= GPIO_MSK_OD_6_2M;}
#define GPIOC_14_OUT_OD_10M() {GPIOC->CRH &= GPIO_MSK_CLR_6; GPIOC->CRH |= GPIO_MSK_OD_6_10M;}
#define GPIOC_14_OUT_OD_50M() {GPIOC->CRH &= GPIO_MSK_CLR_6; GPIOC->CRH |= GPIO_MSK_OD_6_50M;}

#define GPIOC_15_OUT_OD_2M() {GPIOC->CRH &= GPIO_MSK_CLR_7; GPIOC->CRH |= GPIO_MSK_OD_7_2M;}
#define GPIOC_15_OUT_OD_10M() {GPIOC->CRH &= GPIO_MSK_CLR_7; GPIOC->CRH |= GPIO_MSK_OD_7_10M;}
#define GPIOC_15_OUT_OD_50M() {GPIOC->CRH &= GPIO_MSK_CLR_7; GPIOC->CRH |= GPIO_MSK_OD_7_50M;}

// GPIOC alternate function push/pull outputs 2M/10M/50M
#define GPIOC_0_OUT_AFPP_2M() {GPIOC->CRL &= GPIO_MSK_CLR_0; GPIOC->CRL |= GPIO_MSK_AFPP_0_2M;}
#define GPIOC_0_OUT_AFPP_10M() {GPIOC->CRL &= GPIO_MSK_CLR_0; GPIOC->CRL |= GPIO_MSK_AFPP_0_10M;}
#define GPIOC_0_OUT_AFPP_50M() {GPIOC->CRL &= GPIO_MSK_CLR_0; GPIOC->CRL |= GPIO_MSK_AFPP_0_50M;}

#define GPIOC_1_OUT_AFPP_2M() {GPIOC->CRL &= GPIO_MSK_CLR_1; GPIOC->CRL |= GPIO_MSK_AFPP_1_2M;}
#define GPIOC_1_OUT_AFPP_10M() {GPIOC->CRL &= GPIO_MSK_CLR_1; GPIOC->CRL |= GPIO_MSK_AFPP_1_10M;}
#define GPIOC_1_OUT_AFPP_50M() {GPIOC->CRL &= GPIO_MSK_CLR_1; GPIOC->CRL |= GPIO_MSK_AFPP_1_50M;}

#define GPIOC_2_OUT_AFPP_2M() {GPIOC->CRL &= GPIO_MSK_CLR_2; GPIOC->CRL |= GPIO_MSK_AFPP_2_2M;}
#define GPIOC_2_OUT_AFPP_10M() {GPIOC->CRL &= GPIO_MSK_CLR_2; GPIOC->CRL |= GPIO_MSK_AFPP_2_10M;}
#define GPIOC_2_OUT_AFPP_50M() {GPIOC->CRL &= GPIO_MSK_CLR_2; GPIOC->CRL |= GPIO_MSK_AFPP_2_50M;}

#define GPIOC_3_OUT_AFPP_2M() {GPIOC->CRL &= GPIO_MSK_CLR_3; GPIOC->CRL |= GPIO_MSK_AFPP_3_2M;}
#define GPIOC_3_OUT_AFPP_10M() {GPIOC->CRL &= GPIO_MSK_CLR_3; GPIOC->CRL |= GPIO_MSK_AFPP_3_10M;}
#define GPIOC_3_OUT_AFPP_50M() {GPIOC->CRL &= GPIO_MSK_CLR_3; GPIOC->CRL |= GPIO_MSK_AFPP_3_50M;}

#define GPIOC_4_OUT_AFPP_2M() {GPIOC->CRL &= GPIO_MSK_CLR_4; GPIOC->CRL |= GPIO_MSK_AFPP_4_2M;}
#define GPIOC_4_OUT_AFPP_10M() {GPIOC->CRL &= GPIO_MSK_CLR_4; GPIOC->CRL |= GPIO_MSK_AFPP_4_10M;}
#define GPIOC_4_OUT_AFPP_50M() {GPIOC->CRL &= GPIO_MSK_CLR_4; GPIOC->CRL |= GPIO_MSK_AFPP_4_50M;}

#define GPIOC_5_OUT_AFPP_2M() {GPIOC->CRL &= GPIO_MSK_CLR_5; GPIOC->CRL |= GPIO_MSK_AFPP_5_2M;}
#define GPIOC_5_OUT_AFPP_10M() {GPIOC->CRL &= GPIO_MSK_CLR_5; GPIOC->CRL |= GPIO_MSK_AFPP_5_10M;}
#define GPIOC_5_OUT_AFPP_50M() {GPIOC->CRL &= GPIO_MSK_CLR_5; GPIOC->CRL |= GPIO_MSK_AFPP_5_50M;}

#define GPIOC_6_OUT_AFPP_2M() {GPIOC->CRL &= GPIO_MSK_CLR_6; GPIOC->CRL |= GPIO_MSK_AFPP_6_2M;}
#define GPIOC_6_OUT_AFPP_10M() {GPIOC->CRL &= GPIO_MSK_CLR_6; GPIOC->CRL |= GPIO_MSK_AFPP_6_10M;}
#define GPIOC_6_OUT_AFPP_50M() {GPIOC->CRL &= GPIO_MSK_CLR_6; GPIOC->CRL |= GPIO_MSK_AFPP_6_50M;}

#define GPIOC_7_OUT_AFPP_2M() {GPIOC->CRL &= GPIO_MSK_CLR_7; GPIOC->CRL |= GPIO_MSK_AFPP_7_2M;}
#define GPIOC_7_OUT_AFPP_10M() {GPIOC->CRL &= GPIO_MSK_CLR_7; GPIOC->CRL |= GPIO_MSK_AFPP_7_10M;}
#define GPIOC_7_OUT_AFPP_50M() {GPIOC->CRL &= GPIO_MSK_CLR_7; GPIOC->CRL |= GPIO_MSK_AFPP_7_50M;}

#define GPIOC_8_OUT_AFPP_2M() {GPIOC->CRH &= GPIO_MSK_CLR_0; GPIOC->CRH |= GPIO_MSK_AFPP_0_2M;}
#define GPIOC_8_OUT_AFPP_10M() {GPIOC->CRH &= GPIO_MSK_CLR_0; GPIOC->CRH |= GPIO_MSK_AFPP_0_10M;}
#define GPIOC_8_OUT_AFPP_50M() {GPIOC->CRH &= GPIO_MSK_CLR_0; GPIOC->CRH |= GPIO_MSK_AFPP_0_50M;}

#define GPIOC_9_OUT_AFPP_2M() {GPIOC->CRH &= GPIO_MSK_CLR_1; GPIOC->CRH |= GPIO_MSK_AFPP_1_2M;}
#define GPIOC_9_OUT_AFPP_10M() {GPIOC->CRH &= GPIO_MSK_CLR_1; GPIOC->CRH |= GPIO_MSK_AFPP_1_10M;}
#define GPIOC_9_OUT_AFPP_50M() {GPIOC->CRH &= GPIO_MSK_CLR_1; GPIOC->CRH |= GPIO_MSK_AFPP_1_50M;}

#define GPIOC_10_OUT_AFPP_2M() {GPIOC->CRH &= GPIO_MSK_CLR_2; GPIOC->CRH |= GPIO_MSK_AFPP_2_2M;}
#define GPIOC_10_OUT_AFPP_10M() {GPIOC->CRH &= GPIO_MSK_CLR_2; GPIOC->CRH |= GPIO_MSK_AFPP_2_10M;}
#define GPIOC_10_OUT_AFPP_50M() {GPIOC->CRH &= GPIO_MSK_CLR_2; GPIOC->CRH |= GPIO_MSK_AFPP_2_50M;}

#define GPIOC_11_OUT_AFPP_2M() {GPIOC->CRH &= GPIO_MSK_CLR_3; GPIOC->CRH |= GPIO_MSK_AFPP_3_2M;}
#define GPIOC_11_OUT_AFPP_10M() {GPIOC->CRH &= GPIO_MSK_CLR_3; GPIOC->CRH |= GPIO_MSK_AFPP_3_10M;}
#define GPIOC_11_OUT_AFPP_50M() {GPIOC->CRH &= GPIO_MSK_CLR_3; GPIOC->CRH |= GPIO_MSK_AFPP_3_50M;}

#define GPIOC_12_OUT_AFPP_2M() {GPIOC->CRH &= GPIO_MSK_CLR_4; GPIOC->CRH |= GPIO_MSK_AFPP_4_2M;}
#define GPIOC_12_OUT_AFPP_10M() {GPIOC->CRH &= GPIO_MSK_CLR_4; GPIOC->CRH |= GPIO_MSK_AFPP_4_10M;}
#define GPIOC_12_OUT_AFPP_50M() {GPIOC->CRH &= GPIO_MSK_CLR_4; GPIOC->CRH |= GPIO_MSK_AFPP_4_50M;}

#define GPIOC_13_OUT_AFPP_2M() {GPIOC->CRH &= GPIO_MSK_CLR_5; GPIOC->CRH |= GPIO_MSK_AFPP_5_2M;}
#define GPIOC_13_OUT_AFPP_10M() {GPIOC->CRH &= GPIO_MSK_CLR_5; GPIOC->CRH |= GPIO_MSK_AFPP_5_10M;}
#define GPIOC_13_OUT_AFPP_50M() {GPIOC->CRH &= GPIO_MSK_CLR_5; GPIOC->CRH |= GPIO_MSK_AFPP_5_50M;}

#define GPIOC_14_OUT_AFPP_2M() {GPIOC->CRH &= GPIO_MSK_CLR_6; GPIOC->CRH |= GPIO_MSK_AFPP_6_2M;}
#define GPIOC_14_OUT_AFPP_10M() {GPIOC->CRH &= GPIO_MSK_CLR_6; GPIOC->CRH |= GPIO_MSK_AFPP_6_10M;}
#define GPIOC_14_OUT_AFPP_50M() {GPIOC->CRH &= GPIO_MSK_CLR_6; GPIOC->CRH |= GPIO_MSK_AFPP_6_50M;}

#define GPIOC_15_OUT_AFPP_2M() {GPIOC->CRH &= GPIO_MSK_CLR_7; GPIOC->CRH |= GPIO_MSK_AFPP_7_2M;}
#define GPIOC_15_OUT_AFPP_10M() {GPIOC->CRH &= GPIO_MSK_CLR_7; GPIOC->CRH |= GPIO_MSK_AFPP_7_10M;}
#define GPIOC_15_OUT_AFPP_50M() {GPIOC->CRH &= GPIO_MSK_CLR_7; GPIOC->CRH |= GPIO_MSK_AFPP_7_50M;}

// GPIOC alternate function open drain outputs 2M/10M/50M
#define GPIOC_0_OUT_AFOD_2M() {GPIOC->CRL &= GPIO_MSK_CLR_0; GPIOC->CRL |= GPIO_MSK_AFOD_0_2M;}
#define GPIOC_0_OUT_AFOD_10M() {GPIOC->CRL &= GPIO_MSK_CLR_0; GPIOC->CRL |= GPIO_MSK_AFOD_0_10M;}
#define GPIOC_0_OUT_AFOD_50M() {GPIOC->CRL &= GPIO_MSK_CLR_0; GPIOC->CRL |= GPIO_MSK_AFOD_0_50M;}

#define GPIOC_1_OUT_AFOD_2M() {GPIOC->CRL &= GPIO_MSK_CLR_1; GPIOC->CRL |= GPIO_MSK_AFOD_1_2M;}
#define GPIOC_1_OUT_AFOD_10M() {GPIOC->CRL &= GPIO_MSK_CLR_1; GPIOC->CRL |= GPIO_MSK_AFOD_1_10M;}
#define GPIOC_1_OUT_AFOD_50M() {GPIOC->CRL &= GPIO_MSK_CLR_1; GPIOC->CRL |= GPIO_MSK_AFOD_1_50M;}

#define GPIOC_2_OUT_AFOD_2M() {GPIOC->CRL &= GPIO_MSK_CLR_2; GPIOC->CRL |= GPIO_MSK_AFOD_2_2M;}
#define GPIOC_2_OUT_AFOD_10M() {GPIOC->CRL &= GPIO_MSK_CLR_2; GPIOC->CRL |= GPIO_MSK_AFOD_2_10M;}
#define GPIOC_2_OUT_AFOD_50M() {GPIOC->CRL &= GPIO_MSK_CLR_2; GPIOC->CRL |= GPIO_MSK_AFOD_2_50M;}

#define GPIOC_3_OUT_AFOD_2M() {GPIOC->CRL &= GPIO_MSK_CLR_3; GPIOC->CRL |= GPIO_MSK_AFOD_3_2M;}
#define GPIOC_3_OUT_AFOD_10M() {GPIOC->CRL &= GPIO_MSK_CLR_3; GPIOC->CRL |= GPIO_MSK_AFOD_3_10M;}
#define GPIOC_3_OUT_AFOD_50M() {GPIOC->CRL &= GPIO_MSK_CLR_3; GPIOC->CRL |= GPIO_MSK_AFOD_3_50M;}

#define GPIOC_4_OUT_AFOD_2M() {GPIOC->CRL &= GPIO_MSK_CLR_4; GPIOC->CRL |= GPIO_MSK_AFOD_4_2M;}
#define GPIOC_4_OUT_AFOD_10M() {GPIOC->CRL &= GPIO_MSK_CLR_4; GPIOC->CRL |= GPIO_MSK_AFOD_4_10M;}
#define GPIOC_4_OUT_AFOD_50M() {GPIOC->CRL &= GPIO_MSK_CLR_4; GPIOC->CRL |= GPIO_MSK_AFOD_4_50M;}

#define GPIOC_5_OUT_AFOD_2M() {GPIOC->CRL &= GPIO_MSK_CLR_5; GPIOC->CRL |= GPIO_MSK_AFOD_5_2M;}
#define GPIOC_5_OUT_AFOD_10M() {GPIOC->CRL &= GPIO_MSK_CLR_5; GPIOC->CRL |= GPIO_MSK_AFOD_5_10M;}
#define GPIOC_5_OUT_AFOD_50M() {GPIOC->CRL &= GPIO_MSK_CLR_5; GPIOC->CRL |= GPIO_MSK_AFOD_5_50M;}

#define GPIOC_6_OUT_AFOD_2M() {GPIOC->CRL &= GPIO_MSK_CLR_6; GPIOC->CRL |= GPIO_MSK_AFOD_6_2M;}
#define GPIOC_6_OUT_AFOD_10M() {GPIOC->CRL &= GPIO_MSK_CLR_6; GPIOC->CRL |= GPIO_MSK_AFOD_6_10M;}
#define GPIOC_6_OUT_AFOD_50M() {GPIOC->CRL &= GPIO_MSK_CLR_6; GPIOC->CRL |= GPIO_MSK_AFOD_6_50M;}

#define GPIOC_7_OUT_AFOD_2M() {GPIOC->CRL &= GPIO_MSK_CLR_7; GPIOC->CRL |= GPIO_MSK_AFOD_7_2M;}
#define GPIOC_7_OUT_AFOD_10M() {GPIOC->CRL &= GPIO_MSK_CLR_7; GPIOC->CRL |= GPIO_MSK_AFOD_7_10M;}
#define GPIOC_7_OUT_AFOD_50M() {GPIOC->CRL &= GPIO_MSK_CLR_7; GPIOC->CRL |= GPIO_MSK_AFOD_7_50M;}

#define GPIOC_8_OUT_AFOD_2M() {GPIOC->CRH &= GPIO_MSK_CLR_0; GPIOC->CRH |= GPIO_MSK_AFOD_0_2M;}
#define GPIOC_8_OUT_AFOD_10M() {GPIOC->CRH &= GPIO_MSK_CLR_0; GPIOC->CRH |= GPIO_MSK_AFOD_0_10M;}
#define GPIOC_8_OUT_AFOD_50M() {GPIOC->CRH &= GPIO_MSK_CLR_0; GPIOC->CRH |= GPIO_MSK_AFOD_0_50M;}

#define GPIOC_9_OUT_AFOD_2M() {GPIOC->CRH &= GPIO_MSK_CLR_1; GPIOC->CRH |= GPIO_MSK_AFOD_1_2M;}
#define GPIOC_9_OUT_AFOD_10M() {GPIOC->CRH &= GPIO_MSK_CLR_1; GPIOC->CRH |= GPIO_MSK_AFOD_1_10M;}
#define GPIOC_9_OUT_AFOD_50M() {GPIOC->CRH &= GPIO_MSK_CLR_1; GPIOC->CRH |= GPIO_MSK_AFOD_1_50M;}

#define GPIOC_10_OUT_AFOD_2M() {GPIOC->CRH &= GPIO_MSK_CLR_2; GPIOC->CRH |= GPIO_MSK_AFOD_2_2M;}
#define GPIOC_10_OUT_AFOD_10M() {GPIOC->CRH &= GPIO_MSK_CLR_2; GPIOC->CRH |= GPIO_MSK_AFOD_2_10M;}
#define GPIOC_10_OUT_AFOD_50M() {GPIOC->CRH &= GPIO_MSK_CLR_2; GPIOC->CRH |= GPIO_MSK_AFOD_2_50M;}

#define GPIOC_11_OUT_AFOD_2M() {GPIOC->CRH &= GPIO_MSK_CLR_3; GPIOC->CRH |= GPIO_MSK_AFOD_3_2M;}
#define GPIOC_11_OUT_AFOD_10M() {GPIOC->CRH &= GPIO_MSK_CLR_3; GPIOC->CRH |= GPIO_MSK_AFOD_3_10M;}
#define GPIOC_11_OUT_AFOD_50M() {GPIOC->CRH &= GPIO_MSK_CLR_3; GPIOC->CRH |= GPIO_MSK_AFOD_3_50M;}

#define GPIOC_12_OUT_AFOD_2M() {GPIOC->CRH &= GPIO_MSK_CLR_4; GPIOC->CRH |= GPIO_MSK_AFOD_4_2M;}
#define GPIOC_12_OUT_AFOD_10M() {GPIOC->CRH &= GPIO_MSK_CLR_4; GPIOC->CRH |= GPIO_MSK_AFOD_4_10M;}
#define GPIOC_12_OUT_AFOD_50M() {GPIOC->CRH &= GPIO_MSK_CLR_4; GPIOC->CRH |= GPIO_MSK_AFOD_4_50M;}

#define GPIOC_13_OUT_AFOD_2M() {GPIOC->CRH &= GPIO_MSK_CLR_5; GPIOC->CRH |= GPIO_MSK_AFOD_5_2M;}
#define GPIOC_13_OUT_AFOD_10M() {GPIOC->CRH &= GPIO_MSK_CLR_5; GPIOC->CRH |= GPIO_MSK_AFOD_5_10M;}
#define GPIOC_13_OUT_AFOD_50M() {GPIOC->CRH &= GPIO_MSK_CLR_5; GPIOC->CRH |= GPIO_MSK_AFOD_5_50M;}

#define GPIOC_14_OUT_AFOD_2M() {GPIOC->CRH &= GPIO_MSK_CLR_6; GPIOC->CRH |= GPIO_MSK_AFOD_6_2M;}
#define GPIOC_14_OUT_AFOD_10M() {GPIOC->CRH &= GPIO_MSK_CLR_6; GPIOC->CRH |= GPIO_MSK_AFOD_6_10M;}
#define GPIOC_14_OUT_AFOD_50M() {GPIOC->CRH &= GPIO_MSK_CLR_6; GPIOC->CRH |= GPIO_MSK_AFOD_6_50M;}

#define GPIOC_15_OUT_AFOD_2M() {GPIOC->CRH &= GPIO_MSK_CLR_7; GPIOC->CRH |= GPIO_MSK_AFOD_7_2M;}
#define GPIOC_15_OUT_AFOD_10M() {GPIOC->CRH &= GPIO_MSK_CLR_7; GPIOC->CRH |= GPIO_MSK_AFOD_7_10M;}
#define GPIOC_15_OUT_AFOD_50M() {GPIOC->CRH &= GPIO_MSK_CLR_7; GPIOC->CRH |= GPIO_MSK_AFOD_7_50M;}
//-----------------------------------------------------------------------------

// GPIOC SET/CLR/CHG/TGL/Get macros
#define GPIOC_0_SET() (GPIOC->BSRR = BIT0)
#define GPIOC_0_CLR() (GPIOC->BRR = BIT0)
#define GPIOC_0_CHG(b) {if (b) GPIOC_0_SET(); else GPIOC_0_CLR();}
#define GPIOC_0_TGL() (GPIOC->ODR ^= BIT0)
#define GPIOC_0_GET() ((GPIOC->IDR & BIT0) == BIT0)

#define GPIOC_1_SET() (GPIOC->BSRR = BIT1)
#define GPIOC_1_CLR() (GPIOC->BRR = BIT1)
#define GPIOC_1_CHG(b) {if (b) GPIOC_1_SET(); else GPIOC_1_CLR();}
#define GPIOC_1_TGL() (GPIOC->ODR ^= BIT1)
#define GPIOC_1_GET() ((GPIOC->IDR & BIT1) == BIT1)

#define GPIOC_2_SET() (GPIOC->BSRR = BIT2)
#define GPIOC_2_CLR() (GPIOC->BRR = BIT2)
#define GPIOC_2_CHG(b) {if (b) GPIOC_2_SET(); else GPIOC_2_CLR();}
#define GPIOC_2_TGL() (GPIOC->ODR ^= BIT2)
#define GPIOC_2_GET() ((GPIOC->IDR & BIT2) == BIT2)

#define GPIOC_3_SET() (GPIOC->BSRR = BIT3)
#define GPIOC_3_CLR() (GPIOC->BRR = BIT3)
#define GPIOC_3_CHG(b) {if (b) GPIOC_3_SET(); else GPIOC_3_CLR();}
#define GPIOC_3_TGL() (GPIOC->ODR ^= BIT3)
#define GPIOC_3_GET() ((GPIOC->IDR & BIT3) == BIT3)

#define GPIOC_4_SET() (GPIOC->BSRR = BIT4)
#define GPIOC_4_CLR() (GPIOC->BRR = BIT4)
#define GPIOC_4_CHG(b) {if (b) GPIOC_4_SET(); else GPIOC_4_CLR();}
#define GPIOC_4_TGL() (GPIOC->ODR ^= BIT4)
#define GPIOC_4_GET() ((GPIOC->IDR & BIT4) == BIT4)

#define GPIOC_5_SET() (GPIOC->BSRR = BIT5)
#define GPIOC_5_CLR() (GPIOC->BRR = BIT5)
#define GPIOC_5_CHG(b) {if (b) GPIOC_5_SET(); else GPIOC_5_CLR();}
#define GPIOC_5_TGL() (GPIOC->ODR ^= BIT5)
#define GPIOC_5_GET() ((GPIOC->IDR & BIT5) == BIT5)

#define GPIOC_6_SET() (GPIOC->BSRR = BIT6)
#define GPIOC_6_CLR() (GPIOC->BRR = BIT6)
#define GPIOC_6_CHG(b) {if (b) GPIOC_6_SET(); else GPIOC_6_CLR();}
#define GPIOC_6_TGL() (GPIOC->ODR ^= BIT6)
#define GPIOC_6_GET() ((GPIOC->IDR & BIT6) == BIT6)

#define GPIOC_7_SET() (GPIOC->BSRR = BIT7)
#define GPIOC_7_CLR() (GPIOC->BRR = BIT7)
#define GPIOC_7_CHG(b) {if (b) GPIOC_7_SET(); else GPIOC_7_CLR();}
#define GPIOC_7_TGL() (GPIOC->ODR ^= BIT7)
#define GPIOC_7_GET() ((GPIOC->IDR & BIT7) == BIT7)

#define GPIOC_8_SET() (GPIOC->BSRR = BIT8)
#define GPIOC_8_CLR() (GPIOC->BRR = BIT8)
#define GPIOC_8_CHG(b) {if (b) GPIOC_8_SET(); else GPIOC_8_CLR();}
#define GPIOC_8_TGL() (GPIOC->ODR ^= BIT8)
#define GPIOC_8_GET() ((GPIOC->IDR & BIT8) == BIT8)

#define GPIOC_9_SET() (GPIOC->BSRR = BIT9)
#define GPIOC_9_CLR() (GPIOC->BRR = BIT9)
#define GPIOC_9_CHG(b) {if (b) GPIOC_9_SET(); else GPIOC_9_CLR();}
#define GPIOC_9_TGL() (GPIOC->ODR ^= BIT9)
#define GPIOC_9_GET() ((GPIOC->IDR & BIT9) == BIT9)

#define GPIOC_10_SET() (GPIOC->BSRR = BIT10)
#define GPIOC_10_CLR() (GPIOC->BRR = BIT10)
#define GPIOC_10_CHG(b) {if (b) GPIOC_10_SET(); else GPIOC_10_CLR();}
#define GPIOC_10_TGL() (GPIOC->ODR ^= BIT10)
#define GPIOC_10_GET() ((GPIOC->IDR & BIT10) == BIT10)

#define GPIOC_11_SET() (GPIOC->BSRR = BIT11)
#define GPIOC_11_CLR() (GPIOC->BRR = BIT11)
#define GPIOC_11_CHG(b) {if (b) GPIOC_11_SET(); else GPIOC_11_CLR();}
#define GPIOC_11_TGL() (GPIOC->ODR ^= BIT11)
#define GPIOC_11_GET() ((GPIOC->IDR & BIT11) == BIT11)

#define GPIOC_12_SET() (GPIOC->BSRR = BIT12)
#define GPIOC_12_CLR() (GPIOC->BRR = BIT12)
#define GPIOC_12_CHG(b) {if (b) GPIOC_12_SET(); else GPIOC_12_CLR();}
#define GPIOC_12_TGL() (GPIOC->ODR ^= BIT12)
#define GPIOC_12_GET() ((GPIOC->IDR & BIT12) == BIT12)

#define GPIOC_13_SET() (GPIOC->BSRR = BIT13)
#define GPIOC_13_CLR() (GPIOC->BRR = BIT13)
#define GPIOC_13_CHG(b) {if (b) GPIOC_13_SET(); else GPIOC_13_CLR();}
#define GPIOC_13_TGL() (GPIOC->ODR ^= BIT13)
#define GPIOC_13_GET() ((GPIOC->IDR & BIT13) == BIT13)

#define GPIOC_14_SET() (GPIOC->BSRR = BIT14)
#define GPIOC_14_CLR() (GPIOC->BRR = BIT14)
#define GPIOC_14_CHG(b) {if (b) GPIOC_14_SET(); else GPIOC_14_CLR();}
#define GPIOC_14_TGL() (GPIOC->ODR ^= BIT14)
#define GPIOC_14_GET() ((GPIOC->IDR & BIT14) == BIT14)

#define GPIOC_15_SET() (GPIOC->BSRR = BIT15)
#define GPIOC_15_CLR() (GPIOC->BRR = BIT15)
#define GPIOC_15_CHG(b) {if (b) GPIOC_15_SET(); else GPIOC_15_CLR();}
#define GPIOC_15_TGL() (GPIOC->ODR ^= BIT15)
#define GPIOC_15_GET() ((GPIOC->IDR & BIT15) == BIT15)
