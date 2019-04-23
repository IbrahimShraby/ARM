/***************************************************************/
/* Description:                                                */
/*             This file provides public macros and            */
/* API(s) that can be found in the RCC Component in            */
/* STM32F103C8 MC and can be used in the up stream components  */
/*=============================================================*/
/* Author : Ibrahim Sharaby                                    */ 
/* Date   : 20/2/2019                                          */
/* Version: 1.0                                                */
/***************************************************************/

/**********************/
/* Preprocessor Guard */
/**********************/
#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

/*****************************************/
/* GPIO Peripheral to enable their clock */
/*****************************************/
#define  RCC_u8_GPIOA      (u8)0
#define  RCC_u8_GPIOB      (u8)1
#define  RCC_u8_GPIOC      (u8)2
#define  RCC_u8_GPIOD      (u8)3

/************************/
/* APIs' prototypes     */
/************************/

/***************************************************************/
/* Description: initializes the system clock                   */
/*=============================================================*/
/* Inputs:                                                     */
/*        void : takes no input arguments                      */
/* Output:                                                     */
/*        void :  returns no value                             */
/***************************************************************/
void RCC_voidInitialize(void);

/***************************************************************/
/* Description: enables a certain peripheral on a certain bus  */
/*=============================================================*/
/* Inputs:                                                     */
/*        Copy_u8Peripheral : a peripheral to be enabled       */
/* Output:                                                     */
/*        Local_u8Result    : to represent whetther peripheral */
/*                              has been enabled or not        */
/***************************************************************/
u8 RCC_u8EnablePeripheralClock(u8 Copy_u8Peripheral);


#endif   /* end of RCC_INTERFACE_H file */
