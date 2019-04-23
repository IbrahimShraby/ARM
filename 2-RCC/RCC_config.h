/********************************************************/
/* Description:                                         */
/*             This file provides public configuration  */
/* parameters to configure the clock peripheral in the  */
/* Micro.Controller                                     */
/*======================================================*/
/* Author : Ibrahim Sharaby                             */ 
/* Date   : 20/2/2019                                   */
/* Version: 1.0                                         */
/********************************************************/

/*********************/
/* Header File Guard */
/*********************/
#ifndef RCC_CONFIG_H
#define RCC_CONFIG_H

/*******************************************/
/* Configure the System Clock Source       */
/* Range:                                  */
/*      HSI_CLOCK                          */
/*      HSE_CLOCK                          */
/*      PLL_CLOCK                          */
/*******************************************/
#define   RCC_CLOCK_SOURCE       HSI_CLOCK

/*******************************************/
/* Configure the HSI Clock State           */
/* Range:                                  */
/*        HSI_ON                           */
/*        HSI_OFF                          */
/*******************************************/
#define   RCC_HSI_STATE          HSI_ON

/*******************************************/
/* Configure the HSE Clock State           */
/* Range:                                  */
/*        HSE_ON                           */
/*        HSE_OFF                          */
/*******************************************/
#define   RCC_HSE_STATE          HSE_ON

/*******************************************/
/* Configure the PLL Clock State           */
/* Range:                                  */
/*        PLL_ON                           */
/*        PLL_OFF                          */
/*******************************************/
#define   RCC_PLL_STATE          PLL_ON

/*******************************************/
/* Configure the PLL Clock Source          */
/* Range:                                  */
/*        HSI_PLLSRC                       */
/*        HSE_PLLSRC                       */
/*******************************************/
#define   RCC_PLL_SOURCE          HSI_PLLSRC

/*******************************************/
/* Configure the PLL Multiplication Factor */
/* Range:                                  */
/*        PLL_INPUT_CLK_X_2                */
/*        PLL_INPUT_CLK_X_3                */
/*        PLL_INPUT_CLK_X_4                */
/*        PLL_INPUT_CLK_X_5                */
/*        PLL_INPUT_CLK_X_6                */
/*        PLL_INPUT_CLK_X_7                */
/*        PLL_INPUT_CLK_X_8                */
/*        PLL_INPUT_CLK_X_9                */
/*        PLL_INPUT_CLK_X_10               */
/*        PLL_INPUT_CLK_X_11               */
/*        PLL_INPUT_CLK_X_12               */
/*        PLL_INPUT_CLK_X_13               */
/*        PLL_INPUT_CLK_X_14               */
/*        PLL_INPUT_CLK_X_15               */
/*        PLL_INPUT_CLK_X_16               */
/*        PLL_INPUT_CLK_X_16               */
/*                                         */
/*******************************************/
#define   RCC_PLLMUL            PLL_INPUT_CLK_X_2

/*******************************************/
/* Configure the APB high-speed prescaler  */
/* (APB2) Range:                           */
/*        APB2_HCLK_NOT_DIVIDED            */
/*        APB2_HCLK_DIVIDED_BY_2           */
/*        APB2_HCLK_DIVIDED_BY_4           */
/*        APB2_HCLK_DIVIDED_BY_8           */
/*        APB2_HCLK_DIVIDED_BY_16          */
/*******************************************/
#define   RCC_APB2_PRE            APB2_HCLK_DIVIDED_BY_2

/*******************************************/
/* Configure the APB high-speed prescaler  */
/* (APB1) Range:                           */
/*        APB1_HCLK_NOT_DIVIDED            */
/*        APB1_HCLK_DIVIDED_BY_2           */
/*        APB1_HCLK_DIVIDED_BY_4           */
/*        APB1_HCLK_DIVIDED_BY_8           */
/*        APB1_HCLK_DIVIDED_BY_16          */
/*******************************************/
#define   RCC_APB1_PRE            APB1_HCLK_DIVIDED_BY_2

/*******************************************/
/* Configure the AHB high-speed prescaler  */
/*  Range:                                 */
/*        AHB_HCLK_NOT_DIVIDED             */
/*        AHB_HCLK_DIVIDED_BY_2            */
/*        AHB_HCLK_DIVIDED_BY_4            */
/*        AHB_HCLK_DIVIDED_BY_8            */
/*        AHB_HCLK_DIVIDED_BY_16           */
/*        AHB_HCLK_DIVIDED_BY_64           */
/*        AHB_HCLK_DIVIDED_BY_128          */
/*        AHB_HCLK_DIVIDED_BY_256          */
/*        AHB_HCLK_DIVIDED_BY_512          */
/*******************************************/
#define   RCC_AHB_PRE            AHB_HCLK_DIVIDED_BY_2

/*******************************************/
/* Configure the System clock switch       */
/* to enable a certain clock source  to be */
/* the main system clock                   */
/*  Range:                                 */
/*        HSI_AS_SYSCLK                    */
/*        HSE_AS_SYSCLK                    */
/*        PLL_AS_SYSCLK                    */
/*******************************************/
#define   RCC_SYSCLK            HSI_AS_SYSCLK



#endif   /* end of RCC_CONFIG_H file */