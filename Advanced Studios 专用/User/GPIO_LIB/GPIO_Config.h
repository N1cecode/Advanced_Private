#ifdef __GPIO_CONFIG_H__
#define __GPIO_CONFIG_H__
#include "stm32f10x.h"

#define uint unsigned int
#define uchar unsigned char
	
//���ⶨ��

//���ر�������

extern GPIO_CFG GPIO_CONFIG;

//��������
extern int GPIO_INIT(uint port,uint16_t pin,uint8_t speed,uint8_t mode,uint8_t CLK);  //GPIOģʽ��ʼ������

#endif
