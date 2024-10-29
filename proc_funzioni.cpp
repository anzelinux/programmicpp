#include <iostream>
using namespace std;

const int MAX = 100;

void caricaVettore(int v[], int& n) {
    cout << "Inserisci il numero di elementi del vettore: ";
    cin >> n;
    cout << "Inserisci gli elementi del vettore:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
}

void visualizzaVettore(int v[], int n) {
    cout << "Elementi del vettore:" << endl;
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void modificaElemento(int v[], int n) {
    int pos, nuovoValore;
    cout << "Inserisci la posizione dell'elemento da modificare: ";
    cin >> pos;
    if (pos < 0 || pos >= n) {
        cout << "Posizione non valida" << endl;
        return;
    }
    cout << "Inserisci il nuovo valore dell'elemento: ";
    cin >> nuovoValore;
    v[pos] = nuovoValore;
    cout << "Elemento modificato correttamente" << endl;
}

void scambiaDatiIndirizzo(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void scambiaDatiValore (int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

float mediavett (int v[], int n) {
	float somma=0;
	for (int i = 0; i < n; i++) {
	        somma=somma+v[i];
    }
	return somma/n;
} 


void menu() {
    cout << "1. Carica vettore" << endl;
    cout << "2. Visualizza vettore" << endl;
    cout << "3. Modifica un elemento del vettore" << endl;
    cout << "4. Scambia dati per indirizzo" << endl;
	cout << "5. Scambia dati per valore" << endl;
	cout << "6. Calcola media dati inseriti nel vettore con Funzione" << endl;
    cout << "0. Esci" << endl;
    cout << "Scegli un'opzione: ";
}

int main() {
    int v[MAX], n = 0;
    int scelta;

    do {
        menu();
        cin >> scelta;

        switch (scelta) {
            case 1:
                caricaVettore(v, n);
                break;
            case 2:
                visualizzaVettore(v, n);
                break;
            case 3:
                modificaElemento(v, n);
                break;
            case 4:
                int a, b;
                cout << "Inserisci il primo numero: ";
                cin >> a;
                cout << "Inserisci il secondo numero: ";
                cin >> b;
                scambiaDatiIndirizzo(a, b);
                cout << "Dati scambiati: " << a << " " << b << endl;
                break;
            
            case 5:
            	int c, d;
                cout << "Inserisci il primo numero: ";
                cin >> c;
                cout << "Inserisci il secondo numero: ";
                cin >> d;
                scambiaDatiValore(c, d);
                cout << "Dati scambiati: " << c << " " << d << endl;
                break;
                
            case 6:
    		float media;
            media=mediavett(v, n);
			cout<< "la media tra i numeri inseriti nel vettore e\' "<< media<<endl;	
            break;
            
            case 0:
                cout << "Uscita dal programma" << endl;
                break;
            default:
                cout << "Scelta non valida" << endl;
                break;
        }

        cout << endl;

    } while (scelta != 0);

    return 0;
}

