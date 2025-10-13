#include <stdio.h>

int main() {
    int n, exp, res = 1;

    printf("Inserisci un numero\n");
    scanf("%d", &n);

    printf("Inserisci l'esponente\n");
    scanf("%d", &exp);

    for (int i = 1; i <= exp; i++) {
        res *= n;
    }

    printf("%d^%d=%d", n, exp, res);

    return 0;
}