#include <REGX52.H>
#include <INTRINS.H>
 
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
	unsigned char b=0;
	while(1)
	{
		if(P3_1==0)
		{
			Delay_ms(20);
			while(P3_1==0)
				Delay_ms(20);
			
			b++;
			P2=~b;
		}
	}
}
