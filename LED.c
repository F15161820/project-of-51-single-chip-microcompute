#include <reg51.h>
#include <intrins.h>    //待进位循环左移？？       循环右移 _cror_(  ,  )
void delayms(unsigned char ms);
void xunhuan1();
void xunhuan2();
void quanliang();
void shechu();

void delayms(unsigned char ms)
{
	unsigned char i;
	while(ms--)
	{
		for (i=0;i<120;i++);
	}
}

void xunhuan1()
{
	int i;
	unsigned char LED;
	int status = 0;
	
	
	LED = 0xfe;
	P1 = LED;
	for(i=0;i<14;i++)
	{
		
	
		if(LED==0x7f)
			status = 1;
		if(LED==0xfe)
			status = 0; 
		if(status==0)
			LED = _crol_(LED,1); 
		if(status==1)
			LED = _cror_(LED,1);                               	
		P1 = LED;
		
		delayms(80);
	}

}

void suiji()
{
	int i;
	unsigned char LED;
	LED = 0xdf;
	P1 = LED;
	delayms(120);
	LED = 0xfd;
	P1 = LED;
	delayms(120);
	LED = 0x7f;
	P1 = LED;
	delayms(120);
	LED = 0xfe;
	P1 = LED;
	delayms(120);
	LED = 0xbf;
	P1 = LED;
	delayms(120);
	LED = 0xf7;
	P1 = LED;
	delayms(120);
	LED = 0xef;
	P1 = LED;
	delayms(120);
	LED = 0xfb;
	P1 = LED;
	delayms(120);
}


void xunhuan2()
{
	int i;
	unsigned char LED;
	int status = 0;
	int t=10;
	
	LED = 0xfe;
	P1 = LED;
	for(i=0;i<24;i++)
	{
		
		
		delayms(120);
	
		if(LED==0x7f)
			status = 1;
		if(LED==0xfe)
			status = 0; 
		if(status==0)
			LED = _crol_(LED,4); 
		if(status==1)
			LED = _cror_(LED,4);                               	
		P1 = LED;
		
	}

}

void shechu()
{
	int i;
	unsigned char LED;
	int status = 1;
	int t=10;
	
	LED = 0xfe;
	P1 = LED;
	
	for(i=0;i<56;i++)
	{
		delayms(20);
		if(i%7==0)
			status *= -1;
		
		if(status == 1)
			LED = _crol_(LED,1); 
		if(status == -1)
			LED = _cror_(LED,1);
	
		P1 = LED;
	}
		
}


void quanliang()
{
	int status = 1;
	unsigned char LED;
	int i;
	LED = 0xfe;
	P1 = LED;
	
	for(i=0;i<13;i++)
	{
		delayms(100);
		status *= -1;
		
		if(status == 1)
			LED = 0x00;
		if(status == -1)
			LED = 0xff;
		P1 = LED;
		
	}
	
	
}

void banliang()
{
	int status = 1;
	unsigned char LED;
	int i;
	LED = 0xff;
	P1 = LED;
	
	for(i=0;i<20;i++)
	{
		delayms(100);
		status *= -1;
		
		if(status == 1)
			LED = 0x0f;
		if(status == -1)
			LED = 0xf0;
		P1 = LED;
		
	}

}

void langchao()
{
	int i;
	unsigned char LED;
	int status = 0;
	LED = 0xff;
	P1 = LED;

	for(i=0;i<8;i++)
	{
		if(i==0)
			LED = 0xfe;
		LED = LED<<1 ;
		delayms(60);
		P1 = LED;
	}
	for(i=0;i<8;i++)
	{
		if(i==0)
		{	
			LED = 0x7f;
			P1 = ~LED;
			delayms(60);
			continue;
		}
		LED = LED>>1 ;
		P1 = ~LED;
		delayms(60);
	}
	
}









	main()
{
	unsigned char LED;
	int status = 0;
	LED = 0xfe;
	P1 = LED;
	while(1)
 {
	xunhuan1();
	
	quanliang();
	 
	banliang();
	 
	suiji();
	 
	langchao();
	 
	
	 
	LED = 0x00;
	P1 = LED;
	delayms(120);
	LED = 0xff;
	P1 = LED;
	delayms(120);
	LED = 0x00;
	P1 = LED;
	delayms(300);
 }	
}


