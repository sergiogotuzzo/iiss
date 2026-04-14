/** Esegue un insertion sort partendo dall'inizio e dalla fine */

#include <stdio.h>

void shaker_sort(int arr[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];

                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }

        for (int j = len - 2 - i; j >= i; j--) {
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

    shaker_sort(arr, len);

    for (int j = 0; j < len; j++) {
        printf("%d\n", arr[j]);
    }

    return 0;
}