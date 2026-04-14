#include <stdio.h>

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int lowerInd = low - 1;
    
    for (int i = low; i < high; i++) {
        if (arr[i] < pivot) {
            lowerInd++;

            int tmp = arr[i];

            arr[i] = arr[lowerInd];
            arr[lowerInd] = tmp;
        }
    }

    lowerInd++;

    int tmp = arr[high];

    arr[high] = arr[lowerInd];
    arr[lowerInd] = tmp;

    return lowerInd;
}

void quick_sort(int arr[], int low, int high) {
    if (high > low) {
        int pi = partition(arr, low, high);
        
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {3, 7, 4, 6, 1};
    int len = sizeof(arr) / sizeof(int);

    quick_sort(arr, 0, len - 1);

    for (int j = 0; j < len; j++) {
        printf("%d\n", arr[j]);
    }

    return 0;
}