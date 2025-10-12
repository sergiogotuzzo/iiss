#include <stdio.h>

int main() {
    int max;

    printf("Inserisci il limite di numeri di Fibonacci:");
    scanf("%d", &max);

    int n1 = 1, n2 = 0, i = 0;

    while (i++ <= max) {
        printf("%d\n", n1);

        int sum = n1 + n2;
        n2 = n1;
        n1 = sum;
    }

    return 0;
}