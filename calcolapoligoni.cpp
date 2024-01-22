/*
DATO IL PERIMETRO DI UN POLIGONO CALCOLARE CON IL CICLO FOR IL PERIMETRO DI CINQUE POLIGONI
EQUILATERI

TRIANGOLO
QUADRATO
PENTAGONO
ESAGONO
ETTAGONO

*/

#include <iostream>
using namespace std;

int main(){

//dichiarazione variabili
int c, nLati;
float mLato,perimetro;
nLati=3;

cout<<"Inserire misura del lato";
cin>>mLato;
cout<<"Verrà calcolata la misura dei seguenti poligoni regolari identificati da un numero progressivo";
cout<< "1. TRIANGOLO "<<"2.QUADRATO "<<"3. PENTAGONO "<<"4. ESAGONO "<<"5. ETTAGONO"<<endl;

for (c=0; c<5; c++)
{
perimetro=nLati*mLato;
cout<<nLati-2<<"\t"<<perimetro<<endl;
nLati++;

}

system("pause");
return 0;
}