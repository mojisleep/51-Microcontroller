#include <REGX52.H>
#include "Key.H"
#include "Delay.H"
#include "Nixie.H"
#include "Buzzer.H"

unsigned char KeyNum=0;

void main()
{
	Nixie(1,0);
	while(1)
	{
		KeyNum=Key();
		if(KeyNum)
		{
			Buzzer_Time(100);
			Nixie(1,KeyNum);
		}
	}
}