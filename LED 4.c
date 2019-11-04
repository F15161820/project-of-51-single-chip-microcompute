#include <reg52.h>
#define duan P0
#define wei P2
sbit wei1 = P2^4;
sbit wei2 = P2^5;
sbit wei3 = P2^6;
sbit wei4 = P2^7;

unsigned char sz[16]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};

void delayms(unsigned int x)
{
	unsigned int i,j;
	for(i=x;i>0;i--)
		for(j=112;j>0;j--);
}


void main()
{
	int k=0;
	while(1)
	{
		
		if(k<15)
			k++;
		else 
			k=0;
		duan = sz[k];
		wei1 = 1;
		wei2 = 1;
		wei3 = 1;
		wei4 = 1;
		delayms(500);
		if(k<15)
			k++;
		else 
			k=0;
		duan = sz[k];
		wei1 = 1;
		wei2 = 1;
		wei3 = 1;
		wei4 = 1;
		delayms(500);
		if(k<15)
			k++;
		else 
			k=0;
		duan = sz[k];
		wei1 = 1;
		wei2 = 1;
		wei3 = 1;
		wei4 = 1;
		delayms(500);
		if(k<15)
			k++;
		else 
			k=0;
		duan = sz[k];
		wei1 = 1;
		wei2 = 1;
		wei3 = 1;
		wei4 = 1;
		delayms(500);
	}



}