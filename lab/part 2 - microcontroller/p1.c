#include <8051.h>

int main()
{
	unsigned char i;
	i=1;
	while(1) {
		P1=~i;
		if(i==0x80) i=1;
		else i = i<<1;
	}
return 0;
}