/************************************************************************************/
/* Description : This is an Interface file that contains the public definitions and */
/*               public functions needed to use the Switch Component in    		    */
/* 				 high efficiency													*/
/* 				 This Driver Supports AVR ATmel32                                   */
/*																					*/
/* Created on  : Jan 29, 2019 														*/
/* Author      : OMDA																*/
/************************************************************************************/


#ifndef KPD_COMPONENT_KPD_INTERFACE_H_
#define KPD_COMPONENT_KPD_INTERFACE_H_





/*************************************   AVR  DEFINITIONS   ************************************/
/* Description : Defining Available Pins On AVR ATmel32, Which contain 32 Pins 				   */
/* Ranges from (0 -> 31) 																	   */
/*                                                                                             */
/* Example : #define KPD_PIN21  													           */
/*																						       */
#define KPD_PIN0    			   (u8)0
#define KPD_PIN1    			   (u8)1
#define KPD_PIN2    			   (u8)2
#define KPD_PIN3    			   (u8)3
#define KPD_PIN4    			   (u8)4
#define KPD_PIN5    			   (u8)5
#define KPD_PIN6    			   (u8)6
#define KPD_PIN7    			   (u8)7
/*																							   */
#define KPD_PIN8    			   (u8)8
#define KPD_PIN9    			   (u8)9
#define KPD_PIN10    			   (u8)10
#define KPD_PIN11    			   (u8)11
#define KPD_PIN12    			   (u8)12
#define KPD_PIN13    			   (u8)13
#define KPD_PIN14    			   (u8)14
#define KPD_PIN15    			   (u8)15
/*																							   */
#define KPD_PIN16    			   (u8)16
#define KPD_PIN17    			   (u8)17
#define KPD_PIN18    			   (u8)18
#define KPD_PIN19    			   (u8)19
#define KPD_PIN20    			   (u8)20
#define KPD_PIN21    			   (u8)21
#define KPD_PIN22    			   (u8)22
#define KPD_PIN23    			   (u8)23
/*																							   */
#define KPD_PIN24    			   (u8)24
#define KPD_PIN25    			   (u8)25
#define KPD_PIN26    			   (u8)26
#define KPD_PIN27    			   (u8)27
#define KPD_PIN28    			   (u8)28
#define KPD_PIN29    			   (u8)29
#define KPD_PIN30    			   (u8)30
#define KPD_PIN31    			   (u8)31
/*																						       */
/***********************************************************************************************/



#define KPD_PRS       					(u8)7
#define KPD_REL     		   	 		(u8)6



/*************************************************************************************************/
/* Description: Write a Number on the Seven Segments 								             */
/*																				            	 */
/* Inputs : Copy_u8KPDNb    -> No of the desired Switch				 			                 */
/* 			*Copy_u8State   -> The Value to be returned 										 */
/* Outputs: u8Error -> Error State													             */
/*																					             */

u8 KPD_u8GetKPDKeys(u8 (*Copy_u8State)[4]) ;

/*																					             */
/*************************************************************************************************/



#endif /* KPD_COMPONENT_KPD_INTERFACE_H_ */
