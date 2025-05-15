// Crea un programma che calcoli la media di 5 elementi e stampi tutti 
// gli elementi sopra la media

#include <iostream>
using namespace std;

int main(){
	
	const int max=5;float media=0;
	int v[max], c; 
	cout<<"Inserisci 5 numeri interi per caricare il vettore"<<endl;
		cout<<"Calcolero\'per te la loro media"<<endl;
	for (c=0;c<5; c++){
		
		cout << "Inserisci il numero "<<c+1<<endl;
		
		cin>>v[c];  
		media=media+v[c];	
		
	}
	// pulisci lo schermo
	system("cls");
	
	//calcola la media
	
	
	
	media=media/c;
	cout<< "La media vale "<<media<<endl;
	
	//Stampa numeri sopra la media
		
	for (c=0;c<5; c++){
		
		if (v[c]>media){
		
		cout<<"Il numero alla posizione "<<c<<"corrispondente al ";
		cout<<c+1<<"numero inserito vale"<<v[c]<<endl;	
		}
	}
	
	cout<<"Grazie per aver utilizzato il programma!!!";
	
	
	
}
