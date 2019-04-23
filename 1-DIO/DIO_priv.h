/*************************************************/
/* Description:                                  */
/*             This file provides private        */
/* configuration parameters like registers'      */
/* addresses in the DIO Component In STM32F103C8 */
/* Medium Denisty                                */
/*===============================================*/
/* Author : Ibrahim Sharaby                      */ 
/* Date   : 20/2/2019                            */
/* Version: 1.0                                  */
/*************************************************/

/* Header Guard */
#ifndef DIO_PRIV_H_
#define DIO_PRIV_H_

/**********************************/
/* Define The GPIO peripheral     */
/* in STM31F10xxx Medium Denisty  */
/**********************************/
typedef struct
{
  Register_32bit  CRL;
  Register_32bit  CRH;
  Register_32bit  IDR;
  Register_32bit  ODR;
  Register_32bit  BSRR;
  Register_32bit  BRR;
  Register_32bit  LCKR;
}GPIO;

/*********************************/
/* Define four Gpio Ports In     */
/* STM31F10xxx Medium Denisty    */
/*********************************/
#define  DIO_GPIOA   ((GPIO*)0x40010800)
#define  DIO_GPIOB   ((GPIO*)0x40010C00)
#define  DIO_GPIOC   ((GPIO*)0x40011000)
#define  DIO_GPIOD   ((GPIO*)0x40011400)

/***********************************************************/
/* prototypes of these two private functions in DIO_priv.h */
/***********************************************************/

/*********************************************************/
/* Description: sets a certain bit in the BSRR register  */
/*-------------------------------------------------------*/
/* Inputs : Copy_u8Port     : The Number of Pin		       */
/* 		      Copy_u8Pin      : Required Value To Be Set   */
/* Outputs:                                              */
/*          u8Error          : Error State							 */
/*********************************************************/
static u8 u8SetPin(u8 Copy_u8Port, u8 Copy_u8Pin);

/*********************************************************/
/* Description: sets a certain bit in the BRR register 	 */
/*-------------------------------------------------------*/
/* Inputs : Copy_u8Port     : The Number of Pin		       */
/* 		      Copy_u8Pin      : Required Value To Be Set   */
/* Outputs:                                              */
/*          u8Error          : Error State							 */
/*********************************************************/
static u8 u8RstPin(u8 Copy_u8Port, u8 Copy_u8Pin);

#endif
