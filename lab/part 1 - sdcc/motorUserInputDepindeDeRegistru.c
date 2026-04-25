//oprim motorul in functie de ce e pe switch-ul 1
#include <8051.h>
int main(){
while(1){
if(P2_1 == 0) //cand apas switch ul 1, motorul se opreste indiferent daca switch ul 0 este apasat sau nu
	P3 = 0;
else 
	if(P2_0 == 0) P3=1;
else
	P3 = 2;
}
}