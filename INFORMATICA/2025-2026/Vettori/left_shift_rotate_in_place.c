/*
* Cognome: Gotuzzo
* Classe: 3 AIT
* Data: 12/11/2025
*/

#include <stdio.h>
void ruota_sinistra(int arr[], int len, int pos) {
    for (int i = 0; i < pos / 2; i++) {
        int tmp = arr[i];

        arr[i] = arr[i + 1];
        arr[i + 1] = tmp;
    }

    for (int i = pos; i < (len + pos) / 2; i++) {
        int tmp = arr[i];

        arr[i] = arr[len - 1 - (i - pos)];
        arr[len - 1 - (i - pos)] = tmp;
    }
    
    for (int i = 0; i < len / 2; i++) {
        int tmp = arr[i];

        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = tmp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}, len = sizeof(arr) / sizeof(int);

    ruota_sinistra(arr, len, 2);

    printf("arr[%d] = {", len);

    for (int i = 0; i < len; i++) {
        printf("%d", arr[i]);

        if (i != len - 1) {
            printf(", ");
        }
    }

    printf("}\n");

    return 0;
}