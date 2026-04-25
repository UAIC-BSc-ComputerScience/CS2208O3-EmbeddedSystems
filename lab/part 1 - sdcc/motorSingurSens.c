//program pentru a face motorul sa se miste incontinuu intr-un singur sens
#include <8051.h>
int main(){
while(1){
		P3_0 = 1; //bitul 0 de la P3
		P3_1 = 0;
}
return 0;
}