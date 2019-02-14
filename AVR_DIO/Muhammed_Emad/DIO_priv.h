/************************************************************************************/
/* Description : This is an Private file that contains the private definitions and  */
/*               functions implementations needed to use the DIO Component  	    */
/* 				 in high efficiency													*/
/*																					*/
/* Created on  : Jan 29, 2019 														*/
/* Author      : OMDA																*/
/************************************************************************************/

/* File Guard                       */
#ifndef DIO_COMPONENT_DIO_PRIV_H_
#define DIO_COMPONENT_DIO_PRIV_H_



/********* Hardware Dependencies ************/
/*									        */

/* Defining the Number of Pins in port      */
#define LOCAL_NB_OF_PINS_IN_PORT   8

/* Defining maximum No. of pins available   */
#define LOCAL_DIO_MAXPINNB         31

/* Defining maximum No. of ports            */
#define LOCAL_DIO_PORT_MAXPINNB    3

/* Defining PORTA DDR,PORT,PIN              */
#define LOCAL_DDRA_REG             0x3A
#define LOCAL_PORTA_REG            0x3B
#define LOCAL_PINA_REG			   0x39

/* Defining PORTB DDR,PORT,PIN              */
#define LOCAL_DDRB_REG             0x37
#define LOCAL_PORTB_REG            0x38
#define LOCAL_PINB_REG			   0x36

/* Defining PORTC DDR,PORT,PIN              */
#define LOCAL_DDRC_REG             0x34
#define LOCAL_PORTC_REG            0x35
#define LOCAL_PINC_REG			   0x33

/* Defining PORTD DDR,PORT,PIN              */
#define LOCAL_DDRD_REG             0x31
#define LOCAL_PORTD_REG            0x32
#define LOCAL_PIND_REG			   0x30

/* Defining the Input and Output Values     */
#define DIO_INPUT  				   0
#define DIO_OUTPUT 				   1

/* Defining the Low and High Output Values  */
/* MUST BE CHANGED ***************************************************/
#define DIO_PIN_INPUT  			   0
#define DIO_PIN_LOW     		   0
#define DIO_PIN_HIGH   			   1

/*									        */
/********************************************/






#endif /* DIO_COMPONENT_DIO_PRIV_H_ */
