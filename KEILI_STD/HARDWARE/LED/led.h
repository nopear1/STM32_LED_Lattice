#ifndef __LED_H
#define __LED_H	 
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//ALIENTEKս��STM32������
//LED��������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2012/9/2
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) ������������ӿƼ����޹�˾ 2009-2019
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 
#define LED_COM1 PBout(1)// PB1
#define LED_COM2 PBout(3)// PB1
#define LED_COM3 PBout(4)// PB1
#define LED_COM4 PBout(5)// PB1
#define LED_COM5 PBout(6)// PB1
#define LED_COM6 PBout(7)// PB1
#define LED_COM7 PBout(8)// PB1
#define LED_COL8 PBout(9)// PB1
#define LED_COL9 PBout(10)// PB1
#define LED_COL10 PBout(11)// PB1
#define LED_COL11 PBout(12)// PB1
#define LED_COL12 PBout(13)// PB1
#define LED_COL13 PBout(14)// PB1
#define LED_COL14 PBout(15)// PB1


void LED_Init(void);//��ʼ��

		 				    
#endif
