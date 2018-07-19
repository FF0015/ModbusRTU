
/**
**--------------�ļ���Ϣ--------------------------------------------------------------------------------
**��   ��   ��: ds18b20.h
**��   ��   ��: ���Ʒ�
**����޸�����: 2011��5��20��
**��        ��: 
** �̼�����Ϣ��V2.03             
**--------------��ʷ�汾��Ϣ----------------------------------------------------------------------------
** ������: ���Ʒ�
** ��  ��: v0.01
** �ա���: 
** �衡��: ԭʼ�汾
**
**--------------��ǰ�汾��Ϣ----------------------------------------------------------------------------
** ������: ���Ʒ�
** ��  ��: v0.01
** �ա���:  2011��5��20��
** �衡��: ��ǰ�汾
**
**------------------------------------------------------------------------------------------------------*/

#ifndef __DS18B20_H
#define __DS18B20_H 

#include "stm32f10x.h"


////IO��������   Ҳ����������
//#define DS18B20_IO_IN()  {GPIOC->CRL&=0x000000F0;GPIOC->CRL|=0x00000040;} //pC1	  ��������ģʽ
//#define DS18B20_IO_OUT() {GPIOC->CRL&=0x000000F0;GPIOC->CRL|=0x00000030;} //PC1 ͨ�����������50MHZ



//IO��������	 
#define DS18B20_DQ_High    GPIO_SetBits(GPIOC,GPIO_Pin_1)  //PC1   DQ=1	  
#define DS18B20_DQ_Low     GPIO_ResetBits(GPIOC,GPIO_Pin_1)//PC1   DQ=0
#define DS18B20_DQ_IN     GPIO_ReadInputDataBit(GPIOC, GPIO_Pin_1)  //����DQ
   	
u8 DS18B20_Init(void);//��ʼ��DS18B20
short DS18B20_Get_Temp(void);//��ȡ�¶�
void DS18B20_Start(void);//��ʼ�¶�ת��
void DS18B20_Write_Byte(u8 dat);//д��һ���ֽ�
u8 DS18B20_Read_Byte(void);//����һ���ֽ�
u8 DS18B20_Read_Bit(void);//����һ��λ
u8 DS18B20_Check(void);//����Ƿ����DS18B20
void DS18B20_Rst(void);//��λDS18B20   
void DS18B20_test(void);


void DS18B20_IO_IN(void);
void DS18B20_IO_OUT(void);

#endif


















