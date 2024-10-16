#include <iostream>
using namespace std;

int main(){

//dichiarazione variabili
int n,conta;
// inizializzazione variabili

conta=0;

//calcolo quanti numeri interi sono stati inseriti con ciclo while

while (n!=0) {
cout<<"inserisci un numero o premi il tasto 0 per interrompere il ciclo";
cin>>n;
conta=conta+1;

}

cout<<"sono stati inseriti "<<conta<<" numeri, incluso il numero 0, utilizzato per interrompere il ciclo";

system("pause");
return 0;
}
