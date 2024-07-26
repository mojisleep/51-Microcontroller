#include <REGX52.H>
#include <INTRINS.H>
unsigned char b;

void Delay_ms(unsigned int a)	//@11.0592MHz
{
	unsigned char data i, j;
	while(a)
	{
	_nop_();
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
	P2=~0x01;
	while(1)
	{
		if(P3_1==0)
		{
			Delay_ms(20);
			while(P3_1==0);
			Delay_ms(20);
			b++;
			if(b>=8)
				b=0;
			P2=~(0x01<<b);
		}
		if(P3_0==0)
		{
			Delay_ms(20);
			while(P3_0==0);
			Delay_ms(20);
			
			if(b==0)
				b=7;
			else
				b--;
			P2=~(0x01<<b);
		}
	}
}
