/************************************************************************************/
/* Description : This is an Program file that contains the public definitions and   */
/*               public functions implementations needed to use the LED Component   */
/* 				 in high efficiency													*/
/*																					*/
/* Created on  : Jan 29, 2019 														*/
/* Author      : OMDA																*/
/************************************************************************************/



//#include "BIT_CALC.h"
//#include "STD_TYPE.h"


#include "DIO_Interface.h"
#include "LED_Interface.h"
#include "LED_config.h"
#include "LED_priv.h"


/************************************************************************************************************************************/
/* Description: Initialize the LEDs Pins and output State   (On or Off)                                                             */
/*																					                                                */
/* Inputs:  Copy_u8PinNB     -> Pin Number connected to LED							                                                */
/*			Copy_InitState   -> LED Initial State (On or Off)                                                                       */
/* Outputs: u8Error : Error State													                                                */
/*																					                                                */

u8 LED_u8Init( u8 Copy_u8LEDNB ) {
	u8 Local_u8ErrorState = ERROR_OK ;

    	if (LED_Au8ArrayToLEDType[Copy_u8LEDNB]){
			if(
					DIO_u8SetPinDirection( LED_Au8ArrayToLEDPin[Copy_u8LEDNB] , LOCAL_OUTPUT )   || \
					DIO_u8SetPinValue( LED_Au8ArrayToLEDPin[Copy_u8LEDNB] , LED_Au8ArrayToLEDInitVal[Copy_u8LEDNB] ) || \
					( Copy_u8LEDNB > LED_NUMBER_OF_LED ) )
			{
				Local_u8ErrorState = ERROR_NOK ;
			}

		}

		else if (!LED_Au8ArrayToLEDType[Copy_u8LEDNB]){
					if(
							DIO_u8SetPinDirection( LED_Au8ArrayToLEDPin[Copy_u8LEDNB] , LOCAL_OUTPUT )   || \
							DIO_u8SetPinValue( LED_Au8ArrayToLEDPin[Copy_u8LEDNB] , !LED_Au8ArrayToLEDInitVal[Copy_u8LEDNB] ) || \
							( Copy_u8LEDNB > LED_NUMBER_OF_LED ) )
					{
						Local_u8ErrorState = ERROR_NOK ;
					}

		}

    	return Local_u8ErrorState ;
}

/*																					                                                */
/************************************************************************************************************************************/


/*************************************************************************************/
/* Description: Turns the LED On                                                     */
/*																					 */
/* Inputs:  Copy_u8PinNB     -> LED Pin Number to be turned on						 */
/* Outputs: u8Error : Error State													 */
/*																					 */

u8 LED_u8TurnOn(u8 Copy_u8LEDNB) {

	u8 Local_u8ErrorState = ERROR_OK ;
		if (LED_Au8ArrayToLEDType[Copy_u8LEDNB]){
				if ( DIO_u8SetPinValue( LED_Au8ArrayToLEDPin[Copy_u8LEDNB] , LED_ON ) ){
					Local_u8ErrorState = ERROR_NOK ;
				}

		}
		else if (!LED_Au8ArrayToLEDType[Copy_u8LEDNB]){
				if ( DIO_u8SetPinValue( LED_Au8ArrayToLEDPin[Copy_u8LEDNB] , !LED_ON ) ){
					Local_u8ErrorState = ERROR_NOK ;
				}

		}

	return Local_u8ErrorState;
}

/*																					 */
/*************************************************************************************/


/*************************************************************************************/
/* Description: Turns the LED Off                                                    */
/*																					 */
/* Inputs:  Copy_u8PinNB     -> LED Pin Number to be turned off						 */
/* Outputs: u8Error : Error State													 */
/*																					 */

u8 LED_u8TurnOff(u8 Copy_u8LEDNB) {
	u8 Local_u8ErrorState = ERROR_OK ;

	if (LED_Au8ArrayToLEDType[Copy_u8LEDNB]){
			if ( DIO_u8SetPinValue( LED_Au8ArrayToLEDPin[Copy_u8LEDNB] , LED_OFF ) ){
				Local_u8ErrorState = ERROR_NOK ;
			}

	}
	else if (!LED_Au8ArrayToLEDType[Copy_u8LEDNB]){
			if ( DIO_u8SetPinValue( LED_Au8ArrayToLEDPin[Copy_u8LEDNB] , !LED_OFF ) ){
				Local_u8ErrorState = ERROR_NOK ;
			}

	}

	return Local_u8ErrorState ;
}

/*																					 */
/*************************************************************************************/

