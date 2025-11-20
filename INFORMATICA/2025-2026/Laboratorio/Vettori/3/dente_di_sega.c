/*
* Cognome: Gotuzzo
* Nome: Sergio
* Classe: 3 AIT
* Data: 12/11/2025
* Titolo: Vettore “a dente di sega”
* Descrizione: Scrivi una funzione int e_dente_di_sega(int v[], int n) che verifichi se il vettore ha un
andamento alternato: ogni elemento (tranne i primi e gli ultimi) deve essere o un picco o un
avvallamento.
Ossia:
v[0] < v[1] > v[2] < v[3] > ...
oppure
v[0] > v[1] < v[2] > v[3] < ...

Restituisci 1 se vero, 0 altrimenti.
Esempi:
[1, 3, 2, 4, 1] → ✅
[1, 2, 3, 4] → ❌
[5, 1, 6, 2] → ✅
*/

#include <stdio.h>
#include <stdbool.h>

bool e_dente_di_sega(int arr[], int len) {
    bool maggiore = arr[0] > arr[1];

    for (int i = 0; i < len - 1; i++) {
        if (maggiore == (arr[i] < arr[i + 1])) {
            return false;
        }

        maggiore = !maggiore;
    }

    return true;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int len = sizeof(arr)/sizeof(int);

    if (e_dente_di_sega(arr, len)) {
        printf("L'array e' a dente di sega\n");
    } else {
        printf("L'array NON e' a dente di sega\n");
    }

    return 0;
}