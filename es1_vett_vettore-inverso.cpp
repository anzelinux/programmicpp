#include <iostream>
using namespace std;

const int MAX_ELEMENTI = 100;

int main() {
int n;
int v[MAX_ELEMENTI];

cout << "Inserisci il numero di elementi del vettore (max " << MAX_ELEMENTI << "): ";
cin >> n;

// Leggi gli elementi del vettore
cout << "Inserisci gli elementi del vettore: ";
for (int i = 0; i < n; i++) {
    cin >> v[i];
}

// Visualizza gli elementi del vettore in senso inverso
cout << "Elementi del vettore in senso inverso: ";
for (int i = n-1; i >= 0; i--) {
    cout << v[i] << " ";
}

cout << endl;
return 0;
