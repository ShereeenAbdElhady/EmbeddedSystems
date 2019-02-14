/************************************************************************************/
/* Description : This is a Private file that contains the private definitions and   */
/*               Private functions needed to use the led Component                  */
/* 				 This Driver Supports AVR ATmel32                                   */
/*																					*/
/* Created on  : Jan 29, 2019 														*/
/* Author      : OMDA																*/
/************************************************************************************/


/* File Guard                                */
#ifndef LED_COMPONENT_LED_PRIV_H_
#define LED_COMPONENT_LED_PRIV_H_

/* Private Definitions                       */
#define PRIVATE_MAX_STATE_NB   1

/* Defining the On and off states of the LED */
#define LED_ON               	   (u8)1
#define LED_OFF              	   (u8)0

/* Defining the type of the LED              */
#define LED_ACTIVE_LOW			   (u8)0
#define LED_ACTIVE_HIGH			   (u8)1

/* Defining Local Private Output Constant    */
#define LOCAL_OUTPUT			   (u8)1




#endif
