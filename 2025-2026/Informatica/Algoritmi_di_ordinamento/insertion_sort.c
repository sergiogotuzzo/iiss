/** Confronta il primo elemento con tutti gli altri e quando ne trova uno più piccolo lo sposta */

#include <stdio.h>

void insert(int arr[], int pos) {
    int tmp = arr[pos];
    int i;

    for (i = pos - 1; i >= 0 && arr[i] > tmp; i--) {
        arr[i + 1] = arr[i];
    }

    arr[i + 1] = tmp;
}

void insertion_sort(int arr[], int len) {
    for (int i = 1; i < len; i++) {
        insert(arr, i);
    }
}

int main() {
    int arr[] = {3, 7, 4, 6, 1};
    int len = sizeof(arr) / sizeof(int);

    insertion_sort(arr, len);

    for (int j = 0; j < len; j++) {
        printf("%d\n", arr[j]);
    }

    return 0;
}