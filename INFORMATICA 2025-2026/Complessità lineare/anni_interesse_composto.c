#include <stdio.h>

int main() {
    float cap, tasso;

    printf("Inserisci capitale e tasso di interesse\n");
    scanf("%f %f", &cap, &tasso);

    float capFin = cap * 2;

    int i = 0;

    while (cap <= capFin) {
        cap += cap * tasso;

        i++;
    }

    printf("Il capitale raddoppierà dopo %d anni\n", i);

    return 0;
}