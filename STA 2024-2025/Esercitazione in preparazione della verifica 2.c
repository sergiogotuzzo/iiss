#include <stdio.h>

#define VMIN 2
#define VMAX 10
#define PMIN 1
#define PMAX 5

int main()
{
    int nVoti;

    do {
        printf("Quanti voti vuoi inserire? ");
        scanf("%d", &nVoti);
    } while (nVoti < 1);

    float sommaVotiPesati = 0;
    float sommaPesi = 0;

    for (int i = 0; i < nVoti; i++) {
        int vi;

        do {
            printf("Inserisci il %d° voto: ", i + 1);
            scanf("%d", &vi);
        } while (vi < VMIN || vi > VMAX);

        int pi;

        do {
            printf("Inserisci il peso del %d° voto: ", i + 1);
            scanf("%d", &pi);
        } while (pi < PMIN || pi > PMAX);

        sommaVotiPesati = sommaVotiPesati + (vi * pi);
        sommaPesi = sommaPesi + pi;

        printf("%f\n", sommaVotiPesati);
        printf("%f\n", sommaPesi);
    }

    float mediaPesata = sommaVotiPesati / sommaPesi;

    printf("La media pesata è %f", mediaPesata);

    return 0;
}