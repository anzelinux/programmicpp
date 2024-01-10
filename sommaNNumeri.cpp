#include <iostream>
using namespace std;

int main(){

//dichiarazione variabili
int n,tot;
// inizializzazione variabili

tot=0;

//calcolo quanti numeri interi sono stati inseriti con ciclo while

while (n!=0) {
cout<<"inserisci un numero o premi il tasto 0 per interrompere il ciclo";
cin>>n;
tot=tot+1;

}

cout<<"sono stati inseriti "<<tot<<" numeri, incluso il numero 0, utilizzato per interrompere il ciclo";

system("pause");
return 0;
}