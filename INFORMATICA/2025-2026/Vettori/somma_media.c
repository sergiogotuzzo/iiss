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

    int arr[n];

    for (int i = 0; i < n; i++) {
        int tmp;

        printf("Inserisci il valore n. %d\n", i);
        scanf("%d", &tmp);

        arr[i] = tmp;
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("arr[%d] = {", n);

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);

        if (i != n - 1) {
            printf(", ");
        }
    }

    printf("}\n");

    printf("Somma: %d\nMedia: %d\n", sum, sum / n);

	return 0;
}	
