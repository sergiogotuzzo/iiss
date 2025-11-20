/*
* Cognome: Gotuzzo
* Nome: Sergio
* Classe: 3 AIT
* Data: 22/10/2025
* Titolo: Somma e media degli elementi di un vettore
*/

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(arr)/sizeof(int);
    int sum = 0;

    for (int i = 0; i < len; i++) {
        sum += arr[i];
    }

    printf("Somma: %d\nMedia: %d\n", sum, sum / len);

	return 0;
}	
