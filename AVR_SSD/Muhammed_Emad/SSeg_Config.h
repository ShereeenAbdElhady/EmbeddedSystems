/************************************************************************************/
/* Description : This is a Configuration file that contains the Allowed Customizati-*/
/*               ons for Seven Segments Component                                   */
/*               allowed only for Application Engineers 							*/
/*																					*/
/* Created on  : Jan 29, 2019 														*/
/* Author      : OMDA																*/
/************************************************************************************/



#ifndef SSEG_COMPONENT_SSEG_CONFIG_H_
#define SSEG_COMPONENT_SSEG_CONFIG_H_



#include "SSeg_Interface.h"
#include "SSeg_priv.h"





/* Define Number of SSDs used *******************************/
/*															*/
#define SSD_NUMBER_OF_SSD 			1
/*															*/
/************************************************************/




/* Define the SSD Pins ****************************************************************************/
/* Range : Choose Pins from the interface file  (Ex. SSD_PIN4)                                    */
/*		  													                                      */

u8 SSD_Au8ArrayToSSDPin[SSD_NUMBER_OF_SSD][SSD_NB_OF_PINs]={{SSD_PIN24,SSD_PIN25,SSD_PIN26,
															SSD_PIN27,SSD_PIN28,SSD_PIN29,
															SSD_PIN30,SSD_PIN31/*MSB COM-PIN*/}};

/*															                                      */
/**************************************************************************************************/



/* Define the SSD Type ****************************************************************************/
/* Range : SSD_COM_CATH									                        		          */
/*		   SSD_COM_ANODE									                                      */

u8 SSD_Au8ArraySSDType[SSD_NUMBER_OF_SSD] = {SSD_COM_CATH} ;

/*															                                      */
/**************************************************************************************************/



/* Define the SSD Initial State *******************************************************************/
/* Range : SSD_VAL_0  ,  SSD_VAL_1  ,  SSD_VAL_2  ,  SSD_VAL_3                                    */
/*		   SSD_VAL_4  ,  SSD_VAL_5  ,  SSD_VAL_6  ,  SSD_VAL_7 		                              */
/*  	   SSD_VAL_8  ,  SSD_VAL_9  ,  SSD_VAL_NULL 					                          */

u8 SSD_Au8ArraySSDInitVal[SSD_NUMBER_OF_SSD] = {SSD_INIT_VAL_4} ;

/*															                                      */
/**************************************************************************************************/

















#endif /* SSEG_COMPONENT_SSEG_CONFIG_H_ */
