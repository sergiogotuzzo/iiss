#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5}, len = sizeof(arr)/sizeof(int), pos = 1, tmp[len];
    
    for (int i = 0; i < len; i++) {
        tmp[i] = arr[i];
    }
    
    for (int i = 0, j = pos; i < len - pos; i++, j++) {
        arr[j] = tmp[i];
    }

    for (int i = 0, j = len - pos; i < pos; i++, j++) {
        arr[i] = tmp[j];
    }

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