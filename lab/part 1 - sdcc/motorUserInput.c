//program ca sa mearga motorasul intr un sens oricat de mult si sa l schimbe cand ii da utilizatorul un input
//va merge doar daca userul apasa pe primul switcher(cel notat cu 0)
#include <8051.h>
int main(){
	P3 = 1; //folosim P3 pentru ca el duce la motoras
while(1){
	if(P2_0 == 0) //testam daca registrul din microcontroller care ne duce la switcher este 0
		P3 = 2;
	else
		P3 = 1;
	
}
}