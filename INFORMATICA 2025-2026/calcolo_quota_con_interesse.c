#include <stdio.h>

int main() {
    int anni, cont = 1;
    float capitale, tasso = 0.1f;

    printf("Capitale iniziale: ");
    scanf("%f", &capitale);

    printf("Dopo quanti anni? ");
    scanf("%d", &anni);

    while (cont <= anni) {
        capitale += capitale*tasso;
        cont++;
    }

    printf("Il saldo finale ammonta a: %f", capitale);

    return 0;
}