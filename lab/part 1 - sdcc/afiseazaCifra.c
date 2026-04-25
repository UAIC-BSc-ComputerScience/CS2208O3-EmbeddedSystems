//afisam fiecare cifra pe rand
#include <8051.h>
unsigned char c, i;
unsigned char t[10];
int main(){
	t[0] = 0xC0; //afisam 0
	t[1] = 0xF9; //afisam 1
	t[2] = 0xA4; //2
	t[3] = 0xB0; //3
	t[4] = 0x99; //4
	t[5] = 0x92; //5
	t[6] = 0x82; //6
	t[7] = 0xF8; //7
	t[8] = 0x80; //8
	t[9] = 0x90; //9
	c = 0;
while(1){
	P1=t[c];
	P3 = 0;
	c = (c+1)%10;
	for(i=0;i<5;i++);
}
return 0;
}