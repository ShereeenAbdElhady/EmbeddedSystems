/************************************************************************************/
/* Description : This is an Interface file that contains the public definitions and */
/*               public functions needed to use the Seven Segments Component in     */
/* 				 high efficiency													*/
/* 				 This Driver Supports AVR ATmel32                                   */
/*																					*/
/* Created on  : Jan 29, 2019 														*/
/* Author      : OMDA																*/
/************************************************************************************/


#ifndef SSEG_COMPONENT_SSEG_INTERFACE_H_
#define SSEG_COMPONENT_SSEG_INTERFACE_H_



#define MAX_PIN_NB 				   (u8)31


/*************************************   AVR  DEFINITIONS   ************************************/
/* Description : Defining SSD Pins On AVR ATmel32, Which contain 32 Pins Ranges from (0 -> 31) */
/*                                                                                             */
/* Example : #define SSDa_Pin21  													           */
/*																						       */
#define SSD_PIN0    			   (u8)0
#define SSD_PIN1    			   (u8)1
#define SSD_PIN2    			   (u8)2
#define SSD_PIN3    			   (u8)3
#define SSD_PIN4    			   (u8)4
#define SSD_PIN5    			   (u8)5
#define SSD_PIN6    			   (u8)6
#define SSD_PIN7    			   (u8)7

#define SSD_PIN8    			   (u8)8
#define SSD_PIN9    			   (u8)9
#define SSD_PIN10    			   (u8)10
#define SSD_PIN11    			   (u8)11
#define SSD_PIN12    			   (u8)12
#define SSD_PIN13    			   (u8)13
#define SSD_PIN14    			   (u8)14
#define SSD_PIN15    			   (u8)15

#define SSD_PIN16    			   (u8)16
#define SSD_PIN17    			   (u8)17
#define SSD_PIN18    			   (u8)18
#define SSD_PIN19    			   (u8)19
#define SSD_PIN20    			   (u8)20
#define SSD_PIN21    			   (u8)21
#define SSD_PIN22    			   (u8)22
#define SSD_PIN23    			   (u8)23

#define SSD_PIN24    			   (u8)24
#define SSD_PIN25    			   (u8)25
#define SSD_PIN26    			   (u8)26
#define SSD_PIN27    			   (u8)27
#define SSD_PIN28    			   (u8)28
#define SSD_PIN29    			   (u8)29
#define SSD_PIN30    			   (u8)30
#define SSD_PIN31    			   (u8)31
/*																						       */
/***********************************************************************************************/


/*************************************************************************************/
/* Description: Initialize the Seven Segment Port and  value (if needed)             */
/*																					 */
/* Inputs : Void															         */
/* Outputs: u8Error -> Error State													 */
/*																					 */

u8 SSeg_u8Init(void) ;

/*																					 */
/*************************************************************************************/



/*************************************************************************************************/
/* Description: Write a Number on the Seven Segments 								             */
/*																				            	 */
/* Inputs : Copy_u8PortNB    -> Port No of the desired Seven Segments 			                 */
/* 			Copy_u8DisplayNB -> The Number to be Displayed										 */
/* Outputs: u8Error -> Error State													             */
/*																					             */

u8 SSeg_u8SetVal(u8 Copy_u8SSDNb , u8 Copy_u8Val) ;

/*																					             */
/*************************************************************************************************/



/*************************************************************************************************/
/* Description: Write a Number on the Seven Segments 								             */
/*																				            	 */
/* Inputs : Copy_u8PortNB    -> Port No of the desired Seven Segments 			                 */
/* 			Copy_u8DisplayNB -> The Number to be Displayed										 */
/* Outputs: u8Error -> Error State													             */
/*																					             */

u8 SSD_u8SSDOn(u8 Copy_u8SSDNb) ;

/*																					             */
/*************************************************************************************************/



/*************************************************************************************************/
/* Description: Turn Of a Seven Segment				 								             */
/*																				            	 */
/* Inputs : Copy_u8DisplayNB -> The Number to be Displayed			                 			 */
/* 													 											 */
/* Outputs: u8Error -> Error State													             */
/*																					             */

u8 SSD_u8SSDOff(u8 Copy_u8SSDNb)  ;

/*																					             */
/*************************************************************************************************/




#endif /* SSEG_COMPONENT_SSEG_INTERFACE_H_ */
