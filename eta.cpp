#include <iostream> //dichiariamo la libreria
using namespace std;//abilitiamo utilizzo di cin e cout

const int ANNOINCORSO=2024;//dichiarazione di costante

int main(){

int annoNascita, eta; 
/*
abbiamo dichiarato in un'unica stringa due variabili
di tipo intero
*/
//serie di output da schermo
cout<<"Questo programma analizza l\'eta dell'utente a partire dal suo anno di nascita";
cout<<endl;
cout<<"Inserisci anno di nascita";
cin>>annoNascita;//acquisisce dato da tastiera in input

eta= ANNOINCORSO - annoNascita;

//Struttura di selezione

if (eta>17) { //condizione vera
              cout<<"Utente Maggiorenne."<<endl<<"\tHai\t"<<eta<<"\tanni";

            }
            else
            { //condizione falsa
              cout<<"Utente Minorenne."<<endl<<"\tHai\t"<<eta<<"\tanni";

            }
}
