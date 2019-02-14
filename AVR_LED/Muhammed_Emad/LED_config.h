/************************************************************************************/
/* Description : This is a configuration file that contains the public Configuration*/
/*               needed to use the led Component in high efficiency                 */
/* 				 This Driver Supports AVR ATmel32                      			    */
/*																					*/
/* Created on  : Jan 29, 2019 														*/
/* Author      : OMDA																*/
/************************************************************************************/







/* File Guard ***********************************************/
#ifndef LED_COMPONENT_LED_CONFIG_H_
#define LED_COMPONENT_LED_CONFIG_H_


#include "LED_Interface.h"
#include "LED_priv.h"



/* Define Number of LEDs used *******************************/
/*															*/
#define LED_NUMBER_OF_LED 			1
/*															*/
/************************************************************/



/* Define the LED Pins ******************************************/
/* Range : Choose Pins from the interface file       		    */
/*		  													    */

u8 LED_Au8ArrayToLEDPin[LED_NUMBER_OF_LED]={LED_PIN31} ;

/*															    */
/****************************************************************/


/* Define the LED Type ******************************************/
/* Range : LED_ACTIVE_LOW									    */
/*		   LED_ACTIVE_HIGH									    */

u8 LED_Au8ArrayToLEDType[LED_NUMBER_OF_LED]={LED_ACTIVE_HIGH} ;

/*															    */
/****************************************************************/


/* Define the LED Initial State *********************************/
/* Range : LED_On											    */
/*		   LED_Off											    */

u8 LED_Au8ArrayToLEDInitVal[LED_NUMBER_OF_LED]={LED_ON} ;

/*															    */
/****************************************************************/


#endif /* LED_COMPONENT_LED_CONFIG_H_ */
