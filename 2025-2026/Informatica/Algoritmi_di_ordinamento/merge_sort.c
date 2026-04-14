#include <stdio.h>

void merge(int arr1[], int start, int mid, int end) {
    int len = end - start;
    int arr2[len + 1];
    int i = start, j = mid + 1, k = 0;

    while (i <= mid && j <= end) {
        if (arr1[i] < arr1[j]) {
            arr2[k++] = arr1[i++];
        } else {
            arr2[k++] = arr1[j++];
        }
    }

    while (i <= mid) {
        arr2[k++] = arr1[i++];
    }

    while (j <= end) {
        arr2[k++] = arr1[j++];
    }

    for (int l = start, m = 0; m <= len; l++, m++) {
        arr1[l] = arr2[m];
    }
}

void merge_sort(int arr[], int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;

        merge_sort(arr, start, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main() {
    int arr[] = {3, 7, 4, 6, 1};
    int len = sizeof(arr) / sizeof(int);

    merge_sort(arr, 0, len - 1);

    for (int j = 0; j < len; j++) {
        printf("%d\n", arr[j]);
    }

    return 0;
}