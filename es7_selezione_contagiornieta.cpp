#include <iostream>
using namespace std;

const int ANNOINCORSO=2024;


int main(){
    int annodinascita, giorniVita, eta;


cout<<("Inserisci anno di nascita")<<endl ;
cin>>annodinascita;

if (ANNOINCORSO<annodinascita){
    cout<<"Errore! Non sei ancora nato!"<<endl<<"Riavvia il programma";
    }
    else
    {
        //CONTA GIORNI MESI DI NASCITA
        eta=ANNOINCORSO-annodinascita;
        giorniVita=eta*365+(eta/4);

        cout<<"Hai approssimativamente \t"<<giorniVita<<"\t giorni di vita, con un\'approssimazione di circa un anno di errore ogni 100 anni alla data del tuo compleanno";

    }



}
