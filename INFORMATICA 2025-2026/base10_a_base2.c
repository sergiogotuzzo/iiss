#include <stdio.h>

int main() {
    int bs10;

    printf("Inserisci un numero in base 10:");
    scanf("%d", &bs10);

    printf("%d ^\n", bs10 % 2);

    while (bs10 > 1) {
        bs10 /= 2;

        printf("%d |\n", bs10 % 2);
    }

    return 0;
}