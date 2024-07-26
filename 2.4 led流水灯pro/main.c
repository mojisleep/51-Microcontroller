#include <REGX52.H>
#include <INTRINS.H>

void Delay_ms(unsigned int a)	//@11.0592MHz
{
	unsigned char data i, j;
	while(a)
	{
	i = 2;
	j = 199;
	do
	{
		while (--j);
	} while (--i);
	a=a-1;
	}
	
}

void main()
{
	while(1)
	{
		P2=0xfe;//1111 1110
		Delay_ms(500);
		P2=0xfd;//1111 1101
		Delay_ms(500);
		P2=0xfb;//1111 1011
		Delay_ms(500);
		P2=0xf7;//1111 0111
		Delay_ms(500);
		P2=0xef;//1110 1111
		Delay_ms(500);
		P2=0xdf;//1101 1111
		Delay_ms(500);
		P2=0xbf;//1011 1111
		Delay_ms(500);
		P2=0x7f;//0111 1111
		Delay_ms(500);
	}
	
}
