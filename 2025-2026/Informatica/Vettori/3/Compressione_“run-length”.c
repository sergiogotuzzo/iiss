/*
* Cognome: Gotuzzo
* Nome: Sergio
* Classe: 3 AIT
* Data: 12/11/2025
* Titolo: Compressione “run-length” (semplice)
* Descrizione: Dato un vettore di interi ordinato, scrivi una funzione che lo “comprima” contando i valori consecutivi
uguali e memorizzando coppie (valore, conteggio) in un secondo vettore di strutture non
ammesse, quindi usa due vettori paralleli:

La funzione deve restituire il numero di gruppi distinti.
Esempio:
Input: [2, 2, 2, 5, 5, 7]
Output:
valori = [2, 5, 7]
occorrenze = [3, 2, 1]
Restituisce 3

Nota: non è richiesto un output grafico, solo il riempimento corretto dei due vettori.
*/

#include <stdio.h>

int main() {
    int arr[] = {2, 2, 2, 5, 5, 7};
    int len = sizeof(arr)/sizeof(int);

    int valoriDistinti = 1;

    for (int i = 0; i < len - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            valoriDistinti++;
        }
    }

    int valori[valoriDistinti];
    int last = 0;

    for (int i = 0, j = 0; i < len; i++) {
        if (arr[i] > last) {
            valori[j] = arr[i];
            last = arr[i];
            j++;
        }
    }

    int occorrenze[valoriDistinti];

    for (int i = 0; i < valoriDistinti; i++) {
        occorrenze[i] = 0;

        for (int j = 0; j < len; j++) {
            if (arr[j] == valori[i]) {
                occorrenze[i]++;
            }
        }
    }

    printf("Valori: ");

    for (int i = 0; i < valoriDistinti; i++) {
        printf("%d ", valori[i]);
    }

    printf("\n");

    printf("Occorrenze: ");

    for (int i = 0; i < valoriDistinti; i++) {
        printf("%d ", occorrenze[i]);
    }

    printf("\n");

    return 0;
}