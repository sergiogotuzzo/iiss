#include <stdio.h>

int main() {
    int n1, n2;

    printf("Inserisci due numeri:");
    scanf("%d %d", &n1, &n2);

    int min = n1 > n2 ? n2 : n1;

    while (!(n1 % min == 0 && n2 % min == 0)) {
        min--;
    }

    printf("%d\n", min);

    return 0;
}