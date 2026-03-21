/*
* Cognome: Gotuzzo
* Nome: Sergio
* Classe: 3 AIT
* Data: 22/10/2025
* Titolo: Ricerca del valore massimo e minimo in un vettore
*/

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(arr)/sizeof(int);
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < len; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }

        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Min: %d\nMax: %d\n", min, max);

	return 0;
}	
