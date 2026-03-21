/*
* Cognome: Gotuzzo
* Nome: Sergio
* Classe: 3 AIT
* Data: 22/10/2025
* Titolo: Unione di due vettori in un terzo vettore
*/

#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int len1 = sizeof(arr1)/sizeof(int);

    int arr2[] = {4, 5, 6};
    int len2 = sizeof(arr2)/sizeof(int);

    int len3 = len1 + len2;
    int arr3[len3];

    for (int i = 0; i < len1; i++) {
        arr3[i] = arr1[i];
    }

    for (int i = len1, j = 0; i < len3; i++, j++) {
        arr3[i] = arr2[j];
    }

    for (int i = 0; i < len3; i++) {
        printf("%d\n", arr3[i]);
    }

	return 0;
}