#include <stdio.h>

int main() {
    int n, d;

    printf("Inserisci il numero: ");
    scanf("%d", &n);

    printf("Inserisci il dividendo: ");
    scanf("%d", &d);

    int tmp = n, i = 0;

    while (tmp >= d) {
        tmp -= d;
        i++;
    }

    printf("Il risultato e' %d", n / i);

    return 0;
}