#include <stdio.h>
#include <math.h>

int main() {
    int n;

    do {
        printf("Inserisci un numero\n");
        scanf("%d", &n);
    } while (n <= 0);

    double epsilon = 0.00001, x0 = 1.0, x1 = (x0 + (n / x0)) / 2, delta = fabs(x1 - x0);

    do {
        x1 = (x0 + (n / x0)) / 2;
        delta = fabs(x1 - x0);
        x0 = x1;
    } while (delta >= epsilon);

    printf("La radice quadrata di %d e' %lf\n", n, x1);

    return 0;
}