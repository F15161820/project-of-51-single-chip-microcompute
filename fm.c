#include <reg52.h>

#define on 0
#define off 1
sbit fm = P2^3;

void delay(unsigned int xms)
{
	unsigned int i,j;
	for(i=xms;i>0;i--)
	{
		for(j=112;j>0;j--);
	}
}


void main()
{
	while(1)
	{
		fm = on;
		delay(500);
		fm = off;
		delay(500);
	}
}