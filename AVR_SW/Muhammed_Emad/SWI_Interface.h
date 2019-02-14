/************************************************************************************/
/* Description : This is an Interface file that contains the public definitions and */
/*               public functions needed to use the Switch Component in    		    */
/* 				 high efficiency													*/
/* 				 This Driver Supports AVR ATmel32                                   */
/*																					*/
/* Created on  : Jan 29, 2019 														*/
/* Author      : OMDA																*/
/************************************************************************************/


#ifndef SWI_COMPONENT_SWI_INTERFACE_H_
#define SWI_COMPONENT_SWI_INTERFACE_H_




#define SWI_PRS       			(u8)5
#define SWI_REL     		    (u8)6



/*************************************   AVR  DEFINITIONS   ************************************/
/* Description : Defining SWI Pins On AVR ATmel32, Which contain 32 Pins Ranges from (0 -> 31) */
/*                                                                                             */
/* Example : #define SWI_PIN21  													           */
/*																						       */
#define SWI_PIN0    			   (u8)0
#define SWI_PIN1    			   (u8)1
#define SWI_PIN2    			   (u8)2
#define SWI_PIN3    			   (u8)3
#define SWI_PIN4    			   (u8)4
#define SWI_PIN5    			   (u8)5
#define SWI_PIN6    			   (u8)6
#define SWI_PIN7    			   (u8)7
/*																							   */
#define SWI_PIN8    			   (u8)8
#define SWI_PIN9    			   (u8)9
#define SWI_PIN10    			   (u8)10
#define SWI_PIN11    			   (u8)11
#define SWI_PIN12    			   (u8)12
#define SWI_PIN13    			   (u8)13
#define SWI_PIN14    			   (u8)14
#define SWI_PIN15    			   (u8)15
/*																							   */
#define SWI_PIN16    			   (u8)16
#define SWI_PIN17    			   (u8)17
#define SWI_PIN18    			   (u8)18
#define SWI_PIN19    			   (u8)19
#define SWI_PIN20    			   (u8)20
#define SWI_PIN21    			   (u8)21
#define SWI_PIN22    			   (u8)22
#define SWI_PIN23    			   (u8)23
/*																							   */
#define SWI_PIN24    			   (u8)24
#define SWI_PIN25    			   (u8)25
#define SWI_PIN26    			   (u8)26
#define SWI_PIN27    			   (u8)27
#define SWI_PIN28    			   (u8)28
#define SWI_PIN29    			   (u8)29
#define SWI_PIN30    			   (u8)30
#define SWI_PIN31    			   (u8)31
/*																						       */
/***********************************************************************************************/


/*************************************************************************************************/
/* Description: Initialize the Seven Segment Port and  value (if needed)                         */
/*																					             */
/* Inputs : Void															                     */
/* Outputs: Void																	             */
/*																					             */

u8 SWI_u8Init(void) ;

/*																					             */
/*************************************************************************************************/


/*************************************************************************************************/
/* Description: Write a Number on the Seven Segments 								             */
/*																				            	 */
/* Inputs : Copy_u8SWINb    -> No of the desired Switch				 			                 */
/* 			*Copy_u8State   -> The Value to be returned 										 */
/* Outputs: u8Error -> Error State													             */
/*																					             */

u8 SWI_u8GetSWIState(u8 Copy_u8SWINb , u8 * Copy_u8State) ;

/*																					             */
/*************************************************************************************************/



#endif /* SWI_COMPONENT_SWI_INTERFACE_H_ */
