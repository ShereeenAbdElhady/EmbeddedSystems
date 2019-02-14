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



#include "SWI_Interface.h"
#include "SWI_priv.h"





/* Define Number of SWIs used *******************************/
/*															*/
#define SSD_NUMBER_OF_SWI 			2
/*															*/
/************************************************************/




/* Define the SWI Pins ****************************************************************************/
/* Range : Choose Pins from the interface file  (Ex. SWI_PIN4)                                    */
/*		  													                                      */

u8 SWI_Au8ArrayToSWIPin[SSD_NUMBER_OF_SWI] = {SWI_PIN0,SWI_PIN1};

/*															                                      */
/**************************************************************************************************/



/* Define the SWI Type ****************************************************************************/
/* Range : SWI_PULL_UP									                        		          */
/*		   SWI_PULL_DOWN									                                      */

u8 SWI_Au8ArraySWIType[SSD_NUMBER_OF_SWI] = {SWI_PULL_DOWN,SWI_PULL_DOWN} ;

/*															                                      */
/**************************************************************************************************/






#endif /* SSEG_COMPONENT_SSEG_CONFIG_H_ */
