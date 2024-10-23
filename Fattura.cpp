#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome, cognome, indirizzo, citta, numeroTelefono, codiceSconto;
    int giorno, mese, anno, prodotto, quantita;
    double totale, imponibile, iva;
    const float IVA = 0.22;
    const string CODICE_SCONTO = "TAPPOFRIGAU25";
    const float SCONTO = 5.0;
    const float SPESE_IMBALLAGGIO = 50.0;

    // Dati utente
    cout << "Inserisci il tuo nome: ";
    getline(cin, nome);
    cout << "Inserisci il tuo cognome: ";
    getline(cin, cognome);
    cout << "Inserisci il tuo giorno di nascita (1-31): ";
    cin >> giorno;
    cout << "Inserisci il tuo mese di nascita (1-12): ";
    cin >> mese;
    cout << "Inserisci il tuo anno di nascita: ";
    cin >> anno;
    cin.ignore(); // Pulire il buffer di input
    cout << "Inserisci il tuo indirizzo: ";
    getline(cin, indirizzo);
    cout << "Inserisci la tua citt�: ";
    getline(cin, citta);
    cout << "Inserisci il tuo numero di telefono: ";
    getline(cin, numeroTelefono);

    // Scelta del prodotto
    cout << "\nScegli un prodotto:\n";
    cout << "1. Pistapoddighes - 15 Euro\n";
    cout << "2. Squadra tunda - 17 Euro\n";
    cout << "3. Viaggio al Cuerro della Fuerca - 600 Euro\n";
    cin >> prodotto;

    // Quantit�
    cout << "Inserisci la quantit� desiderata: ";
    cin >> quantita;

    // Calcolo del totale senza IVA
        if (prodotto == 1) {
            imponibile = quantita * 15.0;
        } else {
            if (prodotto == 2) {
                imponibile = quantita * 17.0;
            } else {
                if (prodotto == 3) {
                    imponibile = quantita * 600.0;
                } else {
                    cout << "Scelta non valida!" << endl;
                    return 1;
                }
            }
        }


    // Calcola l'IVA
    iva = imponibile * IVA;
    totale = imponibile + iva;

    // Verifica del codice sconto
    cout << "Hai un codice sconto? Inseriscilo: ";
    cin >> codiceSconto;
    if (codiceSconto == CODICE_SCONTO) {
        totale = totale - SCONTO + SPESE_IMBALLAGGIO;
    } else

    {
        cout << "Codice Sconto Non valido!";
    }

    // Output finale
    cout << "\n--- Fattura ---\n";
    cout << "Nome: " << nome << endl;
    cout << "Cognome: " << cognome << endl;
    cout << "Data di nascita: " << giorno << "/" << mese << "/" << anno << endl;
    cout << "Indirizzo: " << indirizzo << endl;
    cout << "Citt�: " << citta << endl;
    cout << "Numero di telefono: " << numeroTelefono << endl;
    cout << "Prodotto scelto: " << (prodotto == 1 ? "Pistapoddighes" : prodotto == 2 ? "Squadra tunda" : "Viaggio al Cuerro della Fuerca") << endl;
    cout << "Quantit�: " << quantita << endl;
    cout << "Imponibile: " << imponibile << " Euro" << endl;
    cout << "IVA (22%): " << iva << " Euro" << endl;
    cout << "Totale: " << totale << " Euro" << endl;

    return 0;
}
