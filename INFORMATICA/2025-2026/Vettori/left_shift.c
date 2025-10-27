#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5}, len = sizeof(arr)/sizeof(int), pos = 1;

    for (int i = 0; i < len - pos; i++) {
        arr[i] = arr[i + pos];
    }

    for (int i = len - pos; i < len; i++) {
        arr[i] = 0;
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