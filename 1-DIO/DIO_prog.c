/********************************************************/
/* Description:                                         */
/*             This file provides The Implementation of */
/* the API(s) that can be found in the DIO Component    */
/* in STM32F103C8 MC                                    */
/*======================================================*/
/* Author : Ibrahim Sharaby                             */ 
/* Date   : 20/2/2019                                   */
/* Version: 1.0                                         */
/********************************************************/

/********************************/
/* include utility header files */
/********************************/
#include "BIT_CALC.h"
#include "STD_TYPES.h"
#include "Dio_interface.h"
#include "Dio_priv.h"
#include "Dio_config.h"


/*************************************************************************************/
/* Description: initializes a pin's mode(directions), and initial values	        	 */
/*-----------------------------------------------------------------------------------*/
/* Inputs : void     : takes no input arguments		         						               */
/* Outputs: void     : returns no output value                                       */
/*************************************************************************************/
void DIO_voidInitialize(void)
{
  /****************************************************/
  /* set pins with initial directions                 */
  /****************************************************/
  DIO_u8SetPinDirection(DIO_u8_PIN0,  DIO_u8_PIN0_INIT_DIR );
  DIO_u8SetPinDirection(DIO_u8_PIN1,  DIO_u8_PIN1_INIT_DIR );
  DIO_u8SetPinDirection(DIO_u8_PIN2,  DIO_u8_PIN2_INIT_DIR );
  DIO_u8SetPinDirection(DIO_u8_PIN3,  DIO_u8_PIN3_INIT_DIR );
  DIO_u8SetPinDirection(DIO_u8_PIN4,  DIO_u8_PIN4_INIT_DIR );
  DIO_u8SetPinDirection(DIO_u8_PIN5,  DIO_u8_PIN5_INIT_DIR );
  DIO_u8SetPinDirection(DIO_u8_PIN6,  DIO_u8_PIN6_INIT_DIR );
  DIO_u8SetPinDirection(DIO_u8_PIN7,  DIO_u8_PIN7_INIT_DIR );
  DIO_u8SetPinDirection(DIO_u8_PIN8,  DIO_u8_PIN8_INIT_DIR );
  DIO_u8SetPinDirection(DIO_u8_PIN9,  DIO_u8_PIN9_INIT_DIR );
  DIO_u8SetPinDirection(DIO_u8_PIN10, DIO_u8_PIN10_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN11, DIO_u8_PIN11_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN12, DIO_u8_PIN12_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN13, DIO_u8_PIN13_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN14, DIO_u8_PIN14_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN15, DIO_u8_PIN15_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN16, DIO_u8_PIN16_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN17, DIO_u8_PIN17_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN18, DIO_u8_PIN18_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN19, DIO_u8_PIN19_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN20, DIO_u8_PIN20_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN21, DIO_u8_PIN21_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN22, DIO_u8_PIN22_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN23, DIO_u8_PIN23_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN24, DIO_u8_PIN24_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN25, DIO_u8_PIN25_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN26, DIO_u8_PIN26_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN27, DIO_u8_PIN27_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN28, DIO_u8_PIN28_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN29, DIO_u8_PIN29_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN30, DIO_u8_PIN30_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN31, DIO_u8_PIN31_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN32, DIO_u8_PIN32_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN33, DIO_u8_PIN33_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN34, DIO_u8_PIN34_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN35, DIO_u8_PIN35_INIT_DIR);
  DIO_u8SetPinDirection(DIO_u8_PIN36, DIO_u8_PIN36_INIT_DIR);
  
  /****************************************************/
  /* set pins with initial values                     */
  /****************************************************/
  DIO_u8SetPinValue( DIO_u8_PIN0,  DIO_u8_PIN0_INIT_VAL  );
	DIO_u8SetPinValue( DIO_u8_PIN1,  DIO_u8_PIN1_INIT_VAL  );
	DIO_u8SetPinValue( DIO_u8_PIN2,  DIO_u8_PIN2_INIT_VAL  );
	DIO_u8SetPinValue( DIO_u8_PIN3,  DIO_u8_PIN3_INIT_VAL  );
	DIO_u8SetPinValue( DIO_u8_PIN4,  DIO_u8_PIN4_INIT_VAL  );
	DIO_u8SetPinValue( DIO_u8_PIN5,  DIO_u8_PIN5_INIT_VAL  );
	DIO_u8SetPinValue( DIO_u8_PIN6,  DIO_u8_PIN6_INIT_VAL  );
	DIO_u8SetPinValue( DIO_u8_PIN7,  DIO_u8_PIN7_INIT_VAL  );
	DIO_u8SetPinValue( DIO_u8_PIN8,  DIO_u8_PIN8_INIT_VAL  );
	DIO_u8SetPinValue( DIO_u8_PIN9,  DIO_u8_PIN9_INIT_VAL  );
	DIO_u8SetPinValue( DIO_u8_PIN10, DIO_u8_PIN10_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN11, DIO_u8_PIN11_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN12, DIO_u8_PIN12_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN13, DIO_u8_PIN13_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN14, DIO_u8_PIN14_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN15, DIO_u8_PIN15_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN16, DIO_u8_PIN16_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN17, DIO_u8_PIN17_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN18, DIO_u8_PIN18_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN19, DIO_u8_PIN19_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN20, DIO_u8_PIN20_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN21, DIO_u8_PIN21_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN22, DIO_u8_PIN22_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN23, DIO_u8_PIN23_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN24, DIO_u8_PIN24_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN25, DIO_u8_PIN25_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN26, DIO_u8_PIN26_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN27, DIO_u8_PIN27_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN28, DIO_u8_PIN28_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN29, DIO_u8_PIN29_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN30, DIO_u8_PIN30_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN31, DIO_u8_PIN31_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN32, DIO_u8_PIN32_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN33, DIO_u8_PIN33_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN34, DIO_u8_PIN34_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN35, DIO_u8_PIN35_INIT_VAL );
	DIO_u8SetPinValue( DIO_u8_PIN36, DIO_u8_PIN36_INIT_VAL );
}

/*************************************************************************************/
/* Description: sets a pin's value ( HIGH or LOW )	        						             */
/*-----------------------------------------------------------------------------------*/
/* Inputs : Copy_u8PinNB     : The Number of Pin		         						             */
/* 		      Copy_u8Value     : Required Value To Be Set                              */
/* Outputs:                                                                          */
/*          u8Error          : Error State												                   */
/*************************************************************************************/
u8 DIO_u8SetPinValue(u8 Copy_u8PinNB, u8 Copy_u8Value)
{
  u8 Local_u8Result = STD_u8_OK;
  u8 Local_u8Actualpin = Copy_u8PinNB % 16;
  u8 Local_u8ActualPrt = Copy_u8PinNB / 16;
  
  switch(Copy_u8Value)
  {
    case DIO_u8_HIGH: Local_u8Result = u8SetPin(Local_u8ActualPrt, Local_u8Actualpin); break;
    case DIO_u8_LOW : Local_u8Result = u8RstPin(Local_u8ActualPrt, Local_u8Actualpin); break;
    default         : Local_u8Result = STD_u8_ERROR;
  }
  
  return Local_u8Result;
}

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
static u8 u8SetPin(u8 Copy_u8Port, u8 Copy_u8Pin)
{
  u8 Local_u8Result = STD_u8_OK;
  switch(Copy_u8Port)
  {
    case DIO_u8_PORTA:  DIO_GPIOA->BSRR.WordAccess = (1<<Copy_u8Pin);break;
    case DIO_u8_PORTB:  DIO_GPIOB->BSRR.WordAccess = (1<<Copy_u8Pin);break;
    case DIO_u8_PORTC:  DIO_GPIOC->BSRR.WordAccess = (1<<Copy_u8Pin);break;
    case DIO_u8_PORTD:  DIO_GPIOD->BSRR.WordAccess = (1<<Copy_u8Pin);break;
    default          :  Local_u8Result = STD_u8_ERROR;
  }
  return Local_u8Result;
}

/*********************************************************/
/* Description: sets a certain bit in the BRR register 	 */
/*-------------------------------------------------------*/
/* Inputs : Copy_u8Port     : The Number of Pin		       */
/* 		      Copy_u8Pin      : Required Value To Be Set   */
/* Outputs:                                              */
/*          u8Error          : Error State							 */
/*********************************************************/
static u8 u8RstPin(u8 Copy_u8Port, u8 Copy_u8Pin)
{
  u8 Local_u8Result = STD_u8_OK;
  switch(Copy_u8Port)
  {
    case DIO_u8_PORTA:  DIO_GPIOA->BRR.WordAccess = (1<<Copy_u8Pin);break;
    case DIO_u8_PORTB:  DIO_GPIOB->BRR.WordAccess = (1<<Copy_u8Pin);break;
    case DIO_u8_PORTC:  DIO_GPIOC->BRR.WordAccess = (1<<Copy_u8Pin);break;
    case DIO_u8_PORTD:  DIO_GPIOD->BRR.WordAccess = (1<<Copy_u8Pin);break;
    default          :  Local_u8Result = STD_u8_ERROR;
  }
  return Local_u8Result;
}

/*************************************************************************************/
/* Description: sets a pin's direction 	        						                         */
/*-----------------------------------------------------------------------------------*/
/* Inputs : Copy_u8PinNB     : The Number of Pin		         						             */
/* 		      Copy_u8Mode      : Required Direction                                    */
/* Outputs:                                                                          */
/*          u8Error          : Error State												                   */
/*************************************************************************************/
u8 DIO_u8SetPinDirection(u8 Copy_u8PinNB, u8 Copy_u8Mode)
{
  u8 Local_u8Result = STD_u8_OK;
  u8 Local_u8Actualpin = Copy_u8PinNB % 16;
  u8 Local_u8ActualPrt = Copy_u8PinNB / 16;
  
  if(Copy_u8Mode == DIO_u8_INPUT_PULL_UP)
  {
    /* Set ODR -> 1*/
    /* optimize this code */
    switch(Local_u8ActualPrt)
    {
      case DIO_u8_PORTA: SET_BIT(DIO_GPIOA->ODR.WordAccess, Local_u8Actualpin);break;
      case DIO_u8_PORTB: SET_BIT(DIO_GPIOB->ODR.WordAccess, Local_u8Actualpin);break;
      case DIO_u8_PORTC: SET_BIT(DIO_GPIOC->ODR.WordAccess, Local_u8Actualpin);break;
      case DIO_u8_PORTD: SET_BIT(DIO_GPIOD->ODR.WordAccess, Local_u8Actualpin);break;
    }
    
  }
  else if(Copy_u8Mode == DIO_u8_INPUT_PULL_DOWN)
  {
    /* Set ODR -> 0*/
    switch(Local_u8ActualPrt)
    {
      case DIO_u8_PORTA : CLR_BIT(DIO_GPIOA->ODR.WordAccess, Local_u8Actualpin);break;
      case DIO_u8_PORTB : CLR_BIT(DIO_GPIOB->ODR.WordAccess, Local_u8Actualpin);break;
      case DIO_u8_PORTC : CLR_BIT(DIO_GPIOC->ODR.WordAccess, Local_u8Actualpin);break;
      case DIO_u8_PORTD : CLR_BIT(DIO_GPIOD->ODR.WordAccess, Local_u8Actualpin);break;
    }
    Copy_u8Mode = DIO_u8_INPUT_PULL_UP;
  }
  
  if((Local_u8Actualpin <= 7))                /*مش محتاج اعمل تشيك انه من زيرو لسبعه علشان هو اصلا u8  يعنى قمته من 0  ل 255 */
  {
    if(Copy_u8Mode < DIO_u8_OUTPUT_50M_AFOD)
    {
      switch(Local_u8ActualPrt)
      {
        case DIO_u8_PORTA :  ASSIGN_NIBBLE(DIO_GPIOA->CRL.WordAccess, Local_u8Actualpin, Copy_u8Mode);break;
        case DIO_u8_PORTB :  ASSIGN_NIBBLE(DIO_GPIOB->CRL.WordAccess, Local_u8Actualpin, Copy_u8Mode);break;
        case DIO_u8_PORTC :  ASSIGN_NIBBLE(DIO_GPIOC->CRL.WordAccess, Local_u8Actualpin, Copy_u8Mode);break;
        case DIO_u8_PORTD :  ASSIGN_NIBBLE(DIO_GPIOD->CRL.WordAccess, Local_u8Actualpin, Copy_u8Mode);break;
        default           :    Local_u8Result = STD_u8_ERROR;
      }
    }
    else Local_u8Result = STD_u8_ERROR;
  }
  else 
  {
    Local_u8Actualpin -= 8;
    if(Copy_u8Mode < DIO_u8_OUTPUT_50M_AFOD)
    {
      switch(Local_u8ActualPrt)
      {
        case DIO_u8_PORTA :  ASSIGN_NIBBLE(DIO_GPIOA->CRH.WordAccess, Local_u8Actualpin, Copy_u8Mode);break;
        case DIO_u8_PORTB :  ASSIGN_NIBBLE(DIO_GPIOB->CRH.WordAccess, Local_u8Actualpin, Copy_u8Mode);break;
        case DIO_u8_PORTC :  ASSIGN_NIBBLE(DIO_GPIOC->CRH.WordAccess, Local_u8Actualpin, Copy_u8Mode);break;
        case DIO_u8_PORTD :  ASSIGN_NIBBLE(DIO_GPIOD->CRH.WordAccess, Local_u8Actualpin, Copy_u8Mode);break;
        default           :    Local_u8Result = STD_u8_ERROR;
      }
    }
    else Local_u8Result = STD_u8_ERROR;
  }
  return Local_u8Result;
}

/*************************************************************************************/
/* Description: gets a pin's value 	        						                             */
/*-----------------------------------------------------------------------------------*/
/* Inputs : Copy_u8PinNB     : The Number of Pin		         						             */
/* 		      *PCopy_u8Value   : Where Required Value Will Be Stored                   */
/* Outputs:                                                                          */
/*          u8Error          : Error State												                   */
/*************************************************************************************/
u8 DIO_u8GetPinValue(u8 Copy_u8PinNB, u8*Copy_Pu8Value)
{
  u8 Local_u8Result = STD_u8_OK;
  u8 Local_u8Actualpin = Copy_u8PinNB % 16;
  u8 Local_u8ActualPrt = Copy_u8PinNB / 16;
  
  switch(Local_u8ActualPrt)
  {
    case DIO_u8_PORTA :  *Copy_Pu8Value = GET_BIT(DIO_GPIOA->IDR.WordAccess, Local_u8Actualpin); break;
    case DIO_u8_PORTB :  *Copy_Pu8Value = GET_BIT(DIO_GPIOB->IDR.WordAccess, Local_u8Actualpin); break;
    case DIO_u8_PORTC :  *Copy_Pu8Value = GET_BIT(DIO_GPIOC->IDR.WordAccess, Local_u8Actualpin); break;
    case DIO_u8_PORTD :  *Copy_Pu8Value = GET_BIT(DIO_GPIOD->IDR.WordAccess, Local_u8Actualpin); break;
    default           :    Local_u8Result = STD_u8_ERROR;
  }
  return Local_u8Result;
}
  
/*************************************************************************************/
/* Description: Sets a Port's Value         						                             */
/*-----------------------------------------------------------------------------------*/
/* Inputs : Copy_u8PinNB     : Pin number in a certain port		         						   */
/* 		      Copy_u8Value     : Required Value                                        */
/* Outputs:                                                                          */
/*          u8Error          : Error State												                   */
/*************************************************************************************/
u8 DIO_u8SetPortValue(u8 Copy_u8PinNB, u8 Copy_u8Value)
{
  u8 Local_u8Result = STD_u8_OK;
  u8 Local_u8Actualpin = Copy_u8PinNB % 16;
  u8 Local_u8ActualPrt = Copy_u8PinNB / 16;
  
  switch(Local_u8ActualPrt)
  {
    case DIO_u8_PORTA : DIO_GPIOA->ODR.WordAccess = Copy_u8Value; break;
    case DIO_u8_PORTB : DIO_GPIOB->ODR.WordAccess = Copy_u8Value; break;
    case DIO_u8_PORTC : DIO_GPIOC->ODR.WordAccess = Copy_u8Value; break;
    case DIO_u8_PORTD : DIO_GPIOD->ODR.WordAccess = Copy_u8Value; break;
    default           :Local_u8Result = STD_u8_ERROR;
  }
  
  return Local_u8Result;
  
}

/*************************************************************************************/
/* Description: Gets a Port's Value 	        						                           */
/*-----------------------------------------------------------------------------------*/
/* Inputs : Copy_u8PinNB      : Pin number in a certain port		         					   */
/* 		      *Copy_u8Value     : where output Value is store                          */
/* Outputs:                                                                          */
/*          u8Error          : Error State												                   */
/*************************************************************************************/
u8 DIO_u8GetPortValue(u8 Copy_u8PinNB, u8*Copy_Pu8Value)
{
  u8 Local_u8Result = STD_u8_OK;
  u8 Local_u8ActualPrt = Copy_u8PinNB / 16;
  
  switch(Local_u8ActualPrt)
  {
    case DIO_u8_PORTA :  *Copy_Pu8Value = DIO_GPIOA->IDR.WordAccess; break;
    case DIO_u8_PORTB :  *Copy_Pu8Value = DIO_GPIOB->IDR.WordAccess; break;
    case DIO_u8_PORTC :  *Copy_Pu8Value = DIO_GPIOC->IDR.WordAccess; break;
    case DIO_u8_PORTD :  *Copy_Pu8Value = DIO_GPIOD->IDR.WordAccess; break;
    default           :  Local_u8Result = STD_u8_ERROR;
  }
  return Local_u8Result;
}
