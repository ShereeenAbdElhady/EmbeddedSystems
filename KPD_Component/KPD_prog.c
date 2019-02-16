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
#ifndef KPD_PROG
#define KPD_PROG


#include "STD_TYPE.h"

#include "DIO_Interface.h"
#include "KPD_Interface.h"
#include "KPD_Config.h"
#include "KPD_priv.h"




/*************************************************************************************************/
/* Description: Write a Number on the Seven Segments 								             */
/*																				            	 */
/* Inputs : Copy_u8PortNB    -> Port No of the desired Seven Segments 			                 */
/* 			Copy_u8DisplayNB -> The Number to be Displayed										 */
/* Outputs: u8Error -> Error State													             */
/*																					             */

u8 KPD_u8GetKPDKeys(u8 (*Copy_u8State)[KPD_NUMBER_OF_ROWS]) {

	u8 Local_u8ErrorState = ERROR_OK ;


	if ( (KPD_PULL_TYPE) == (KPD_PULL_UP) ){

		for(u8 Col = 0 ; Col < KPD_NUMBER_OF_COL ; Col ++){

			for(u8 setter = 0 ; setter < KPD_NUMBER_OF_COL ; setter ++){

				if( setter == Col ){
					DIO_u8SetPinValue(KPD_Au8ColDefinitions[setter] , PRIV_PIN_LOW  ) ;
				}
				else {
					DIO_u8SetPinValue(KPD_Au8ColDefinitions[setter] , PRIV_PIN_HIGH ) ;
				}

			}


			for(u8 Row = 0 ; Row < KPD_NUMBER_OF_ROWS ; Row ++){

				 DIO_u8GetPinValue(KPD_Au8RowDefinitions[Row],&Copy_u8State[Col][Row])   ;

				 if( Copy_u8State[Col][Row] == PRIV_PIN_HIGH ){
					 Copy_u8State[Col][Row] = KPD_REL ;
				 }
				 else {
					 Copy_u8State[Col][Row] = KPD_PRS ;
				 }

			}


		}

	}

	else if ( (KPD_PULL_TYPE) == (KPD_PULL_DOWN) ){

		for(u8 Col = 0 ; Col < KPD_NUMBER_OF_COL ; Col ++){

			for(u8 setter = 0 ; setter < KPD_NUMBER_OF_COL ; setter ++){

				if( setter == Col ){
					DIO_u8SetPinValue(KPD_Au8ColDefinitions[setter] , PRIV_PIN_HIGH  ) ;
				}
				else {
					DIO_u8SetPinValue(KPD_Au8ColDefinitions[setter] , PRIV_PIN_LOW ) ;
				}

			}


			for(u8 Row = 0 ; Row < KPD_NUMBER_OF_ROWS ; Row ++){

				DIO_u8GetPinValue(KPD_Au8RowDefinitions[Row],&Copy_u8State[Col][Row])   ;

				if( Copy_u8State[Col][Row] == PRIV_PIN_HIGH ){
					Copy_u8State[Col][Row] = KPD_PRS ;
				}
				else {
					Copy_u8State[Col][Row] = KPD_REL ;
				}

			}


		}
	}




	return Local_u8ErrorState ;
}

/*																								 */
/*************************************************************************************************/









#endif
