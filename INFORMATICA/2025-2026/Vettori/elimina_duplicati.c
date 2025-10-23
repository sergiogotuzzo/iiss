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

        for (int j = 0; j < i + 1; j++) {
            if (i != j && v[i] == v[j]) {
                v[i] = 0;
            }
        }
    }

    printf("v[%d] = {", n);

    for (int i = 0; i < n; i++) {
        printf("%d", v[i]);

        if (i != n - 1) {
            printf(", ");
        }
    }

    printf("}\n");

	return 0;
}	
