#include <stdio.h>

int main() {
    int n;

    printf("Inserisci un numero:");
    scanf("%d", &n);

    int last = 1;

    while (last <= n) {
        printf("%d\n", last);

        last *= 2;
    }

    return 0;
}