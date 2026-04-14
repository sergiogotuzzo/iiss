/** Confronta una coppia di elementi e se non è ordinata li scambia e fa un passo indietro, altrimenti va avanti */

#include <stdio.h>

void gnome_sort(int arr[], int len) {
    int i = 0;

    while (i < len) {
        if (i == 0 || arr[i] >= arr[i - 1]) {
            i++;
        } else {
            int tmp = arr[i];
            
            arr[i] = arr[i - 1];
            arr[i - 1] = tmp;

            i--;
        }
    }
}

int main() {
    int arr[] = {7, 3, 4, 6, 1};
    int len = sizeof(arr) / sizeof(int);

    gnome_sort(arr, len);

    for (int j = 0; j < len; j++) {
        printf("%d\n", arr[j]);
    }

    return 0;
}