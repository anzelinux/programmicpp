#include <iostream>
#include <string>
using namespace std;

void indovina(string x){
string parola;
while (true){
	cout<<"> ";
	cin>>parola;
	if (parola==x){
	  break;}
	}
cout<<"Hai indovinato";
}

void scelta(){
cout<<"Questo Ã¨ un gioco intelligente. Scegli una categoria\n";
cout<<"Geografia Locale - scegli 1\n";
cout<<"Professori famosi - scegli 2\n";
cout<<"Zootecnia - scegli 3\n";
cout<<"Linguistica Sarda - scegli 4\n";
}

int main(){
int a;
scelta();

cout<<"trova la parola misteriosa\n";
cin>>a;
switch (a){
case 1: 
	cout<<"Paese della Baronia";
	indovina("posada");
	break;
case 2: 
	cout<<"Cognome del professore che ha inventato l\'informatica";
	indovina("cau");
	break;
case 3: 
	cout<<"Le nuvole sono bianche, papa veste di bianco, bianco e\' un ";
	cout<<"uovo sodo, il latte e\'bianco";
	cout<<"Cosa beve la mucca?";
	indovina("acqua");
	break;
case 4: 
	cout<<"Con questa parola puoi dire qualsiasi cosa";
	indovina("nighele");
	break;	
default : cout<<"Scelta non valida. Riprova";

}

cout<<endl<<"Bravo cervellone! alla prossima";



return 0;
}
