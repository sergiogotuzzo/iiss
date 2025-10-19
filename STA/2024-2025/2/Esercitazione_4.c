#include <stdio.h>

int main()
{
    int N;

    do {
        printf("Scrivi un numero intero positivo maggiore di 1\n");
        scanf("%d", &N);
    } while (N <= 1);

    for (int i = 2; i < (N - 1); i++) {
        if ((N % i) == 0) {
            printf("Il numero non è primo\n");

            return 0;
        }
    }

    printf("Il numero è primo\n");

    return 0;
}
