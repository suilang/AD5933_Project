#include "stm32_config.h"
#include "task_manage.h"
#include "led.h"
#include "lcd.h"
//#include "AD5933.H"
#include "I2C.h"
#include "key.h"

u8 Task_ID = Max_Task;
char str[30];
extern u32 SysTimer;
extern u32 Keycode;
extern	u8 _return;
float tempdate=0;
/**********************************************************
                           主函数
**********************************************************/

int main(void)
{
	USARTx_Init(115200);
	Key_GPIO_Config();
	Ini_I2c();
	
	MY_NVIC_PriorityGroup_Config(NVIC_PriorityGroup_2);	//设置中断分组
	delay_init(72);	//初始化延时函数
//	AD5933_GET();
//	tempdate=DA5933_Get_Rs();
	ModelSelect(7);
	printf("%s","eee");
	printf("%f",temdate);
	printf("%c",'H');
	while (1);
	
}

