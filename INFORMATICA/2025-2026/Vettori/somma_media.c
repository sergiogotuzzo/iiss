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

    int sum = 0;

    for (int i = 0; i < len; i++) {
        sum += arr[i];
    }

    printf("arr[%d] = {", len);

    for (int i = 0; i < len; i++) {
        printf("%d", arr[i]);

        if (i != len - 1) {
            printf(", ");
        }
    }

    printf("}\n");

    printf("Somma: %d\nMedia: %d\n", sum, sum / len);

	return 0;
}	
