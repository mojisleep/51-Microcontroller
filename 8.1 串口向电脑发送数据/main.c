#include <REGX52.H>
#include "Delay.h"
#include "Uartl.h"


unsigned char Sec;
	
void main()
{
	Uart1_Init();
	while(1)
	{
		Uartl_SendByte(Sec);
		Sec++;
		Delay_ms(1000);
	}
}