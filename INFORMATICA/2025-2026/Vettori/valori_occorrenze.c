/*
* Cognome: Gotuzzo
* Classe: 3 AIT
* Data: 12/11/2025
*/

#include <stdio.h>

int main() {
    int arr[] = {2, 2, 2, 5, 5, 7}, len = sizeof(arr)/sizeof(int);

    int valoriDistinti = 1;

    for (int i = 0; i < len - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            valoriDistinti++;
        }
    }

    int valori[valoriDistinti];
    int occorrenze[valoriDistinti];

    for (int i = 0, last = 0, j = 0; i < len; i++) {
        if (arr[i] > last) {
            valori[j] = arr[i];
            last = arr[i];
            j++;
        }
    }

    for (int i = 0; i < valoriDistinti; i++) {
        occorrenze[i] = 0;

        for (int j = 0; j < len; j++) {
            if (arr[j] == valori[i]) {
                occorrenze[i]++;
            }
        }
    }

    printf("valori[%d] = {", valoriDistinti);

    for (int i = 0; i < valoriDistinti; i++) {
        printf("%d", valori[i]);

        if (i != valoriDistinti - 1) {
            printf(", ");
        }
    }

    printf("}\n");

    printf("occorrenze[%d] = {", valoriDistinti);

    for (int i = 0; i < valoriDistinti; i++) {
        printf("%d", occorrenze[i]);

        if (i != valoriDistinti - 1) {
            printf(", ");
        }
    }

    printf("}\n");

    return 0;
}