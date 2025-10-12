#include <stdio.h>

int main() {
    float cap, tasso;

    int i = 0;

    printf("Inserisci capitale e tasso di interesse:");
    scanf("%f %f", &cap, &tasso);

    float capFin = cap * 2;

    while (cap <= capFin) {
        cap += cap * tasso;

        i++;
    }

    printf("%d\n", i);

    return 0;
}