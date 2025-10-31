/*
* Cognome: Gotuzzo
* Classe: 3 AIT
* Data: 22/10/2025
*/

#include <stdio.h>

int main() {
    int len;

    do {
        printf("Inserisci il numero di valori del vettore\n");
        scanf("%d", &len);
    } while (len <= 0);

    int arr[len];

    for (int i = 0; i < len; i++) {
        int tmp;

        printf("Inserisci il valore n. %d\n", i);
        scanf("%d", &tmp);

        arr[i] = tmp;
    }

    int v_invertito[len];

    for (int i = len, j = 0; i > 0; i--, j++) {
        v_invertito[j] = arr[i - 1];
    }

    printf("v_invertito[%d] = {", len);

    for (int i = 0; i < len; i++) {
        printf("%d", v_invertito[i]);

        if (i != len - 1) {
            printf(", ");
        }
    }

    printf("}\n");

	return 0;
}	
