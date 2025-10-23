#include <stdio.h>

int main() {
    int anno;

    printf("Inserisci un anno\n");
    scanf("%d", &anno);

    if (anno % 400 == 0) {
        printf("L'anno %d è bisestile\n", anno);
    } else if (anno % 100 == 0) {
        printf("L'anno %d non è bisestile\n", anno);
    } else if (anno % 4 == 0) {
        printf("L'anno %d è bisestile\n", anno);
    } else {
        printf("L'anno %d non è bisestile\n", anno);
    }

    return 0;
}