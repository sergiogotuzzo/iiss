#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Inserisci il numero di valori da sommare tra loro: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int tmp;

        printf("Inserisci il %d° numero: ", i + 1);
        scanf("%d", &tmp);

        sum += tmp;
    }

    printf("La somma dei valori è %d", sum);

    return 0;
}