#ifndef __CRC16_H
#define __CRC16_H
#include "common.h"
//////////////////////////////////////////////////////////////////
//��������
extern uint8_t crc16_data[];
//////////////////////////////////////////////////////////////////	
//��������
uint16_t crc16tablefast(uint8_t *ptr, uint16_t len);
#endif