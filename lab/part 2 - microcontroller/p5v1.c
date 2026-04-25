#include <8051.h>

volatile unsigned char i;

void timer0(void) __interrupt 1 {
	TH0 = 4;
	TL0 = 0;
	if (i == 0x80) i = 1;
	else i = i << 1;
	P1 = ~i;
}

int main() {
	TR0 = 0;
	TMOD = 0x01;
	TF0 = 0; // masura de precautie
	TH0 = 4;
	TL0 = 0;
	i = 1;
	P1 = ~i;
	ET0 = 1;
	EA = 1;
	TR0 = 1;
	while(1) {
	}
}
