#include <stdio.h>

int main()
{
    float n1;

    printf("Inserisci il primo numero\n");
    scanf("%f", &n1);

    float p1;

    printf("Inserisci il peso del primo numero\n");
    scanf("%f", &p1);

    float n2;

    printf("Inserisci il secondo numero\n");
    scanf("%f", &n2);

    float p2;

    printf("Inserisci il peso del secondo numero\n");
    scanf("%f", &p2);

    float n3;

    printf("Inserisci il terzo numero\n");
    scanf("%f", &n3);

    float p3;

    printf("Inserisci il peso del terzo numero\n");
    scanf("%f", &p3);

    float m = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / p1 + p2 + p3;

    printf("La media pesata è %f", m);

    return 0;
}
