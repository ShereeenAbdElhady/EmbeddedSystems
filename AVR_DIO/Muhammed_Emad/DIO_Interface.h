/************************************************************************************/
/* Description : This is an Interface file that contains the public definitions and */
/*               public functions needed to use the DIO Component in high efficiency*/
/*																					*/
/* Created on  : Jan 29, 2019 														*/
/* Author      : OMDA																*/
/************************************************************************************/




/* File Guard *******************************/
#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_





/**** Defining the Port Number in Numbers ***/
/*                                          */

#define LOCAL_PORTA_CHOICE	       0
#define LOCAL_PORTB_CHOICE	       1
#define LOCAL_PORTC_CHOICE	       2
#define LOCAL_PORTD_CHOICE	       3

/*                                          */
/********************************************/




/**** Defining the Pin Number in Numbers ****/
/*                                          */

#define DIO_PIN0  (u8)0
#define DIO_PIN1  (u8)1
#define DIO_PIN2  (u8)2
#define DIO_PIN3  (u8)3
#define DIO_PIN4  (u8)4
#define DIO_PIN5  (u8)5
#define DIO_PIN6  (u8)6
#define DIO_PIN7  (u8)7
#define DIO_PIN8  (u8)8
#define DIO_PIN9  (u8)9
#define DIO_PIN10 (u8)10
#define DIO_PIN11 (u8)11
#define DIO_PIN12 (u8)12
#define DIO_PIN13 (u8)13
#define DIO_PIN14 (u8)14
#define DIO_PIN15 (u8)15
#define DIO_PIN16 (u8)16
#define DIO_PIN17 (u8)17
#define DIO_PIN18 (u8)18
#define DIO_PIN19 (u8)19
#define DIO_PIN20 (u8)20
#define DIO_PIN21 (u8)21
#define DIO_PIN22 (u8)22
#define DIO_PIN23 (u8)23
#define DIO_PIN24 (u8)24
#define DIO_PIN25 (u8)25
#define DIO_PIN26 (u8)26
#define DIO_PIN27 (u8)27
#define DIO_PIN28 (u8)28
#define DIO_PIN29 (u8)29
#define DIO_PIN30 (u8)30
#define DIO_PIN31 (u8)31

/*                                          */
/********************************************/



/*************************************************************************************/
/* Description: Initialize the PINs Direction and output value (if output direction) */
/*																					 */
/* Inputs:  u8PinNB : Void															 */
/* Outputs: u8Error : Error State													 */
/*																					 */

void DIO_voidInit( void ) ;

/*																					 */
/*************************************************************************************/



/*************************************************************************************/
/* Description: Set the PINs Direction ( Input or Output )							 */
/*																					 */
/* Inputs:  u8PinNB      : The Number of Pin		         						 */
/* 		    u8Direction  : The Direction of the chosen Pin	            			 */
/* Outputs: u8Error      : Error State												 */
/*																					 */

u8 DIO_u8SetPinDirection(u8 Copy_u8PinNB , u8 Copy_u8Direction ) ;

/*																					 */
/*************************************************************************************/



/*************************************************************************************/
/* Description: Set the PINs Value ( High or Low )	        						 */
/*																					 */
/* Inputs:  u8PinNB      : The Number of Pin		         						 */
/* 		    u8Value      : The Value of the output on the chosen Pin	     		 */
/* Outputs: u8Error      : Error State												 */
/*																					 */

u8 DIO_u8SetPinValue(u8 Copy_u8PinNB , u8 Copy_u8Value ) ;

/*																					 */
/*************************************************************************************/



/*************************************************************************************/
/* Description: Get the PINs Value ( High or Low )	        						 */
/*																					 */
/* Inputs:  u8PinNB      : The Number of Pin		         						 */
/* 		    *u8Value     : The Pointer to variable which will carry the received val.*/
/* Outputs: u8Error      : Error State												 */
/*																					 */

u8 DIO_u8GetPinValue(u8 Copy_u8PinNB , u8 * PCopy_u8Value ) ;

/*																					 */
/*************************************************************************************/



/*************************************************************************************/
/* Description: Set the PORTs Direction ( Input or Output )							 */
/*																					 */
/* Inputs:  u8PortNB     : The Number of Port		         						 */
/* 		    u8Direction  : The Direction of the chosen Pin	            			 */
/* Outputs: u8Error      : Error State												 */
/*																					 */

u8 DIO_u8SetPortDirection(u8 Copy_u8PortNB , u8 Copy_u8Direction ) ;

/*																					 */
/*************************************************************************************/



/*************************************************************************************/
/* Description: Set the PORTs Value ( High or Low )	        						 */
/*																					 */
/* Inputs:  u8PortNB     : The Number of Port		         						 */
/* 		    u8Value      : The Value of the output on the chosen Pin	     		 */
/* Outputs: u8Error      : Error State												 */
/*																					 */

u8 DIO_u8SetPortValue(u8 Copy_u8PortNB , u8 Copy_u8Value ) ;

/*																					 */
/*************************************************************************************/



/*************************************************************************************/
/* Description: Get the PORTs Value ( High or Low )	        						 */
/*																					 */
/* Inputs:  u8PortNB     : The Number of Port		         						 */
/* 		    *u8Value     : The Pointer to variable which will carry the received val.*/
/* Outputs: u8Error      : Error State												 */
/*																					 */

u8 DIO_u8GetPortValue(u8 Copy_u8PortNB , u8 * PCopy_u8Value ) ;

/*																					 */
/*************************************************************************************/







#endif /* DIO_INTERFACE_H_ */
