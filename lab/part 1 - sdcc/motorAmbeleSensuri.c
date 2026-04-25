//program pentru a face motorul sa-si schimbe sensul dupa un anumit timp
#include <8051.h>
/*
VARIANTA 1
unsigned char i;
int main(){
	P3 = 1;
while(1){
	for(i=0;i<10;i++) ; //pentru a sti cand trebuie sa se execute negatia de mai jos
	P3 = P3 ^ 3; //facem xor cu 3 pt ca 3 in baza 2 are si 1 si 0 si se inverseaza(neaga) bitii
}
}
*/
/* VARIANTA 2*/
unsigned char i, x;
int main(){
	x=1;
	while(1){
		P3 = x;
		for(i = 0; i<10;i++);
		x = x ^ 3;
	}
}