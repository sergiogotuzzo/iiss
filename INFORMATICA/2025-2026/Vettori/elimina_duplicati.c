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

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < i + 1; j++) {
            if (i != j && arr[i] == arr[j]) {
                arr[i] = 0;
            }
        }
    }

    printf("arr[%d] = {", len);

    for (int i = 0; i < len; i++) {
        printf("%d", arr[i]);

        if (i != len - 1) {
            printf(", ");
        }
    }

    printf("}\n");

	return 0;
}	
