#include 
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
                //inserire caso 2
                break;
            case 3:
                //inserire caso 3
                break;
            case 4:
                 //inserire caso 4
                break;
            
            case 5:
                // inserisci caso 5
                break;
                
            case 6:
                 // inserisci caso 6
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




