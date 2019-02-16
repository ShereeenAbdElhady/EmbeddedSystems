/************************************************************************************/
/* Description : This is a Configuration file that contains the Allowed Customizati-*/
/*               ons for Seven Segments Component                                   */
/*               allowed only for Application Engineers 							*/
/*																					*/
/* Created on  : Jan 29, 2019 														*/
/* Author      : OMDA																*/
/************************************************************************************/





#ifndef KPD_COMPONENT_SSEG_CONFIG_H_
#define KPD_COMPONENT_SSEG_CONFIG_H_



#include "KPD_Interface.h"
#include "KPD_priv.h"





/* Define Parameters of KPDs used ***************************/
/*															*/

#define KPD_NUMBER_OF_ROWS			4
#define KPD_NUMBER_OF_COL			3

/* choose between PULL_UP or PULL_DOWN						*/
#define KPD_PULL_TYPE				KPD_PULL_UP

/*															*/
/************************************************************/



/*************************************   AVR  DEFINITIONS   ************************************/
/* Description : Defining the chosen KPD Pins On AVR ATmel32, Which contain 32 Pins  		   */
/* Ranges from (0 -> 31) 																	   */
/*                                                                                             */

u8 KPD_Au8RowDefinitions[KPD_NUMBER_OF_ROWS] = {KPD_PIN8,
												KPD_PIN9,
												KPD_PIN10,
												KPD_PIN11	 };

u8 KPD_Au8ColDefinitions[KPD_NUMBER_OF_COL ] = {KPD_PIN12,
												KPD_PIN13,
												KPD_PIN14    };

/*																						       */
/***********************************************************************************************/






#endif /* SSEG_COMPONENT_SSEG_CONFIG_H_ */
