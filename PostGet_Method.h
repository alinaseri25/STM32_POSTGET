#ifndef __POSTGET_METHOD_H__
#define __POSTGET_METHOD_H__

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"
#include <stdio.h>
#include <string.h>

void setUserAgent(uint8_t* _UserAgent);
uint8_t* getUserAgent(void);

uint8_t* sendDataPOST(uint8_t* PageAddr,uint8_t* HostAddr,uint8_t* POSTData);
uint8_t* sendDataGET(uint8_t* PageAddr,uint8_t* HostAddr,uint8_t* GETData);


#endif /* __POSTGET_METHOD_H__ */
