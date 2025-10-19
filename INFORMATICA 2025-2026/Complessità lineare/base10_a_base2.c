#include <stdio.h>

int main() {
    int n;

    printf("Inserisci un numero in base 10\n");
    scanf("%d", &n);

    int somma = 0, potenza = 1;

    while (n > 0) {
        somma += n % 2 * potenza;
        potenza *= 10;
        n /= 2;
    }

    printf("%d", somma);

    return 0;
}