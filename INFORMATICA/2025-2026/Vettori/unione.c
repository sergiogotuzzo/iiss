/*
* Cognome: Gotuzzo
* Classe: 3 AIT
* Data: 22/10/2025
*/

#include <stdio.h>

int main() {
    int n1;

    do {
        printf("Inserisci il numero di valori del primo vettore\n");
        scanf("%d", &n1);
    } while (n1 <= 0);

    int v1[n1];

    for (int i = 0; i < n1; i++) {
        int tmp;

        printf("Inserisci il valore n. %d del primo vettore\n", i);
        scanf("%d", &tmp);

        v1[i] = tmp;
    }

    int n2;

    do {
        printf("Inserisci il numero di valori del secondo vettore\n");
        scanf("%d", &n2);
    } while (n2 <= 0);

    int v2[n2];

    for (int i = 0; i < n2; i++) {
        int tmp;

        printf("Inserisci il valore n. %d del secondo vettore\n", i);
        scanf("%d", &tmp);

        v2[i] = tmp;
    }

    int n3 = n1 + n2, v3[n3];

    for (int i = 0; i < n1; i++) {
        v3[i] = v1[i];
    }

    for (int i = n1, j = 0; i < n3; i++, j++) {
        v3[i] = v2[j];
    }

    printf("v3[%d] = {", n3);

    for (int i = 0; i < n3; i++) {
        printf("%d", v3[i]);

        if (i != n3 - 1) {
            printf(", ");
        }
    }

    printf("}\n");

	return 0;
}	
