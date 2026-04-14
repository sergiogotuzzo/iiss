/** Trova il minimo e lo scambia con il primo elemento */

#include <stdio.h>

void selection_sort(int arr[], int len) {
    int min;

    for (int i = 0; i < len; i++) {
        min = i;

        for (int j = i + 1; j < len; j++) {
            if (arr[min] > arr[j]) {
                min = j;
            }
        }

        int tmp = arr[i];

        arr[i] = arr[min];
        arr[min] = tmp;
    }
}

int main() {
    int arr[] = {7, 3, 4, 6, 1};
    int len = sizeof(arr) / sizeof(int);

    selection_sort(arr, len);

    for (int j = 0; j < len; j++) {
        printf("%d\n", arr[j]);
    }

    return 0;
}