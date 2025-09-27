#include <stdio.h>

int main() {
    printf("Inserisci un orario: ");

    int h1, m1, s1;

    scanf("%d:%d:%d", &h1, &m1, &s1);
    printf("Inserisci un orario da sommare al precedente inserito: ");

    int h2, m2, s2;

    scanf("%d:%d:%d", &h2, &m2, &s2);

    int h3, m3, s3;

    s3 = (s1 + s2) % 60;
    m3 = ((m2 + m1) % 60) + ((s1 + s2) / 60);
    h3 = ((h2 + h1) % 60) + ((m1 + m2) / 60);

    printf("%d:%d:%d\n", h3, m3, s3);

    return 0;
}