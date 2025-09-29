#include <stdio.h>

int main() {
    int n, exp, res = 1;

    printf("Inserisci il numero: ");
    scanf("%d", &n);

    printf("Inserisci l'esponente: ");
    scanf("%d", &exp);

    for (int i = 1; i <= exp; i++) {
        res *= n;
    }

    printf("%d^%d=%d", n, exp, res);

    return 0;
}