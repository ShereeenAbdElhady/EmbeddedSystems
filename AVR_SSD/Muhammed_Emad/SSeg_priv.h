/************************************************************************************/
/* Description : This is a Private file that contains the private definitions and   */
/*               Private functions needed to use the Seven Segment Component        */
/* 				 This Driver Supports AVR ATmel32                                   */
/*																					*/
/* Created on  : Jan 29, 2019 														*/
/* Author      : OMDA																*/
/************************************************************************************/




#ifndef SSEG_COMPONENT_SSEG_PRIV_H_
#define SSEG_COMPONENT_SSEG_PRIV_H_


#define SSD_NB_OF_PINs 		8
#define SSD_MSB  			7
#define SSD_GND_VAL			0
#define SSD_VCC_VAL			1


u8 Private_Au8DecToBinaryMask[11]={0b01111110 , 0b00011000 , 0b01101101 , 0b00111101 , 0b00011011 , 0b00110111 , 0b01110111 , 0b00011110 , 0b01111111 , 0b00111111 , 0b00000000} ;


#define SSD_INIT_VAL_0 			0b01111110
#define SSD_INIT_VAL_1 			0b00011000
#define SSD_INIT_VAL_2 			0b01101101
#define SSD_INIT_VAL_3 			0b00111101
#define SSD_INIT_VAL_4 			0b00011011
#define SSD_INIT_VAL_5 			0b00110111
#define SSD_INIT_VAL_6 			0b01110111
#define SSD_INIT_VAL_7 			0b00011110
#define SSD_INIT_VAL_8 			0b01111111
#define SSD_INIT_VAL_9 			0b00111111
#define SSD_INIT_VAL_NULL 		0b00000000


#define SSD_COM_CATH 		1
#define SSD_COM_ANODE 		0

#define SSD_PIN_DIR_OUTPUT	1




#endif /* SSEG_COMPONENT_SSEG_PRIV_H_ */
