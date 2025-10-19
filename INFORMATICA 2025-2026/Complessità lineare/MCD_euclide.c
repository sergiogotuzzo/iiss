#include <stdio.h>

int main() {
    int n1, n2;

    printf("Inserisci due numeri\n");
    scanf("%d %d", &n1, &n2);

    if (n2 > n1) {
        int tmp = n2;
        n2 = n1;
        n1 = tmp;
    }

    int r;

    do {
        r = n1 % n2;

        if (r > 0) {
            n1 = n2;
            n2 = r;
        }
    } while (r > 0);

    printf("%d", n2);

    return 0;
}