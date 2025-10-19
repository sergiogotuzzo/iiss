#include <stdio.h>

int main() {
    int n1, n2;

    printf("Inserisci due numeri\n");
    scanf("%d %d", &n1, &n2);

    int tmp = 1, mcm = n1 * tmp;

    while (mcm % n2 != 0) {
        mcm = n1 * tmp;

        tmp++;
    }

    printf("%d\n", mcm);

    return 0;
}