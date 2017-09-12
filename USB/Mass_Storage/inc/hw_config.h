/**
  ******************************************************************************
  * @file    hw_config.h
  * @author  MCD Application Team
  * @version V4.0.0
  * @date    21-January-2013
  * @brief   Hardware Configuration & Setup
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2013 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */


/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __HW_CONFIG_H
#define __HW_CONFIG_H

/* Includes ------------------------------------------------------------------*/
#include "platform_config.h"
#include "usb_type.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported define -----------------------------------------------------------*/
#define MASS_MEMORY_START     0x04002000
#define BULK_MAX_PACKET_SIZE  0x00000040
#define LED_ON                0xF0
#define LED_OFF               0xFF

/**********************************************************
                       �������¶���
    ������ֲ����LCD����ʾ�豸����ʾ�������̺Ͳ�����ʾ
**********************************************************/

#define USB_USARTx				2	/* ���岻ͬ�Ĵ��ںţ�������ֲ�޸Ĵ������� */
									/* ��Χֻ����1 ~ 5 */

extern USART_TypeDef* USB_USART_n;	//�����л�

/* ���Ӳ���״ָ̬ʾ */
//bit0�����ڷ������ݵ�USB��PC��
//bit1�����ڽ�������USB��PC������
extern uint8_t USB_COMPort_STA;
extern USART_InitTypeDef USART_InitStructure;	//������LCD����ʾ��ص���Ϣ

/**********************************************************
                       ������������
**********************************************************/


#define USART_RX_DATA_SIZE   2048	//���ڽ������ݻ�������С2Kbyte
/* Exported functions ------------------------------------------------------- */

void Set_USBClock(void);
void Enter_LowPowerMode(void);
void Leave_LowPowerMode(void);
void USB_Interrupts_Config(void);
void USB_Cable_Config (FunctionalState NewState);
void USART_Config_Default(void);
bool USART_Config(void);
void USB_To_USART_Send_Data(uint8_t* data_buffer, uint8_t Nb_bytes);
void USART_To_USB_Send_Data(void);
void Handle_USBAsynchXfer (void);
void Get_SerialNum(void);
void USB_Send_Data(u8 dat);	//�Ӵ��ڽ��յ����� -> USB
void USB_Send_String(u8 *dat,u8 leng);
/* External variables --------------------------------------------------------*/

#endif  /*__HW_CONFIG_H*/
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/