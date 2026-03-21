#include <stdio.h>

int main()
{
    float n1;

    printf("Inserisci il primo numero\n");
    scanf("%f", &n1);

    float n2;

    printf("Inserisci il secondo numero\n");
    scanf("%f", &n2);

    char operazione;

    printf("Scrivi un'operazione tra + (addizione), - (sottrazione), * (moltiplicazione) e / (divisione)\n");
    scanf(" %c", &operazione);

    if (operazione == '+') {
        float somma = n1 + n2;

        printf("La somma è %f", somma);
    }
    else if (operazione == '-') {
        float differenza = n1 - n2;

        printf("La differenza è %f", differenza);
    }
    else if (operazione == '*') {
        float prodotto = n1 * n2;

        printf("La prodotto è %f", prodotto);
    }
    else if (operazione == '/') {
        float quoziente = n1 / n2;

        printf("La quoziente è %f", quoziente);
    }

    return 0;
}
