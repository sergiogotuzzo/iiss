#include <stdio.h>

int main() {
    int n;

    printf("Inserisci un numero in base 10\n");
    scanf("%d", &n);

    while (n > 0) {
        printf("%d", n % 2);

        n /= 2;
    }

    return 0;
}