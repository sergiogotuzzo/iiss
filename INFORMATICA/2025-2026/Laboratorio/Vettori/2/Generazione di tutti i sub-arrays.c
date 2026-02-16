/*
* Cognome: Gotuzzo
* Nome: Sergio
* Classe: 3 AIT
* Data: 29/10/2025
* Titolo: Generazione di tutti i sub-arrays
* Descrizione: Dato un array arr[], il compito è quello di generare tutti i possibili sub-array dell'array dato.

Esempi:

    Input: arr[] = [1, 2, 3]
    Output: [ [1], [1, 2], [2], [1, 2, 3], [2, 3], [3] ]

    Input: arr[] = [1, 2]
    Output: [ [1], [1, 2], [2] ]
*/

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3};
    int len = sizeof(arr)/sizeof(int);

    for (int i = 0; i < len; i++) {
        int subArrLen = len -i;
        int subArr[subArrLen];

        for (int j = i, k = 0; j < len; j++, k++) {
            subArr[k] = arr[j];
        }

        for (int j = 0; j < subArrLen; j++) {
            for (int k = 0; k <= j; k++) {
                printf("%d ", subArr[k]);
            }

            printf("\n");
        }
    }

	return 0;
}