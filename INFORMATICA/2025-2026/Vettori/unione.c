/*
* Cognome: Gotuzzo
* Classe: 3 AIT
* Data: 22/10/2025
*/

#include <stdio.h>

int main() {
    int len1;

    do {
        printf("Inserisci il numero di valori del primo vettore\n");
        scanf("%d", &len1);
    } while (len1 <= 0);

    int v1[len1];

    for (int i = 0; i < len1; i++) {
        int tmp;

        printf("Inserisci il valore n. %d del primo vettore\n", i);
        scanf("%d", &tmp);

        v1[i] = tmp;
    }

    int len2;

    do {
        printf("Inserisci il numero di valori del secondo vettore\n");
        scanf("%d", &len2);
    } while (len2 <= 0);

    int v2[len2];

    for (int i = 0; i < len2; i++) {
        int tmp;

        printf("Inserisci il valore n. %d del secondo vettore\n", i);
        scanf("%d", &tmp);

        v2[i] = tmp;
    }

    int len3 = len1 + len2, v3[len3];

    for (int i = 0; i < len1; i++) {
        v3[i] = v1[i];
    }

    for (int i = len1, j = 0; i < len3; i++, j++) {
        v3[i] = v2[j];
    }

    printf("v3[%d] = {", len3);

    for (int i = 0; i < len3; i++) {
        printf("%d", v3[i]);

        if (i != len3 - 1) {
            printf(", ");
        }
    }

    printf("}\n");

	return 0;
}	
