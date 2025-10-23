/*
* Cognome: Gotuzzo
* Classe: 3 AIT
* Data: 22/10/2025
*/

#include <stdio.h>
#include <stdbool.h>

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

    bool palindromo = true;

    for (int i = 0, j = n; i < n; i++,j--) {
        if (v[i] != v[j-1]) {
            palindromo = false;
        }
    }

    if (palindromo) {
        printf("Il vettore e' palindromo\n");
    } else {
        printf("Il vettore non e' palindromo\n");
    }

	return 0;
}	
