//program ca sa se aprinda un singur led pe rand
#include <8051.h>
int main(){
unsigned char i;
i=1;
while(1){
	P1 = ~i; //il negam pe i pentru ca atunci cand i = 0, led ul este aprins
if(i == 0x80)
	i=1;
else
	i = i<<1; //il shiftam ca sa se aprinda pe rand un singur led
}
return 0;
}

