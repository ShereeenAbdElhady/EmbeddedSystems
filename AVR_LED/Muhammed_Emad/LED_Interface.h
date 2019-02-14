/************************************************************************************/
/* Description : This is an Interface file that contains the public definitions and */
/*               public functions needed to use the led Component in high efficiency*/
/* 				 This Driver Supports AVR ATmel32                                   */
/*																					*/
/* Created on  : Jan 29, 2019 														*/
/* Author      : OMDA																*/
/************************************************************************************/


/* File Guard 								*/
#ifndef LED_COMPONENT_LED_INTERFACE_H_
#define LED_COMPONENT_LED_INTERFACE_H_





/*************************************   AVR  DEFINITIONS   ************************************/
/* Description : Defining LED Pins On AVR ATmel32, Which contain 32 Pins Ranges from (0 -> 31) */
/*                                                                                             */
/* Example : #define LED_Pin21  													           */
/*																						       */
#define LED_PIN0    			   (u8)0
#define LED_PIN1    			   (u8)1
#define LED_PIN2    			   (u8)2
#define LED_PIN3    			   (u8)3
#define LED_PIN4    			   (u8)4
#define LED_PIN5    			   (u8)5
#define LED_PIN6    			   (u8)6
#define LED_PIN7    			   (u8)7

#define LED_PIN8    			   (u8)8
#define LED_PIN9    			   (u8)9
#define LED_PIN10    			   (u8)10
#define LED_PIN11    			   (u8)11
#define LED_PIN12    			   (u8)12
#define LED_PIN13    			   (u8)13
#define LED_PIN14    			   (u8)14
#define LED_PIN15    			   (u8)15

#define LED_PIN16    			   (u8)16
#define LED_PIN17    			   (u8)17
#define LED_PIN18    			   (u8)18
#define LED_PIN19    			   (u8)19
#define LED_PIN20    			   (u8)20
#define LED_PIN21    			   (u8)21
#define LED_PIN22    			   (u8)22
#define LED_PIN23    			   (u8)23

#define LED_PIN24    			   (u8)24
#define LED_PIN25    			   (u8)25
#define LED_PIN26    			   (u8)26
#define LED_PIN27    			   (u8)27
#define LED_PIN28    			   (u8)28
#define LED_PIN29    			   (u8)29
#define LED_PIN30    			   (u8)30
#define LED_PIN31    			   (u8)31
/*																						       */
/***********************************************************************************************/





/*************************************************************************************/
/* Description: Initialize the LEDs Pins and output State   (On or Off)              */
/*																					 */
/* Inputs:  Copy_u8PinNB     -> Pin Number connected to LED							 */
/*			Copy_InitState   -> LED Initial State (On or Off)                        */
/* Outputs: u8Error : Error State													 */
/*																					 */

u8 LED_u8Init( u8 Copy_u8LEDNB ) ;

/*																					 */
/*************************************************************************************/


/*************************************************************************************/
/* Description: Turns the LED On                                                     */
/*																					 */
/* Inputs:  Copy_u8PinNB     -> LED Pin Number to be turned on						 */
/* Outputs: u8Error : Error State													 */
/*																					 */

u8 LED_u8TurnOn(u8 Copy_u8LEDNB) ;

/*																					 */
/*************************************************************************************/


/*************************************************************************************/
/* Description: Turns the LED Off                                                    */
/*																					 */
/* Inputs:  Copy_u8PinNB     -> LED Pin Number to be turned off						 */
/* Outputs: u8Error : Error State													 */
/*																					 */

u8 LED_u8TurnOff(u8 Copy_u8LEDNB) ;

/*																					 */
/*************************************************************************************/



#endif /* LED_COMPONENT_LED_INTERFACE_H_ */
