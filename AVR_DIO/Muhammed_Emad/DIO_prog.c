/************************************************************************************/
/* Description : This is an Program file that contains the public definitions and   */
/*               public functions implementations needed to use the DIO Component   */
/* 				 in high efficiency													*/
/*																					*/
/* Created on  : Jan 29, 2019 														*/
/* Author      : OMDA																*/
/************************************************************************************/


/* File Guard                       */
#ifndef DIO_PORG
#define DIO_PROG


/**** External and General Files ****/
/* 									*/

#include "STD_TYPE.h"
#include "BIT_CALC.h"

#include "DIO_Interface.h"
#include "DIO_Config.h"
#include "DIO_priv.h"

/*									*/
/************************************/




/***************************************************************************************************************************/
/* Description: Initialize the PINs Direction and output value (if output direction)                                       */
/*																					 									   */
/* Inputs:  u8PinNB : Void															 									   */
/* Outputs: u8Error : void																								   */
/*																														   */

void DIO_voidInit(void){



/* Securing the Initializations for input Pins ********************************************************/
/*																									  */
/*																									  */

#if ( ( DIO_PIN0_DIRECTION == DIO_INPUT ) && ( DIO_PIN0_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN0_INIT_VAL
	#define DIO_PIN0_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN1_DIRECTION == DIO_INPUT ) && ( DIO_PIN1_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN1_INIT_VAL
	#define DIO_PIN1_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN2_DIRECTION == DIO_INPUT ) && ( DIO_PIN2_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN2_INIT_VAL
	#define DIO_PIN2_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN3_DIRECTION == DIO_INPUT ) && ( DIO_PIN3_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN3_INIT_VAL
	#define DIO_PIN3_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN4_DIRECTION == DIO_INPUT ) && ( DIO_PIN4_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN4_INIT_VAL
	#define DIO_PIN4_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN5_DIRECTION == DIO_INPUT ) && ( DIO_PIN5_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN5_INIT_VAL
	#define DIO_PIN5_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN6_DIRECTION == DIO_INPUT ) && ( DIO_PIN6_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN6_INIT_VAL
	#define DIO_PIN6_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN7_DIRECTION == DIO_INPUT ) && ( DIO_PIN7_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN7_INIT_VAL
	#define DIO_PIN7_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN8_DIRECTION == DIO_INPUT ) && ( DIO_PIN8_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN8_INIT_VAL
	#define DIO_PIN8_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN9_DIRECTION == DIO_INPUT ) && ( DIO_PIN9_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN9_INIT_VAL
	#define DIO_PIN9_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN10_DIRECTION == DIO_INPUT ) && ( DIO_PIN10_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN10_INIT_VAL
	#define DIO_PIN10_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN11_DIRECTION == DIO_INPUT ) && ( DIO_PIN11_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN11_INIT_VAL
	#define DIO_PIN11_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN12_DIRECTION == DIO_INPUT ) && ( DIO_PIN12_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN12_INIT_VAL
	#define DIO_PIN12_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN13_DIRECTION == DIO_INPUT ) && ( DIO_PIN13_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN13_INIT_VAL
	#define DIO_PIN13_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN014_DIRECTION == DIO_INPUT ) && ( DIO_PIN14_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN14_INIT_VAL
	#define DIO_PIN14_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN15_DIRECTION == DIO_INPUT ) && ( DIO_PIN15_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN15_INIT_VAL
	#define DIO_PIN15_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN16_DIRECTION == DIO_INPUT ) && ( DIO_PIN16_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN16_INIT_VAL
	#define DIO_PIN16_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN17_DIRECTION == DIO_INPUT ) && ( DIO_PIN17_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN17_INIT_VAL
	#define DIO_PIN17_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN018_DIRECTION == DIO_INPUT ) && ( DIO_PIN18_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN18_INIT_VAL
	#define DIO_PIN18_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN19_DIRECTION == DIO_INPUT ) && ( DIO_PIN19_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN19_INIT_VAL
	#define DIO_PIN19_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN20_DIRECTION == DIO_INPUT ) && ( DIO_PIN20_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN20_INIT_VAL
	#define DIO_PIN20_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN21_DIRECTION == DIO_INPUT ) && ( DIO_PIN21_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN21_INIT_VAL
	#define DIO_PIN21_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN22_DIRECTION == DIO_INPUT ) && ( DIO_PIN22_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN22_INIT_VAL
	#define DIO_PIN22_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN23_DIRECTION == DIO_INPUT ) && ( DIO_PIN23_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN23_INIT_VAL
	#define DIO_PIN23_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN24_DIRECTION == DIO_INPUT ) && ( DIO_PIN24_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN24_INIT_VAL
	#define DIO_PIN24_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN25_DIRECTION == DIO_INPUT ) && ( DIO_PIN25_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN25_INIT_VAL
	#define DIO_PIN25_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN26_DIRECTION == DIO_INPUT ) && ( DIO_PIN26_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN26_INIT_VAL
	#define DIO_PIN26_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN27_DIRECTION == DIO_INPUT ) && ( DIO_PIN27_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN27_INIT_VAL
	#define DIO_PIN27_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN28_DIRECTION == DIO_INPUT ) && ( DIO_PIN28_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN28_INIT_VAL
	#define DIO_PIN28_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN29_DIRECTION == DIO_INPUT ) && ( DIO_PIN29_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN29_INIT_VAL
	#define DIO_PIN29_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN30_DIRECTION == DIO_INPUT ) && ( DIO_PIN30_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN30_INIT_VAL
	#define DIO_PIN30_INIT_VAL  DIO_PIN_INPUT

#endif
/*																									  */
#if ( ( DIO_PIN31_DIRECTION == DIO_INPUT ) && ( DIO_PIN31_INIT_VAL != DIO_PIN_INPUT ) )
	#warning The Pin You are trying to set is an INPUT Pin, its set now to the default input value

	#undef  DIO_PIN31_INIT_VAL
	#define DIO_PIN31_INIT_VAL  DIO_PIN_INPUT

#endif

/*																									  */
/*																									  */
/******************************************************************************************************/



/* SET PORT DIRECTIONS FOR PORT A PINs  ***************************************************************/
/*																									  */

	((Register*) LOCAL_DDRA_REG) -> ByteAccess = BYTE_CONC(DIO_PIN7_DIRECTION,
														   DIO_PIN6_DIRECTION,
														   DIO_PIN5_DIRECTION,
														   DIO_PIN4_DIRECTION,
														   DIO_PIN3_DIRECTION,
														   DIO_PIN2_DIRECTION,
														   DIO_PIN1_DIRECTION,
														   DIO_PIN0_DIRECTION ) ;

	/* SET PORT DIRECTIONS FOR PORT B PINs  */
	((Register*) LOCAL_DDRB_REG) -> ByteAccess = BYTE_CONC(DIO_PIN15_DIRECTION,
														   DIO_PIN14_DIRECTION,
													       DIO_PIN13_DIRECTION,
													       DIO_PIN12_DIRECTION,
													       DIO_PIN11_DIRECTION,
													       DIO_PIN10_DIRECTION,
													       DIO_PIN9_DIRECTION ,
													       DIO_PIN8_DIRECTION ) ;

	/* SET PORT DIRECTIONS FOR PORT C PINs  */
	((Register*) LOCAL_DDRC_REG) -> ByteAccess = BYTE_CONC(DIO_PIN23_DIRECTION,
														   DIO_PIN22_DIRECTION,
														   DIO_PIN21_DIRECTION,
														   DIO_PIN20_DIRECTION,
														   DIO_PIN19_DIRECTION,
														   DIO_PIN18_DIRECTION,
														   DIO_PIN17_DIRECTION,
														   DIO_PIN16_DIRECTION ) ;

	/* SET PORT DIRECTIONS FOR PORT D PINs  */
	((Register*) LOCAL_DDRD_REG) -> ByteAccess = BYTE_CONC(DIO_PIN31_DIRECTION,
														   DIO_PIN30_DIRECTION,
														   DIO_PIN29_DIRECTION,
														   DIO_PIN28_DIRECTION,
														   DIO_PIN27_DIRECTION,
														   DIO_PIN26_DIRECTION,
														   DIO_PIN25_DIRECTION,
														   DIO_PIN24_DIRECTION ) ;



	/* SET INITIAL VALUES FOR PORT A PINs  */
	((Register*) LOCAL_PORTA_REG) -> ByteAccess = BYTE_CONC(DIO_PIN7_INIT_VAL,
															DIO_PIN6_INIT_VAL,
															DIO_PIN5_INIT_VAL,
															DIO_PIN4_INIT_VAL,
															DIO_PIN3_INIT_VAL,
															DIO_PIN2_INIT_VAL,
															DIO_PIN1_INIT_VAL,
															DIO_PIN0_INIT_VAL )  ;
	/* SET INITIAL VALUES FOR PORT B PINs  */
	((Register*) LOCAL_PORTB_REG) -> ByteAccess = BYTE_CONC(DIO_PIN15_INIT_VAL,
															DIO_PIN14_INIT_VAL,
															DIO_PIN13_INIT_VAL,
															DIO_PIN12_INIT_VAL,
															DIO_PIN11_INIT_VAL,
															DIO_PIN10_INIT_VAL,
															DIO_PIN9_INIT_VAL ,
															DIO_PIN8_INIT_VAL )  ;

	/* SET INITIAL VALUES FOR PORT C PINs  */
	((Register*) LOCAL_PORTC_REG) -> ByteAccess = BYTE_CONC(DIO_PIN23_INIT_VAL,
															DIO_PIN22_INIT_VAL,
															DIO_PIN21_INIT_VAL,
															DIO_PIN20_INIT_VAL,
															DIO_PIN19_INIT_VAL,
															DIO_PIN18_INIT_VAL,
															DIO_PIN17_INIT_VAL,
															DIO_PIN16_INIT_VAL ) ;

	/* SET INITIAL VALUES FOR PORT D PINs  */
	((Register*) LOCAL_PORTD_REG) -> ByteAccess = BYTE_CONC(DIO_PIN31_INIT_VAL,
															DIO_PIN30_INIT_VAL,
															DIO_PIN29_INIT_VAL,
															DIO_PIN28_INIT_VAL,
															DIO_PIN27_INIT_VAL,
															DIO_PIN26_INIT_VAL,
															DIO_PIN25_INIT_VAL,
															DIO_PIN24_INIT_VAL ) ;

/*																									  */
/******************************************************************************************************/


return ;
}


/*																														   */
/***************************************************************************************************************************/




/*************************************************************************************/
/* Description: Set the PINs Direction ( Input or Output )							 */
/*																					 */
/* Inputs:  u8PinNB      : The Number of Pin		         						 */
/* 		    u8Direction  : The Direction of the chosen Pin	            			 */
/* Outputs: u8Error      : Error State												 */
/*																					 */

extern u8 DIO_u8SetPinDirection(u8 Copy_u8PinNB , u8 Copy_u8Direction ) {

	u8 Local_u8Error   ;
	u8 Local_u8PORT_ID ;
	u8 Local_u8Pin_ID  ;

	if( (Copy_u8PinNB > LOCAL_DIO_MAXPINNB) || ( (Copy_u8Direction>DIO_OUTPUT)&&(Copy_u8Direction!=DIO_INPUT) ) ){
		Local_u8Error = ERROR_NOK ;
	}
	else {

		Local_u8PORT_ID = Copy_u8PinNB / LOCAL_NB_OF_PINS_IN_PORT ;
		Local_u8Pin_ID  = Copy_u8PinNB % LOCAL_NB_OF_PINS_IN_PORT;


		/* Setting the Desired Pin Direction */
		switch (Local_u8PORT_ID){
		case LOCAL_PORTA_CHOICE:
			ASSIGN_BIT( ((Register*) LOCAL_DDRA_REG) -> ByteAccess , Local_u8Pin_ID , Copy_u8Direction);
			break;

		case LOCAL_PORTB_CHOICE:
			ASSIGN_BIT( ((Register*) LOCAL_DDRB_REG) -> ByteAccess , Local_u8Pin_ID , Copy_u8Direction);
			break;

		case LOCAL_PORTC_CHOICE:
			ASSIGN_BIT( ((Register*) LOCAL_DDRC_REG) -> ByteAccess , Local_u8Pin_ID , Copy_u8Direction);
			break;

		case LOCAL_PORTD_CHOICE:
			ASSIGN_BIT( ((Register*) LOCAL_DDRD_REG) -> ByteAccess , Local_u8Pin_ID , Copy_u8Direction);
			break;

		}

		Local_u8Error = ERROR_OK ;

	}


	return Local_u8Error;

}

/*																					 */
/*************************************************************************************/











/*************************************************************************************/
/* Description: Set the PINs Value ( High or Low )	        						 */
/*																					 */
/* Inputs:  u8PinNB      : The Number of Pin		         						 */
/* 		    u8Value      : The Value of the output on the chosen Pin	     		 */
/* Outputs: u8Error      : Error State												 */
/*																					 */

extern u8 DIO_u8SetPinValue(u8 Copy_u8PinNB , u8 Copy_u8Value ) {

	u8 Local_u8Error   ;
	u8 Local_u8PORT_ID ;
	u8 Local_u8Pin_ID  ;


	if( (Copy_u8PinNB > LOCAL_DIO_MAXPINNB) || ( (Copy_u8Value>DIO_PIN_HIGH)&&(Copy_u8Value!=DIO_PIN_LOW) ) ){
		Local_u8Error = ERROR_NOK ;
	}
	else {

		Local_u8PORT_ID = Copy_u8PinNB / LOCAL_NB_OF_PINS_IN_PORT ;
		Local_u8Pin_ID  = Copy_u8PinNB % LOCAL_NB_OF_PINS_IN_PORT;

		/* Setting the desired Value in required Pin */
		switch (Local_u8PORT_ID){
		case LOCAL_PORTA_CHOICE:
			ASSIGN_BIT( ((Register*) LOCAL_PORTA_REG) -> ByteAccess , Local_u8Pin_ID , Copy_u8Value);
			break;

		case LOCAL_PORTB_CHOICE:
			ASSIGN_BIT( ((Register*) LOCAL_PORTB_REG) -> ByteAccess , Local_u8Pin_ID , Copy_u8Value);
			break;

		case LOCAL_PORTC_CHOICE:
			ASSIGN_BIT( ((Register*) LOCAL_PORTC_REG) -> ByteAccess , Local_u8Pin_ID , Copy_u8Value);
			break;

		case LOCAL_PORTD_CHOICE:
			ASSIGN_BIT( ((Register*) LOCAL_PORTD_REG) -> ByteAccess , Local_u8Pin_ID , Copy_u8Value);
			break;

		}


		Local_u8Error = ERROR_OK ;
	}


	return Local_u8Error ;
}

/*																					 */
/*************************************************************************************/







/*************************************************************************************/
/* Description: Get the PINs Value ( High or Low )	        						 */
/*																					 */
/* Inputs:  u8PinNB      : The Number of Pin		         						 */
/* 		    *u8Value     : The Pointer to variable which will carry the received val.*/
/* Outputs: u8Error      : Error State												 */
/*																					 */

extern u8 DIO_u8GetPinValue(u8 Copy_u8PinNB , u8 * PCopy_u8Value ) {

	u8 Local_u8Error   ;
	u8 Local_u8PORT_ID ;
	u8 Local_u8Pin_ID  ;


	if( (Copy_u8PinNB > LOCAL_DIO_MAXPINNB) || ( PCopy_u8Value == NULL ) ){
		Local_u8Error = ERROR_NOK ;
	}
	else {

		Local_u8PORT_ID = Copy_u8PinNB / LOCAL_NB_OF_PINS_IN_PORT ;
		Local_u8Pin_ID  = Copy_u8PinNB % LOCAL_NB_OF_PINS_IN_PORT;

		/* Setting the desired Value in required Pin */
		switch (Local_u8PORT_ID){
		case LOCAL_PORTA_CHOICE:
			* PCopy_u8Value=GET_BIT(((Register*) LOCAL_PINA_REG) -> ByteAccess,Local_u8Pin_ID) ;
			break;

		case LOCAL_PORTB_CHOICE:
			* PCopy_u8Value=GET_BIT(((Register*) LOCAL_PINB_REG) -> ByteAccess,Local_u8Pin_ID) ;
			break;

		case LOCAL_PORTC_CHOICE:
			* PCopy_u8Value=GET_BIT(((Register*) LOCAL_PINC_REG) -> ByteAccess,Local_u8Pin_ID) ;
			break;

		case LOCAL_PORTD_CHOICE:
			* PCopy_u8Value=GET_BIT(((Register*) LOCAL_PIND_REG) -> ByteAccess,Local_u8Pin_ID) ;
			break;

		}


		Local_u8Error = ERROR_OK ;
	}


	return Local_u8Error ;
}

/*																					 */
/*************************************************************************************/






/*************************************************************************************/
/* Description: Set the PORTs Direction ( Input or Output )							 */
/*																					 */
/* Inputs:  u8PortNB     : The Number of Port		         						 */
/* 		    u8Direction  : The Direction of the chosen Pin	            			 */
/* Outputs: u8Error      : Error State												 */
/*																					 */

extern u8 DIO_u8SetPortDirection(u8 Copy_u8PortNB , u8 Copy_u8Direction ) {

	u8 Local_u8Error   ;


	if( (Copy_u8PortNB > LOCAL_DIO_PORT_MAXPINNB) ){
		Local_u8Error = ERROR_NOK ;
	}
	else {

		/* Setting the Desired Port Direction */

		switch (Copy_u8PortNB){
		case LOCAL_PORTA_CHOICE:
			((Register*) LOCAL_DDRA_REG) -> ByteAccess = Copy_u8Direction ;
			break;

		case LOCAL_PORTB_CHOICE:
			((Register*) LOCAL_DDRB_REG) -> ByteAccess = Copy_u8Direction ;
			break;

		case LOCAL_PORTC_CHOICE:
			((Register*) LOCAL_DDRC_REG) -> ByteAccess = Copy_u8Direction ;
			break;

		case LOCAL_PORTD_CHOICE:
			((Register*) LOCAL_DDRD_REG) -> ByteAccess = Copy_u8Direction ;
			break;

		}

		Local_u8Error = ERROR_OK ;

	}


	return Local_u8Error;

}

/*																					 */
/*************************************************************************************/







/*************************************************************************************/
/* Description: Set the PORTs Value ( High or Low )	        						 */
/*																					 */
/* Inputs:  u8PortNB     : The Number of Port		         						 */
/* 		    u8Value      : The Value of the output on the chosen Pin	     		 */
/* Outputs: u8Error      : Error State												 */
/*																					 */

extern u8 DIO_u8SetPortValue(u8 Copy_u8PortNB , u8 Copy_u8Value ) {

	u8 Local_u8Error   ;


	if( (Copy_u8PortNB > LOCAL_DIO_PORT_MAXPINNB) ){
		Local_u8Error = ERROR_NOK ;
	}
	else {

		/* Setting the Desired Port Direction */

		switch (Copy_u8PortNB){
		case LOCAL_PORTA_CHOICE:
			((Register*) LOCAL_PORTA_REG) -> ByteAccess = Copy_u8Value ;
			break;

		case LOCAL_PORTB_CHOICE:
			((Register*) LOCAL_PORTB_REG) -> ByteAccess = Copy_u8Value ;
			break;

		case LOCAL_PORTC_CHOICE:
			((Register*) LOCAL_PORTC_REG) -> ByteAccess = Copy_u8Value ;
			break;

		case LOCAL_PORTD_CHOICE:
			((Register*) LOCAL_PORTD_REG) -> ByteAccess = Copy_u8Value ;
			break;

		}

		Local_u8Error = ERROR_OK ;

	}


	return Local_u8Error;

}

/*																					 */
/*************************************************************************************/







/*************************************************************************************/
/* Description: Get the PORTs Value ( High or Low )	        						 */
/*																					 */
/* Inputs:  u8PortNB     : The Number of Port		         						 */
/* 		    *u8Value     : The Pointer to variable which will carry the received val.*/
/* Outputs: u8Error      : Error State												 */
/*																					 */

extern u8 DIO_u8GetPortValue(u8 Copy_u8PortNB , u8 * PCopy_u8Value ) {

	u8 Local_u8Error   ;



	if( (Copy_u8PortNB > LOCAL_DIO_PORT_MAXPINNB) || ( PCopy_u8Value == NULL ) ){
		Local_u8Error = ERROR_NOK ;
	}
	else {



		/* Setting the desired Value in required Pin */
		switch (Copy_u8PortNB){
		case LOCAL_PORTA_CHOICE:
			* PCopy_u8Value=((Register*) LOCAL_PINA_REG) -> ByteAccess ;
			break;

		case LOCAL_PORTB_CHOICE:
			* PCopy_u8Value=((Register*) LOCAL_PINB_REG) -> ByteAccess ;
			break;

		case LOCAL_PORTC_CHOICE:
			* PCopy_u8Value=((Register*) LOCAL_PINC_REG) -> ByteAccess ;
			break;

		case LOCAL_PORTD_CHOICE:
			* PCopy_u8Value=((Register*) LOCAL_PIND_REG) -> ByteAccess ;
			break;

		}



		Local_u8Error = ERROR_OK ;
	}


	return Local_u8Error ;
}

/*																					 */
/*************************************************************************************/



#endif


