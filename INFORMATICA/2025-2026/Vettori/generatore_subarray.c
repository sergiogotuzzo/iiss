/*
* Cognome: Gotuzzo
* Classe: 3 AIT
* Data: 29/10/2025
*/

#include <stdio.h>
#include <stdbool.h>

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

    for (int i = 0; i < len; i++) {
        int subArrLen = len -i;
        int subArr[subArrLen];

        for (int j = i, k = 0; j < len; j++, k++) {
            subArr[k] = arr[j];
        }

        for (int j = 0; j < subArrLen; j++) {
            printf("subArr%d[%d] = {", subArrLen, j + 1);

            for (int k = 0; k <= j; k++) {
                printf("%d", subArr[k]);

                if (k != j) {
                    printf(", ");
                }
            }

            printf("}\n");
        }
    }

	return 0;
}