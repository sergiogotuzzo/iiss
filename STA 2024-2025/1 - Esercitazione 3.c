#include <stdio.h>

int main()
{
    int n;

    printf("Inserisci il numero\n");
    scanf("%d", &n);

    if (n < 0) {
        printf("Il numero � negativo");
    }
    else if (n == 0) {
        printf("Il numero � uguale di 0");
    }
    else if (n > 0) {
        printf("Il numero � positivo");
    }

    return 0;
}
