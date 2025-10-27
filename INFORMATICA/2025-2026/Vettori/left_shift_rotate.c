#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5}, len = sizeof(arr)/sizeof(int), pos = 2, tmp[len];

    for (int i = 0; i < len - pos; i++) {
        tmp[i] = arr[i];
        arr[i] = arr[i + pos];
    }

    for (int i = len - pos, j = 0; i < len; i++, j++) {
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