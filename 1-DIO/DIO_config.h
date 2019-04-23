/************************************************************/
/* Description:                                             */
/*             This file provides The initial configuration */
/* of the Pins that can be found in the DIO Component       */
/* in STM32F103C8 MC                                        */
/*==========================================================*/
/* Author : Ibrahim Sharaby                                 */ 
/* Date   : 20/2/2019                                       */
/* Version: 1.0                                             */
/************************************************************/

/**********************/
/* Preprocessor Guard */
/**********************/
#ifndef DIO_CONFIG_H
#define DIO_CONFIG_H

/*************************************/
/* initial directions for Mc's Pins  */
/*************************************/
#define   DIO_u8_PIN0_INIT_DIR     DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN1_INIT_DIR     DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN2_INIT_DIR     DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN3_INIT_DIR     DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN4_INIT_DIR     DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN5_INIT_DIR     DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN6_INIT_DIR     DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN7_INIT_DIR     DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN8_INIT_DIR     DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN9_INIT_DIR     DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN10_INIT_DIR    DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN11_INIT_DIR    DIO_u8_INPUT_PULL_UP
#define   DIO_u8_PIN12_INIT_DIR    DIO_u8_INPUT_PULL_UP
#define   DIO_u8_PIN13_INIT_DIR    DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN14_INIT_DIR    DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN15_INIT_DIR    DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN16_INIT_DIR    DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN17_INIT_DIR    DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN18_INIT_DIR    DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN19_INIT_DIR    DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN20_INIT_DIR    DIO_u8_INPUT_PULL_UP
#define   DIO_u8_PIN21_INIT_DIR    DIO_u8_INPUT_PULL_UP
#define   DIO_u8_PIN22_INIT_DIR    DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN23_INIT_DIR    DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN24_INIT_DIR    DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN25_INIT_DIR    DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN26_INIT_DIR    DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN27_INIT_DIR    DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN28_INIT_DIR    DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN29_INIT_DIR    DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN30_INIT_DIR    DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN31_INIT_DIR    DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN32_INIT_DIR    DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN33_INIT_DIR    DIO_u8_INPUT_PULL_UP
#define   DIO_u8_PIN34_INIT_DIR    DIO_u8_INPUT_PULL_UP
#define   DIO_u8_PIN35_INIT_DIR    DIO_u8_OUTPUT_2M_PP
#define   DIO_u8_PIN36_INIT_DIR    DIO_u8_OUTPUT_2M_PP


/*************************************/
/* initial values for Mc's Pins      */
/*************************************/
#define   DIO_u8_PIN0_INIT_VAL     DIO_u8_HIGH
#define   DIO_u8_PIN1_INIT_VAL     DIO_u8_HIGH
#define   DIO_u8_PIN2_INIT_VAL     DIO_u8_HIGH
#define   DIO_u8_PIN3_INIT_VAL     DIO_u8_HIGH
#define   DIO_u8_PIN4_INIT_VAL     DIO_u8_HIGH
#define   DIO_u8_PIN5_INIT_VAL     DIO_u8_HIGH
#define   DIO_u8_PIN6_INIT_VAL     DIO_u8_HIGH
#define   DIO_u8_PIN7_INIT_VAL     DIO_u8_HIGH
#define   DIO_u8_PIN8_INIT_VAL     DIO_u8_HIGH
#define   DIO_u8_PIN9_INIT_VAL     DIO_u8_HIGH
#define   DIO_u8_PIN10_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN11_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN12_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN13_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN14_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN15_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN16_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN17_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN18_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN19_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN20_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN21_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN22_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN23_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN24_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN25_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN26_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN27_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN28_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN29_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN30_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN31_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN32_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN33_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN34_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN35_INIT_VAL    DIO_u8_HIGH
#define   DIO_u8_PIN36_INIT_VAL    DIO_u8_HIGH



#endif
