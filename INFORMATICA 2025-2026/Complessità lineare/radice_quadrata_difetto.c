#include <stdio.h>

int main() {
    int n, res = 0;

    printf("Inserisci un numero\n");
    scanf("%d", &n);

    while (res * res <= n) {
        res++;
    }

    printf("La radice quadrata per difetto di %d e' %d", n, res - 1);

    return 0;
}