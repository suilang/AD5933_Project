/********************************************************************************
*                                  uC/OS-III
*							
*                              ARM Cortex-M3 Port
*
* File      	: key_led.C
* Version   	: V1.0
* By        	: 张鹏程
* Description   : 多路选通控制
* Date          : 2017.06.11
*******************************************************************************/


#include"adg1608.h" 

void Key_GPIO_Config(void)  //key引脚配置
{
  GPIO_InitTypeDef GPIO_InitStructure;

  	
  	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);

 	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8; 
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_10MHz; 
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 

	GPIO_Init(GPIOC, &GPIO_InitStructure);
	GPIO_ResetBits(GPIOC, GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8 );
}

void GPIOStart1(){
		GPIO_ResetBits(GPIOC, GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3 );

}
void GPIOStart2(){
		GPIO_ResetBits(GPIOC, GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7|GPIO_Pin_8 );

}
void U1Select(u8 index){
	
	switch(index){
		case 1 :GPIOStart1();GPIO_SetBits(GPIOC,GPIO_Pin_0);break;
		case 2 :GPIOStart1();GPIO_SetBits(GPIOC,GPIO_Pin_0|GPIO_Pin_1);break;
		case 3 :GPIOStart1();GPIO_SetBits(GPIOC,GPIO_Pin_0|GPIO_Pin_2);break;		
		case 4 :GPIOStart1();GPIO_SetBits(GPIOC,GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2);break;
		case 5 :GPIOStart1();GPIO_SetBits(GPIOC,GPIO_Pin_0|GPIO_Pin_3);break;
		case 6 :GPIOStart1();GPIO_SetBits(GPIOC,GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_3);break;
		case 7 :GPIOStart1();GPIO_SetBits(GPIOC,GPIO_Pin_0|GPIO_Pin_2|GPIO_Pin_3);break;
		case 8 :GPIOStart1();GPIO_SetBits(GPIOC,GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3);break;
		default :GPIOStart1();;break;		
	}
}

void U2Select(u8 index){
	
	switch(index){
		case 1 :GPIOStart2();GPIO_SetBits(GPIOC,GPIO_Pin_4);break;
		case 2 :GPIOStart2();GPIO_SetBits(GPIOC,GPIO_Pin_4|GPIO_Pin_5);break;
		case 3 :GPIOStart2();GPIO_SetBits(GPIOC,GPIO_Pin_4|GPIO_Pin_6);break;		
		case 4 :GPIOStart2();GPIO_SetBits(GPIOC,GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6);break;
		case 5 :GPIOStart2();GPIO_SetBits(GPIOC,GPIO_Pin_4|GPIO_Pin_7);break;
		case 6 :GPIOStart2();GPIO_SetBits(GPIOC,GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_7);break;
		case 7 :GPIOStart2();GPIO_SetBits(GPIOC,GPIO_Pin_4|GPIO_Pin_6|GPIO_Pin_7);break;
		case 8 :GPIOStart2();GPIO_SetBits(GPIOC,GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_6|GPIO_Pin_7);break;
		default :GPIOStart2();;break;		
	}
}

void ModelSelect(u8 index){
	
	switch(index){
		
		case 1:U1Select(1);U2Select(2);break;
		case 2:U1Select(1);U2Select(3);break;
		case 3:U1Select(1);U2Select(4);break;
		case 4:U1Select(1);U2Select(5);break;
		case 5:U1Select(1);U2Select(6);break;
		case 6:U1Select(1);U2Select(7);break;
		case 7:U1Select(1);U2Select(8);break;
		case 8:U1Select(2);U2Select(3);break;
		case 9:U1Select(2);U2Select(4);break;
		case 10:U1Select(2);U2Select(5);break;
		case 11:U1Select(2);U2Select(6);break;
		case 12:U1Select(2);U2Select(7);break;
		case 13:U1Select(2);U2Select(8);break;
		case 14:U1Select(2);U2Select(1);break;
		case 15:U1Select(3);U2Select(4);break;
		case 16:U1Select(3);U2Select(5);break;
		case 17:U1Select(3);U2Select(6);break;
		case 18:U1Select(3);U2Select(7);break;
		case 19:U1Select(3);U2Select(8);break;
		case 20:U1Select(3);U2Select(1);break;
		case 21:U1Select(3);U2Select(2);break;
		case 22:U1Select(4);U2Select(5);break;
		case 23:U1Select(4);U2Select(6);break;
		case 24:U1Select(4);U2Select(7);break;
		case 25:U1Select(4);U2Select(8);break;
		case 26:U1Select(4);U2Select(1);break;
		case 27:U1Select(4);U2Select(2);break;
		case 28:U1Select(4);U2Select(3);break;
		default :GPIOStart1();GPIOStart2();break;
		
	}
	
}





