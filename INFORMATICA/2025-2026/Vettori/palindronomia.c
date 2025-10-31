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

    for (int i = 0, j = len; i < len; i++,j--) {
        if (arr[i] != arr[j - 1]) {
            printf("Il vettore non e' palindromo\n");

            return 0;
        }
    }

    printf("Il vettore e' palindromo\n");

	return 0;
}	
