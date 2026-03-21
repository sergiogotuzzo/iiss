/*
* Cognome: Gotuzzo
* Nome: Sergio
* Classe: 3 AIT
* Data: 26/11/2025
*/

#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    srand(time(NULL));

    initwindow(800, 600, "Pixel casuali dentro un cerchio");

    int circleX = getmaxx() / 2;
    int circleY = getmaxy() / 2;
    int r = 100;

    circle(circleX, circleY, r);

    int rolls = 1000;
    int count = 0;

    for (int i = 0; i < rolls; i++) {
        int x = rand() % rolls;
        int y = rand() % rolls;

        putpixel(x, y, WHITE);

        int dx = x - circleX;
        int dy = y - circleY;

        // Equazione per trovare una regione nel piano cartesiano delimitata da un cerchio
        if ((dx * dx) + (dy * dy) <= (r * r)) {
            count++;
        }
    }

    printf("%d\n", count);

    getch();

    closegraph();

    return 0;
}