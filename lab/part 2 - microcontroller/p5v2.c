#include <8051.h>

unsigned char i;

int main() {
	TR0 = 0;
	TMOD = 0x01;
	TF0 = 0; // masura de precautie
	TH0 = 4;
	TL0 = 0;
	i = 1;
	P1 = ~i;
	TR0 = 1;
	while(1) {
		TR0 = P2_0;
		if (TF0 == 1) {
			TF0 = 0;
			TH0 = 4;
			TL0 = 0;
			P1 = ~i;
			if (i == 0x80) i = 1;
			else i = i << 1;
		}
	}
}
