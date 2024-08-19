#include <REGX52.H>
#include "Delay.h"
#include "Uartl.h"


//unsigned char Sec;
	
void main()
{
	Uart1_Init();
	Uartl_SendByte(0x42);
	while(1)
	{

	}
}

void Uart1_Routine() interrupt 4
{
	if (RI==1)				//检测串口1接收中断
	{
		P2=~SBUF;
		Uartl_SendByte(SBUF);
		RI = 0;			//清除串口1接收中断请求位
	}
}