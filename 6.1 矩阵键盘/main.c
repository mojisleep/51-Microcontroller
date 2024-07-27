#include <REGX52.H>
#include "LCD1602.h"
#include "Delay.h"
#include "MatrixKey.h"

int b=0;
void main()
{
	LCD_Init();
	LCD_ShowString(1,1,"MatrixKey:");
	while(1)
	{
		b=MatrixKey();
		if (b!=0)
			{
				LCD_ShowNum(1,11,b,2);
			}
	}
}