/*
* Cognome: Gotuzzo
* Nome: Sergio
* Classe: 3 AIT
* Data: 12/11/2025
* Titolo: Rotazione ciclica a sinistra di k posizioni
* Descrizione: Scrivi una funzione void ruota_sinistra(int v[], int n, int k) che sposti ciclicamente a
sinistra gli elementi del vettore di k posizioni.
L’operazione deve avvenire in-place (senza usare un secondo vettore grande quanto l’originale).
Esempio:
v = [1, 2, 3, 4, 5] , k = 2 → risultato: [3, 4, 5, 1, 2]
*/

#include <stdio.h>

void ruota_sinistra(int arr[], int len, int pos) {
    for (int i = 0; i < pos / 2; i++) {
        int tmp = arr[i];

        arr[i] = arr[pos - 1 - i];
        arr[pos - 1 - i] = tmp;
    }

    for (int i = pos; i < (len + pos) / 2; i++) {
        int tmp = arr[i];

        arr[i] = arr[len - 1 - (i - pos)];
        arr[len - 1 - (i - pos)] = tmp;
    }
    
    for (int i = 0; i < len / 2; i++) {
        int tmp = arr[i];

        arr[i] = arr[len - 1 - i];
        arr[len - 1- i ] = tmp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(arr) / sizeof(int);

    ruota_sinistra(arr, len, 3);

    for (int i = 0; i < len; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}