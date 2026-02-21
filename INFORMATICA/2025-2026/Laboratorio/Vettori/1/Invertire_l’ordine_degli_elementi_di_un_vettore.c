/*
* Cognome: Gotuzzo
* Nome: Sergio
* Classe: 3 AIT
* Data: 22/10/2025
* Titolo: Invertire l’ordine degli elementi di un vettore
*/

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(arr)/sizeof(int);

    for (int i = 0; i < len / 2; i++) {
        int tmp = arr[i];

        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = tmp;
    }

    for (int i = 0; i < len; i++) {
        printf("%d\n", arr[i]);
    }

	return 0;
}	
