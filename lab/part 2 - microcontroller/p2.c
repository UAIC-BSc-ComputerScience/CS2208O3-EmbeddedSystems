#include <8051.h>

unsigned char test;

int main() {
	P3 = 1;
	test = 0;
	while(1) {
		if(P2_0 == 0 && test == 0) {
			P3 = P3 ^ 3;
			test = 1;
		} else if (P2_0 == 1) test = 0;
	}
	return 0;
}