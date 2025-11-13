/*
* Cognome: Gotuzzo
* Classe: 3 AIT
* Data: 12/11/2025
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
    int arr[] = {4, 1, 2, 1, 2}, len = sizeof(arr)/sizeof(int);

    printf("Il valore singolo e' %d", trova_singolo(arr, len));

    return 0;
}