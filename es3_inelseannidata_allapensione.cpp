#include <iostream>
using namespace std;

const int ANNOINCORSO=2024, ETA_PENSIONAMENTO=65;


int main(){
    int annodinascita,allaPensione, eta;

cout<<("Inserisci la tua data di nascita")<<endl ;
cin>>annodinascita;

if (ANNOINCORSO<annodinascita){
    cout<<"Errore! Non sei ancora nato!"<<endl<<"Riavvia il programma";
    }
    else
    {
       eta=ANNOINCORSO-annodinascita;
       cout<<"Hai\t"<<eta<<" anni"<<endl;

                    if (eta<ETA_PENSIONAMENTO){
                        allaPensione=ETA_PENSIONAMENTO-eta;
                        cout<<"Per andare in pensione devi aspettare! "<<endl<<endl ;
                        cout<<"Giovanotto!! alla tua pensione mancano\t"<<allaPensione<<"\tanni";
                    }
                        else
                        {
                            cout<<"A chent\'annos in salude! Sei già in pensione";
                        }
    }



}
