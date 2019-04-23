/*******************************************************/
/* Description:                                        */
/*             This file provides Implementation of    */
/* the API(s) that can be found in the RCC Component   */
/* in STM32F103C8 MC                                   */
/*=====================================================*/
/* Author : Ibrahim Sharaby                            */ 
/* Date   : 20/2/2019                                  */
/* Version: 1.0                                        */
/*******************************************************/

/*********************************/
/* included utility header files */
/*********************************/
#include "STD_TYPES.h"
#include "BIT_CALC.h"

#include "RCC_interface.h"
#include "RCC_priv.h"
#include "RCC_config.h"

/************************/
/* APIs' Implementation */
/************************/

/***************************************************************/
/* Description: initializes the system clock                   */
/*=============================================================*/
/* Inputs:                                                     */
/*        void : takes no input arguments                      */
/* Output:                                                     */
/*        void :  returns no value                             */
/***************************************************************/
void RCC_voidInitialize(void)
{
  /*********************************/
  /* check if HSI clock is enabled */
  /*********************************/
  if ( RCC_HSI_STATE == HSI_ON )
  {
	 SET_BIT(RCC->CR.WordAccess , 0 );
	 while(! (GET_BIT( RCC->CR.WordAccess , 1 )));
	}
  /*********************************/
  /* check if HSE clock is enabled */
  /*********************************/
	if ( RCC_HSE_STATE == HSE_ON )
  {
			SET_BIT( RCC->CR.WordAccess , 16 );
			while(! (GET_BIT( RCC->CR.WordAccess , 17 )));
	}
  /*********************************/
  /* check if PLL clock is enabled */
  /*********************************/
	if ( RCC_PLL_STATE == PLL_ON )
  {
    /************************/
		/* PLL SOURCE CONFIG.   */
    /************************/
			if ( RCC_PLL_SOURCE == HSI_PLLSRC)
      {
        if( ! (GET_BIT( RCC->CR.WordAccess , 1 ) ) )
        {
						SET_BIT( RCC->CR.WordAccess , 0 );
						while(! (GET_BIT( RCC->CR.WordAccess , 1 )));
				}
				CLR_BIT( RCC->CFGR.WordAccess , 16 );
			}
			else if ( RCC_PLL_SOURCE == HSE_PLLSRC)
      {
				if( ! (GET_BIT( RCC->CR.WordAccess , 17 ) ) )
        {
						SET_BIT( RCC->CR.WordAccess , 16 );
						while(! (GET_BIT( RCC->CR.WordAccess , 17 )));
				}
				SET_BIT( RCC->CFGR.WordAccess , 16 );
			}
		/***********************************************/
		/* PLL MULT CONFIG.                            */
    /***********************************************/
		ASSIGN_BIT( RCC->CFGR.WordAccess, 18, GET_BIT(RCC_PLLMUL,0) );
		ASSIGN_BIT( RCC->CFGR.WordAccess, 19, GET_BIT(RCC_PLLMUL,1) );
		ASSIGN_BIT( RCC->CFGR.WordAccess, 20, GET_BIT(RCC_PLLMUL,2) );
		ASSIGN_BIT( RCC->CFGR.WordAccess, 21, GET_BIT(RCC_PLLMUL,3) );

		/***********************************************/
    /* TURNING ON THE PLL                          */
    /***********************************************/
    SET_BIT( RCC->CR.WordAccess , 24 )    ;
		while(! (GET_BIT( RCC->CR.WordAccess , 25 )));
	}
  /*******************************/
  /* CHOOSING THE SYSCLK         */
  /*******************************/
  ASSIGN_BIT( RCC->CFGR.WordAccess,  0 , GET_BIT(RCC_SYSCLK,0));
	ASSIGN_BIT( RCC->CFGR.WordAccess,  1 , GET_BIT(RCC_SYSCLK,1));
  /*******************************/
	/* CHOOSING PRESCALERS VALUES  */
  /*******************************/
  /***********/
	/* AHB PRE */
  /***********/
  ASSIGN_NIBBLE( RCC->CFGR.WordAccess, 1, RCC_AHB_PRE);
  /************/
	/* APB1 PRE */
  /************/
	ASSIGN_BIT( RCC->CFGR.WordAccess,  8 , GET_BIT(RCC_APB1_PRE,0));
	ASSIGN_BIT( RCC->CFGR.WordAccess,  9 , GET_BIT(RCC_APB1_PRE,1));
	ASSIGN_BIT( RCC->CFGR.WordAccess,  10, GET_BIT(RCC_APB1_PRE,2));
  /************/
	/* APB2 PRE */
  /************/
	ASSIGN_BIT( RCC->CFGR.WordAccess,  11, GET_BIT(RCC_APB2_PRE,0)) ;
	ASSIGN_BIT( RCC->CFGR.WordAccess,  12, GET_BIT(RCC_APB2_PRE,1)) ;
	ASSIGN_BIT( RCC->CFGR.WordAccess,  13, GET_BIT(RCC_APB2_PRE,2)) ;
}

/***************************************************************/
/* Description: enables a certain peripheral on a certain bus  */
/*=============================================================*/
/* Inputs:                                                     */
/*        Copy_u8Peripheral : a peripheral to be enabled       */
/* Output:                                                     */
/*        Local_u8Result    : to represent whetther peripheral */
/*                              has been enabled or not        */
/***************************************************************/
u8 RCC_u8EnablePeripheralClock(u8 Copy_u8Peripheral)
{
  u8 Local_u8Result = STD_u8_OK;
  
  /**************************************/
  /* GPIO peripheral exists on APB2 Bus */
  /**************************************/
  switch(Copy_u8Peripheral)
  {
    /* enable PORTA Clock */
    case RCC_u8_GPIOA:  RCC->APB2ENR.BitAccess.BIT2  = 1; break;
    /* enable PORTB Clock */
    case RCC_u8_GPIOB:  RCC->APB2ENR.BitAccess.BIT3  = 1; break;
    /* enable PORTC Clock */
    case RCC_u8_GPIOC:  RCC->APB2ENR.BitAccess.BIT4  = 1; break;
    /* enable PORTD Clock */
    case RCC_u8_GPIOD:  RCC->APB2ENR.BitAccess.BIT5  = 1; break;
    /* if input peripheral is not a GPIO peripheral */
    default          : Local_u8Result = STD_u8_ERROR;
  }
  return Local_u8Result;
}


