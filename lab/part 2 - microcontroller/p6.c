#include <8051.h>

unsigned char n,i,c,z,j;
unsigned char t[10];

int main() {
	//initializari
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
	//while(1) {
		//achizitie semnal + afisare
		//for(i=0;i<100;i++);
	//}
	while(1) {
		P3 = 0XFF;
		P3_6 = 0;
		P3_6 = 1;
		while (P3_2 == 1);
		P3_7 = 0;
		n = P2;
		P3_7 = 1;
		c = n / 51;
		z = n % 51;
		z = z / 5;
		if (z == 10) {
			z = 9;
		}
		//if (n % 51 > 25) c++;
		
		//P0_7 = 1;
		
		//trimitem for-ul intr-o rutina de tratare
		//generam intrerupere pe baza unui timer
		
		for (j=0;j<100;j++){
			P3_3 = 0;
			P3_4 = 0;
			P1 = t[z];
			for(i=0;i<10;i++);
			P3_3 = 1;
			P1 = t[c];
			for(i=0;i<10;i++);
		}
		//P0_7 = 0;
	}
}