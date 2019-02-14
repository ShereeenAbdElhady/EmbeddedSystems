/************************************************************************************/
/* Description : This is an Program file that contains the public definitions and   */
/*               public functions implementations needed to use the Seven Segments  */
/*               Component in high efficiency									    */
/* 				                     												*/
/*																					*/
/* Created on  : Jan 29, 2019 														*/
/* Author      : OMDA																*/
/************************************************************************************/

/* File Guard         */
#ifndef SSEG_PROG
#define SSEG_PROG



#include "DIO_Interface.h"
#include "SWI_Config.h"
#include "SWI_Interface.h"
#include "SWI_priv.h"


/*************************************************************************************/
/* Description: Initialize the Seven Segment Port and  value (if needed)             */
/*																					 */
/* Inputs : Void															         */
/* Outputs: u8Error -> Error State													 */
/*																					 */

u8 SWI_u8Init(void) {

	u8 Local_u8ErrorState = ERROR_OK ;


			for (u8 count = 0 ; count < SSD_NUMBER_OF_SWI ; count ++){

				if ( DIO_u8SetPinDirection( SWI_Au8ArrayToSWIPin[count] , SWI_PIN_DIR_INPUT  ) ){
					Local_u8ErrorState = ERROR_NOK ;
				}

			}

	return Local_u8ErrorState ;

}


/*																					 */
/*************************************************************************************/







/*************************************************************************************************/
/* Description: Write a Number on the Seven Segments 								             */
/*																				            	 */
/* Inputs : Copy_u8PortNB    -> Port No of the desired Seven Segments 			                 */
/* 			Copy_u8DisplayNB -> The Number to be Displayed										 */
/* Outputs: u8Error -> Error State													             */
/*																					             */

u8 SWI_u8GetSWIState(u8 Copy_u8SWINb , u8 * Copy_u8State) {

	u8 Local_u8ErrorState = ERROR_OK ;
	u8 Local_u8Temp ;



	if ( SWI_Au8ArraySWIType[Copy_u8SWINb] == SWI_PULL_DOWN ){

		if( DIO_u8GetPinValue( SWI_Au8ArrayToSWIPin[Copy_u8SWINb] , &Local_u8Temp ) ){
			Local_u8ErrorState = ERROR_NOK;
		}

		if (! Local_u8Temp){
			*Copy_u8State = SWI_REL ;
		}

		else if (Local_u8Temp){
			*Copy_u8State = SWI_PRS ;
		}

	}

	else if ( SWI_Au8ArraySWIType[Copy_u8SWINb] == SWI_PULL_UP ){

		if( DIO_u8GetPinValue( SWI_Au8ArrayToSWIPin[Copy_u8SWINb] , &Local_u8Temp ) ){
			Local_u8ErrorState = ERROR_NOK;
		}

		if (! Local_u8Temp){
			*Copy_u8State = SWI_PRS ;
		}

		else if (Local_u8Temp){
			*Copy_u8State = SWI_REL ;
		}

	}



	return Local_u8ErrorState ;
}

/*																								 */
/*************************************************************************************************/









#endif
