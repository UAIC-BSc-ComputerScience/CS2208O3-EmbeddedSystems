//verific daca o tasta este apasata, scanez tastele pe rand 
#include <8051.h>
unsigned char k;
unsigned char t[12];
//daca apas o anumita tasta, k va lua acea valoare
//daca nu apas nicio tasta, k=12
int main(){
	//configurari de testare pentru linii (verifica daca un element de pe linia cu valoarea atribuita lui P0 a fost apasat)
	
		while(1) {
		k = 12;
		P0 = 0xFE;
		if (P0_6 == 0) k = 10;
		if (P0_5 == 0) k = 0;
		if (P0_4 == 0) k = 11;
		P0 = 0xFD;
		if (P0_6 == 0) k = 7;
		if (P0_5 == 0) k = 8;
		if (P0_4 == 0) k = 9;
		P0 = 0xFB;
		if (P0_6 == 0) k = 4;
		if (P0_5 == 0) k = 5;
		if (P0_4 == 0) k = 6;
		P0 = 0xF7;
		if (P0_6 == 0) k = 1;
		if (P0_5 == 0) k = 2;
		if (P0_4 == 0) k = 3;
		if (k < 12) break;
	}
	//afisare cifra
	t[0] = 0xC0; //1100 0000 => cifra 0
	t[1] = 0XF9; //1
	t[2] = 0xA4; //1010 0100 => 2
	t[3] = 0xB0; //4
	t[4] = 0x99; //1001 1001 => 4
	t[5] = 0x92; //1001 0010 => 5
	t[6] = 0x82; //1000 0010 => 6
	t[7] = 0xF8; //1111 1000 => 7
	t[8] = 0x80; //1000 0000 => 8
	t[9] = 0x90; //1001 0000 => 9
	t[10] = 0x9C; // *
	t[11] = 0x89; // #
	while(1) {
		P3 = 0;
		P1 = t[k];
	}
	return 0;

	}
