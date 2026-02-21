/*
* Cognome: Gotuzzo
* Nome: Sergio
* Classe: 3 AIT
* Data: 22/10/2025
* Titolo: Verifica se un vettore è palindromo
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int len = sizeof(arr)/sizeof(int);

    bool palindromo = true;

    for (int i = 0; i < len / 2; i++) {
        if (arr[i] != arr[len - 1 - i]) {
            palindromo = false;
        }
    }

    if (palindromo) {
        printf("Il vettore e' palindromo\n");
    } else {
        printf("Il vettore NON e' palindromo\n");
    }

	return 0;
}	
