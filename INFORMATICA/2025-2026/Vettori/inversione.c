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

    int v_invertito[n];

    for (int i = n, j = 0; i > 0; i--, j++) {
        v_invertito[j] = v[i - 1];
    }

    printf("v_invertito[%d] = {", n);

    for (int i = 0; i < n; i++) {
        printf("%d", v_invertito[i]);

        if (i != n - 1) {
            printf(", ");
        }
    }

    printf("}\n");

	return 0;
}	
