/*
* Cognome: Gotuzzo
* Nome: Sergio
* Classe: 3 AIT
* Data: 22/10/2025
* Titolo: Eliminare i duplicati da un vettore  es.   [1,5,5,9,8]  -->  [1,5,0,9,8]   (supponiamo che 0 rappresenti un valore 'eliminato') 
*/

#include <stdio.h>

int main() {
    int arr[] = {1, 5, 5, 9, 8};
    int len = sizeof(arr)/sizeof(int);

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (i != j && arr[i] == arr[j]) {
                arr[j] = 0;
            }
        }
    }

    for (int i = 0; i < len; i++) {
        printf("%d\n", arr[i]);
    }

	return 0;
}	
