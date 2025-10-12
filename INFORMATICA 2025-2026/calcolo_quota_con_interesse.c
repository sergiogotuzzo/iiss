#include <stdio.h>

int main() {
    int anni, i = 1;
    float capitale, tasso = 0.1f;

    printf("Capitale iniziale:");
    scanf("%f", &capitale);

    printf("Dopo quanti anni?");
    scanf("%d", &anni);

    while (i <= anni) {
        capitale += capitale * tasso;
        i++;
    }

    printf("Il saldo finale ammonta a: %f", capitale);

    return 0;
}