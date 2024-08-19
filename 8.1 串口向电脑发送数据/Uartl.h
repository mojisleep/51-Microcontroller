void Uart1_Init(void)	//4800bps@11.0592MHz    串口初始化
{
	PCON |= 0x80;		//使能波特率倍速位SMOD
	SCON = 0x50;		//8位数据,可变波特率
	TMOD &= 0x0F;		//设置定时器模式
	TMOD |= 0x20;		//设置定时器模式
	TL1 = 0xF4;			//设置定时初始值
	TH1 = 0xF4;			//设置定时重载值
	ET1 = 0;			//禁止定时器中断
	TR1 = 1;			//定时器1开始计时
}


void Uartl_SendByte(unsigned char Byte)//发送一个字节
{
	SBUF=Byte;
	while(TI==1)
	{
		TI=0;
	}
}
