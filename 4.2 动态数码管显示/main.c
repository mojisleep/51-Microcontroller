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


unsigned char input_number[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

void dtd (unsigned char location,c)
{
	switch(location)
	{
		case 1:	P2_2=1;P2_3=1;P2_4=1;break;
		case 2:	P2_2=0;P2_3=1;P2_4=1;break;
		case 3:	P2_2=1;P2_3=0;P2_4=1;break;
		case 4:	P2_2=0;P2_3=0;P2_4=1;break;
		case 5:	P2_2=1;P2_3=1;P2_4=0;break;
		case 6:	P2_2=0;P2_3=1;P2_4=0;break;
		case 7:	P2_2=1;P2_3=0;P2_4=0;break;
		case 8:	P2_2=0;P2_3=0;P2_4=0;break;
	}
	P0=input_number[c];
	Delay_ms(1);
	P0=0x00;
}

void main()
{
	
	while(1)
	{
		dtd(1,2);
		dtd(2,2);
		dtd(3,2);
		
	}
}
