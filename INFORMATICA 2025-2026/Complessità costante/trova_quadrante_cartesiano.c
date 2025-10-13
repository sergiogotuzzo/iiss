#include <stdio.h>

int main() {
    printf("Inserisci le coordinate del punto: ");

    int x, y;

    scanf("%d %d", &x, &y);

    if (x > 0) {
        if (y > 0) {
            printf("Il punto (%d; %d) si trova nel primo quadrante\n", x, y);
        } else if (y < 0) {
            printf("Il punto (%d; %d) si trova nel secondo quadrante\n", x, y);
        }
    } else if (x < 0) {
        if (y > 0) {
            printf("Il punto (%d; %d) si trova nel quarto quadrante\n", x, y);
        } else if (y < 0) {
            printf("Il punto (%d; %d) si trova nel terzo quadrante\n", x, y);
        }
    } else {
        printf("Il punto (%d; %d) si trova nell'origine\n", x, y);
    }

    return 0;
}