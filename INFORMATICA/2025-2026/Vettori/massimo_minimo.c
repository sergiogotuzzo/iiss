/*
* Cognome: Gotuzzo
* Classe: 3 AIT
* Data: 22/10/2025
*/

#include <stdio.h>

int main() {
    int n;

    do {
        printf("Inserisci il numero di valori del vettore\n");
        scanf("%d", &n);
    } while (n <= 0);

    int v[n];

    for (int i = 0; i < n; i++) {
        int tmp;

        printf("Inserisci il valore n. %d\n", i);
        scanf("%d", &tmp);

        v[i] = tmp;
    }
    
    int max = v[0], min = v[0];

    for (int i = 0; i < n; i++) {
        if (v[i] > max) {
            max = v[i];
        }

        if (v[i] < min) {
            min = v[i];
        }
    }

    printf("Min: %d\nMax: %d\n", min, max);

	return 0;
}	
