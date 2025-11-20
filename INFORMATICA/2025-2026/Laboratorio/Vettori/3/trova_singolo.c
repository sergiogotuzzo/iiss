/*
* Cognome: Gotuzzo
* Nome: Sergio
* Classe: 3 AIT
* Data: 12/11/2025
* Titolo: Trova il “singolo” (elemento non ripetuto)
* Descrizione: In un vettore di lunghezza dispari, tutti gli elementi compaiono esattamente due volte, tranne uno.
Scrivi una funzione int trova_singolo(int v[], int n) che restituisca l’unico elemento che non
ha duplicato.
Vincoli:
Non puoi usare un vettore di frequenze (troppo grande se i numeri sono grandi).
Non puoi ordinare il vettore.
Esempio:
v = [4, 1, 2, 1, 2] → restituisce 4
*/

#include <stdio.h>

int trova_singolo(int arr[], int len) {
    int singolo = 0;

    for (int i = 0; i < len; i++) {
        singolo ^= arr[i];
    }

    return singolo;
}

int main() {
    int arr[] = {3, 3, 1, 2, 7, 2}, len = sizeof(arr)/sizeof(int);

    printf("Il valore singolo e': %d\n", trova_singolo(arr, len));

    return 0;
}