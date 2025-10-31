/*
* Cognome: Gotuzzo
* Classe: 3 AIT
* Data: 22/10/2025
*/

#include <stdio.h>

int main() {
    int len;

    do {
        printf("Inserisci la lunghezza del vettore\n");
        scanf("%d", &len);
    } while (len <= 0);

    int arr[len];

    for (int i = 0; i < len; i++) {
        int tmp;

        printf("Inserisci il valore n. %d\n", i);
        scanf("%d", &tmp);

        arr[i] = tmp;
    }
    
    int max = arr[0], min = arr[0];

    for (int i = 0; i < len; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Min: %d\nMax: %d\n", min, max);

	return 0;
}	
