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

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += v[i];
    }

    printf("v[%d] = {", n);

    for (int i = 0; i < n; i++) {
        printf("%d", v[i]);

        if (i != n - 1) {
            printf(", ");
        }
    }

    printf("}\n");

    printf("Somma: %d\nMedia: %d\n", sum, sum / n);

	return 0;
}	
