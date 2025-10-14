#include <stdio.h>

int main() {
    int anni;
    float capitale, tasso;

    printf("Inserisci il capitale iniziale\n");
    scanf("%f", &capitale);

    printf("Inserisci il tasso di interesse\n");
    scanf("%f", &tasso);

    printf("Dopo quanti anni?\n");
    scanf("%d", &anni);

    int i = 1;

    while (i++ <= anni) {
        capitale += capitale * tasso;
    }

    printf("Il saldo finale ammonta a %f", capitale);

    return 0;
}