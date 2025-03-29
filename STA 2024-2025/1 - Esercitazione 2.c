#include <stdio.h>

int main()
{
    int n;

    printf("Inserisci il numero\n");
    scanf("%d", &n);

    if ((n % 2) == 0) {
        printf("Pari");
    }
    else {
        printf("Dispari");
    }

    return 0;
}
