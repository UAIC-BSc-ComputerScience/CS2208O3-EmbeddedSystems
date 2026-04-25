#include <8051.h>

unsigned char c, i, x;
unsigned char t[10];
unsigned char cifre[3];
unsigned char n;

int main() {
	t[0] = 0xC0; //1100 0000
	t[1] = 0XF9;
	t[2] = 0xA4; //1010 0100
	t[3] = 0xB0;
	t[4] = 0x99; //1001 1001
	t[5] = 0x92; //1001 0010
	t[6] = 0x82; //1000 0010
	t[7] = 0xF8; //1111 1000
	t[8] = 0x80; //1000 0000
	t[9] = 0x90; //1001 0000
	c = 58;
	n = 0;
	cifre[0] = c % 10;
	cifre[1] = (c / 10) % 10;
	cifre[2] = c / 100;
	if(c >= 100) n = 3;
	else if (c >= 10) n = 2;
	else n = 1;
	x = 0;
	while(1) {
		i = cifre[x];
		P1 = 0xFF;
		P3 = x << 3;
		P1 = t[i];
		x = (x + 1) % n;
		for(i=0;i<5;i++);
	}
}