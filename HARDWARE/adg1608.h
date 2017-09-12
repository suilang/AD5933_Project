#ifndef  __ADG1608_H
#define  __ADG1608_H

#include "stm32F10x.h"

void Key_GPIO_Config(void);
void GPIOStart1(void);
void GPIOStart2(void);
void U1Select(u8 index);
void U2Select(u8 index);
void ModelSelect(u8 index);
#endif