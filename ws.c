#include <REGX52.H>
#define uint unsigned int
#define uchar unsigned char
sbit D1=P1^0;
void delay();
void main()
{
	while(1)
	{
		D1=0;
	  delay();
	  D1=1;
	  delay();
	}
}
void delay()
{
	uint x,y;
	for(x=200;x>0;x--)
		{
			for(y=290;y>0;y--);
		}
}