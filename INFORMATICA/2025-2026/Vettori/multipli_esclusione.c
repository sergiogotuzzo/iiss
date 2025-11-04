#include <stdio.h>

int main() {
    int n, m;

    printf("Inserisci il numero da cui ottenere i multipli e la quantità\n");
    scanf("%d %d", &n, &m);

    int d;

    printf("Inserisci un divisore\n");
    scanf("%d", &d);

    int len = 0;

    for (int i = 0; i < m; i++) {
        if (i % n == 0 && i % d != 0) {
            len++;
        }
    }

    int arr[len];

    for (int i = 0, j = 0; i < m; i++) {
        if (i % n == 0 && i % d != 0) {
            arr[j] = i;

            j++;
        }
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