#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool calcolo = true;

    do {
        double n1;

        printf("Scrivi il primo numero\n");
        scanf("%lf", &n1);

        double n2;

        printf("Scrivi il secondo numero\n");
        scanf("%lf", &n2);

        int operazione;

        printf("Scrivi il numero corrispondente all'operazione che vuoi usare:\n");
        printf("1. Addizione\n");
        printf("2. Sottrazione\n");
        printf("3. Moltiplicazione\n");
        printf("4. Divisione\n");

        scanf("%d", &operazione);

        switch (operazione) {
        case 1: {
            printf("Il risultato è %lf\n", n1 + n1);
        } break;
        case 2: {
            printf("Il risultato è %lf\n", n1 - n2);
        } break;
        case 3: {
            printf("Il risultato è %lf\n", n1 * n2);
        } break;
        case 4: {
            if (n2 == 0) {
                printf("Impossibile dividere per 0\n");

                break;
            }

            printf("Il risultato è %lf\n", n1 / n2);
        } break;
        default: {
            printf("Operazione inesistente\n");
        } break;
        }

        int calcolare;

        printf("Vuoi usare ancora la calcolatrice?\n");
        printf("1. Sì\n");
        printf("2. No\n");
        scanf("%d", &calcolare);

        switch (calcolare) {
        case 1: {
            calcolo = true;
        } break;
        case 2: {
            calcolo = false;
        } break;
        }
    } while (calcolo);

    return 0;
}
