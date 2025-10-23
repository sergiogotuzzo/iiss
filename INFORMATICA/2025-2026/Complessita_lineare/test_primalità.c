#include <stdio.h>

int main() {
    int n;

    printf("Inserisci un numero\n");
    scanf("%d", &n);

    int i = 2;

    while (i <= n / 2 && n % i != 0) {
        i++;
    }

    if (n % i == 0 && n != 2) {
        printf("Il numero non e' primo\n");
    } else {
        printf("Il numero e' primo\n");
    }
}