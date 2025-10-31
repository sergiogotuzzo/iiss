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

        for (int j = 0; j < i + 1; j++) {
            if (i != j && arr[i] == arr[j]) {
                arr[i] = 0;
            }
        }
    }

    printf("arr[%d] = {", n);

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);

        if (i != n - 1) {
            printf(", ");
        }
    }

    printf("}\n");

	return 0;
}	
