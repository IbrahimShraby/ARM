/*********************************************/
/* Description:                              */
/*             This file provides private    */
/* configuration parameters like registers'  */
/* addresses in the DIO Component            */
/*===========================================*/
/* Author : Ibrahim Sharaby                  */ 
/* Date   : 20/2/2019                        */
/* Version: 1.0                              */
/*********************************************/

/****************/
/* Header Guard */
/****************/
#ifndef RCC_PRIV_H
#define RCC_PRIV_H


/***********************************************/
/* Define the (RCC_type) new type to represent */
/* represent the RCC Peripheral Register       */
/***********************************************/
typedef struct
{
  Register_32bit CR;
  Register_32bit CFGR;
  Register_32bit CIR;
  Register_32bit APB2RSTR;
  Register_32bit APB1RSTR;
  Register_32bit AHBENR;
  Register_32bit APB2ENR;
  Register_32bit APB1ENR;
  Register_32bit BDCR;
  Register_32bit CSR;
}RCC_type;

/*******************************************/
/* clock source in the system              */
/*******************************************/
#define HSI_CLOCK         0
#define HSE_CLOCK         1
#define PLL_CLOCK         2

/*******************************************/
/* the HSI Clock State                     */
/*******************************************/
#define   HSI_ON         1
#define   HSI_OFF        0 

/*******************************************/
/* the HSE Clock State                     */
/*******************************************/
#define   HSE_ON         1
#define   HSE_OFF        0

/*******************************************/
/* the PLL Clock State                     */
/*******************************************/
#define   PLL_ON         1
#define   PLL_OFF        0

/*******************************************/
/* the PLL Clock Source                    */
/*******************************************/
#define   HSI_PLLSRC     0
#define   HSE_PLLSRC     1

/*******************************************/
/* the PLL multiplication factor           */
/*******************************************/
#define   PLL_INPUT_CLK_X_2     0b0000
#define   PLL_INPUT_CLK_X_3     0b0001
#define   PLL_INPUT_CLK_X_4     0b0010
#define   PLL_INPUT_CLK_X_5     0b0011
#define   PLL_INPUT_CLK_X_6     0b0100
#define   PLL_INPUT_CLK_X_7     0b0101
#define   PLL_INPUT_CLK_X_8     0b0110
#define   PLL_INPUT_CLK_X_9     0b0111
#define   PLL_INPUT_CLK_X_10    0b1000
#define   PLL_INPUT_CLK_X_11    0b1001
#define   PLL_INPUT_CLK_X_12    0b1010
#define   PLL_INPUT_CLK_X_13    0b1011
#define   PLL_INPUT_CLK_X_14    0b1100
#define   PLL_INPUT_CLK_X_15    0b1101
#define   PLL_INPUT_CLK_X_16    0b1110
#define   PLL_INPUT_CLK_X_16    0b1111
 
/*******************************************/
/* the APB2 high-speed prescaler           */
/*******************************************/
#define  APB2_HCLK_NOT_DIVIDED       0b000
#define  APB2_HCLK_DIVIDED_BY_2      0b100
#define  APB2_HCLK_DIVIDED_BY_4      0b101
#define  APB2_HCLK_DIVIDED_BY_8      0b110
#define  APB2_HCLK_DIVIDED_BY_16     0b111

/*******************************************/
/* the APB1 high-speed prescaler           */
/*******************************************/
#define  APB1_HCLK_NOT_DIVIDED       0b000
#define  APB1_HCLK_DIVIDED_BY_2      0b100
#define  APB1_HCLK_DIVIDED_BY_4      0b101
#define  APB1_HCLK_DIVIDED_BY_8      0b110
#define  APB1_HCLK_DIVIDED_BY_16     0b111

/*******************************************/
/* the AHB high-speed prescaler            */
/*******************************************/
#define  AHB_HCLK_NOT_DIVIDED       0b0000
#define  AHB_HCLK_DIVIDED_BY_2      0b1000
#define  AHB_HCLK_DIVIDED_BY_4      0b1001
#define  AHB_HCLK_DIVIDED_BY_8      0b1010
#define  AHB_HCLK_DIVIDED_BY_16     0b1011
#define  AHB_HCLK_DIVIDED_BY_64     0b1100
#define  AHB_HCLK_DIVIDED_BY_128    0b1101
#define  AHB_HCLK_DIVIDED_BY_256    0b1110
#define  AHB_HCLK_DIVIDED_BY_512    0b1111

/*******************************************/
/* System clock switch                     */
/*******************************************/
#define  HSI_AS_SYSCLK          0b00
#define  HSE_AS_SYSCLK          0b01
#define  PLL_AS_SYSCLK          0b10

/*******************************************/
/* Define the RCC Peripheral               */
/*******************************************/ 
#define RCC ((RCC_type*)0x40021000)

#endif  /* end of RCC_PRIV_H file */
