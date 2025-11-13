/*
* Cognome: Gotuzzo
* Classe: 3 AIT
* Data: 12/11/2025
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
    int arr[] = {5, 1, 6, 2}, len = sizeof(arr)/sizeof(int);

    if (e_dente_di_sega(arr, len)) {
        printf("Il vettore e' a dente di sega\n");
    } else {
        printf("Il vettore NON e' a dente di sega\n");
    }

    return 0;
}