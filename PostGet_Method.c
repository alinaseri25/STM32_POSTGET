/* Includes ------------------------------------------------------------------*/
#include "PostGet_Method.h"

uint8_t UserAgent[50] = "STM32 Micro(LWIP)";
uint8_t RetData[1000];

void setUserAgent(uint8_t* _UserAgent)
{
	sprintf((char *)UserAgent,"%s",_UserAgent);
}

uint8_t* getUserAgent(void)
{
	return UserAgent;
}

uint8_t* sendDataPOST(uint8_t* PageAddr,uint8_t* HostAddr,uint8_t* POSTData)
{	
	sprintf((char*)RetData,"POST %s HTTP/1.1\r\nHost:%s\r\nUser-Agent:%s\r\nContent-Type: application/x-www-form-urlencoded\r\nContent-Length: %d\r\n\r\n%s\r\n"
		,PageAddr,HostAddr,UserAgent,strlen((char *)POSTData),POSTData);
	
	return RetData;
}

uint8_t* sendDataGET(uint8_t* PageAddr,uint8_t* HostAddr,uint8_t* GETData)
{	
	sprintf((char*)RetData,"GET %s?%s HTTP/1.1\r\nHost:%s\r\nUser-Agent:%s\r\nContent-Type: application/x-www-form-urlencoded\r\n\r\n"
		,PageAddr,GETData,HostAddr,UserAgent);
	
	return RetData;
}
