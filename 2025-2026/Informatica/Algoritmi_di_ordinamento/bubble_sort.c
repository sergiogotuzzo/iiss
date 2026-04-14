/** Confronta due elementi adiacenti e sposta il maggiore in fondo */

#include <stdio.h>
#include <stdbool.h>

void bubble_sort(int arr[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];

                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main() {
    int arr[] = {3, 7, 4, 6, 1};
    int len = sizeof(arr) / sizeof(int);

    bubble_sort(arr, len);

    for (int i = 0; i < len; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}