/************************************************************/
/* Description:                                             */
/*             This file provides public macros and         */
/* API(s) that can be found in the DIO Component in         */
/* STM32F103C8 MC and can be used in the upper Components   */
/*==========================================================*/
/* Author : Ibrahim Sharaby                                 */ 
/* Date   : 20/2/2019                                       */
/* Version: 1.0                                             */
/************************************************************/

/**********************/
/* Preprocessor Guard */
/**********************/
#ifndef   DIO_INTERFACE_H
#define   DIO_INTERFACE_H


/****************************/
/* Avaliable pins in the MC */
/****************************/
#define   DIO_u8_PIN0             (u8)0
#define   DIO_u8_PIN1             (u8)1
#define   DIO_u8_PIN2             (u8)2
#define   DIO_u8_PIN3             (u8)3
#define   DIO_u8_PIN4             (u8)4
#define   DIO_u8_PIN5             (u8)5
#define   DIO_u8_PIN6             (u8)6
#define   DIO_u8_PIN7             (u8)7
#define   DIO_u8_PIN8             (u8)8
#define   DIO_u8_PIN9             (u8)9
#define   DIO_u8_PIN10            (u8)10
#define   DIO_u8_PIN11            (u8)11
#define   DIO_u8_PIN12            (u8)12
#define   DIO_u8_PIN13            (u8)13
#define   DIO_u8_PIN14            (u8)14
#define   DIO_u8_PIN15            (u8)15
#define   DIO_u8_PIN16            (u8)16
#define   DIO_u8_PIN17            (u8)17
#define   DIO_u8_PIN18            (u8)18
#define   DIO_u8_PIN19            (u8)19
#define   DIO_u8_PIN20            (u8)20
#define   DIO_u8_PIN21            (u8)21
#define   DIO_u8_PIN22            (u8)22
#define   DIO_u8_PIN23            (u8)23
#define   DIO_u8_PIN24            (u8)24
#define   DIO_u8_PIN25            (u8)25
#define   DIO_u8_PIN26            (u8)26
#define   DIO_u8_PIN27            (u8)27
#define   DIO_u8_PIN28            (u8)28
#define   DIO_u8_PIN29            (u8)29
#define   DIO_u8_PIN30            (u8)30
#define   DIO_u8_PIN31            (u8)31
#define   DIO_u8_PIN32            (u8)45
#define   DIO_u8_PIN33            (u8)46
#define   DIO_u8_PIN34            (u8)47
#define   DIO_u8_PIN35            (u8)48
#define   DIO_u8_PIN36            (u8)49


/************************************/
/* Voltage Logic Values in the MC   */
/************************************/
#define DIO_u8_HIGH              (u8)1
#define DIO_u8_LOW               (u8)0

/************************************/
/* Avaliable ports in the MC        */
/************************************/
#define DIO_u8_PORTA           (u8)0
#define DIO_u8_PORTB           (u8)1
#define DIO_u8_PORTC           (u8)2
#define DIO_u8_PORTD           (u8)3


/***********************************/
/* Input Pin Modes in the MC       */
/***********************************/
#define DIO_u8_INPUT_ANALOG          0b0000
#define DIO_u8_INPUT_FLOATING        0b0100
#define DIO_u8_INPUT_PULL_UP         0b1000
#define DIO_u8_INPUT_PULL_DOWN       0b1100


/***********************************/
/* Output Pin Modes in the MC      */
/***********************************/
/* OUTPUT_2M Mode and its Configuration */
/*======================================*/
#define DIO_u8_OUTPUT_2M_PP           0b0010
#define DIO_u8_OUTPUT_2M_OD           0b0110
#define DIO_u8_OUTPUT_2M_AFPP         0b1010
#define DIO_u8_OUTPUT_2M_AFOD         0b1110
/* OUTPUT_10M Mode and its Configuration */
/*=======================================*/
#define DIO_u8_OUTPUT_10M_PP           0b0001
#define DIO_u8_OUTPUT_10M_OD           0b0101
#define DIO_u8_OUTPUT_10M_AFPP         0b1001
#define DIO_u8_OUTPUT_10M_AFOD         0b1101
/* OUTPUT_50M Mode and its Configuration */
/*=======================================*/
#define DIO_u8_OUTPUT_50M_PP           0b0011
#define DIO_u8_OUTPUT_50M_OD           0b0111
#define DIO_u8_OUTPUT_50M_AFPP         0b1011
#define DIO_u8_OUTPUT_50M_AFOD         0b1111


/*************************************************************************************/
/* Description: initializes a pin's mode )	        						                     */
/*-----------------------------------------------------------------------------------*/
/* Inputs : void     : takes no arguments		         						                     */
/* Outputs: void     : returns no output value                                       */
/*************************************************************************************/
void DIO_voidInitialize(void);

/*************************************************************************************/
/* Description: sets a pin's value ( HIGH or LOW )	        						             */
/*-----------------------------------------------------------------------------------*/
/* Inputs : Copy_u8PinNB     : The Number of Pin		         						             */
/* 		      Copy_u8Value     : Required Value To Be Set                              */
/* Outputs:                                                                          */
/*          u8Error          : Error State												                   */
/*************************************************************************************/
u8 DIO_u8SetPinValue(u8 Copy_u8PinNB, u8 Copy_u8Value);

/*************************************************************************************/
/* Description: gets a pin's value 	        						                             */
/*-----------------------------------------------------------------------------------*/
/* Inputs : Copy_u8PinNB     : The Number of Pin		         						             */
/* 		      *PCopy_u8Value   : Where Required Value Will Be Stored                   */
/* Outputs:                                                                          */
/*          u8Error          : Error State												                   */
/*************************************************************************************/
u8 DIO_u8GetPinValue(u8 Copy_u8PinNB, u8*Copy_Pu8Value);

/*************************************************************************************/
/* Description: sets a pin's direction 	        						                         */
/*-----------------------------------------------------------------------------------*/
/* Inputs : Copy_u8PinNB     : The Number of Pin		         						             */
/* 		      Copy_u8Mode      : Required Direction                                    */
/* Outputs:                                                                          */
/*          u8Error          : Error State												                   */
/*************************************************************************************/
u8 DIO_u8SetPinDirection(u8 Copy_u8PinNB, u8 Copy_u8Mode);

/*************************************************************************************/
/* Description: Sets a Port's Value         						                             */
/*-----------------------------------------------------------------------------------*/
/* Inputs : Copy_u8PinNB     : Pin number in a certain port		         						   */
/* 		      Copy_u8Value     : Required Value                                        */
/* Outputs:                                                                          */
/*          u8Error          : Error State												                   */
/*************************************************************************************/
u8 DIO_u8SetPortValue(u8 Copy_u8PinNB, u8 Copy_u8Value);

/*************************************************************************************/
/* Description: Gets a Port's Value 	        						                           */
/*-----------------------------------------------------------------------------------*/
/* Inputs : Copy_u8PinNB      : Pin number in a certain port		         					   */
/* 		      *Copy_u8Value     : where output Value is store                          */
/* Outputs:                                                                          */
/*          u8Error          : Error State												                   */
/*************************************************************************************/
u8 DIO_u8GetPortValue(u8 Copy_u8PinNB, u8*Copy_Pu8Value);


#endif
