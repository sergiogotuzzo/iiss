#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5}, len = sizeof(arr)/sizeof(int), i;

    for (i = 0; i < len - 1; i++) {
        if (arr[i] >= arr[i + 1]) {
            break;
        }
    }

    if (i == len - 1) {
        printf("Gli elementi dell'array sono in ordine strettamente crescente\n");
    } else {
       printf("Gli elementi dell'array NON sono in ordine strettamente crescente\n"); 
    }

    return 0;
}
