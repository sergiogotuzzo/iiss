#include <stdio.h>

int main()
{
    int n1;
    int n2;

    printf("Inserisci il primo numero\n");
    scanf("%d", &n1);

    printf("Inserisci il secondo numero\n");
    scanf("%d", &n2);

    int somma = n1 + n2;

    printf("La somma dei due numeri è %d", somma);

    return 0;
}
