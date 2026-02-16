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
    int gdriver = DETECT;
    int gmode;
    int errorcode;

    initgraph(&gdriver, &gmode, "");

    errorcode = graphresult();

    if (errorcode != grOk) {
        printf("Graphics error: %s\n", grapherrormsg(errorcode));
        printf("Press any key to halt:");

        getch();

        exit(1);
    }

    int circleX = getmaxx() / 2;
    int circleY = getmaxy() / 2;
    int radius = 400;

    circle(circleX, circleY, radius);

    int rolls = 1000;

    srand(time(NULL));

    int inCircle = 0;

    for (int i = 0; i < 1000; i++) {
        int coordX = rand() % 1000;
        int coordY = rand() % 1000;

        int dx = coordX - circleX;
        int dy = coordY - circleY;

        // Equazione per trovare una regione nel piano cartesiano delimitata da un cerchio
        if ((dx * dx) + (dy * dy) <= (radius * radius)) {
            inCircle++;
        }
    }

    printf("%d\n", inCircle);

    getch();

    closegraph();

    return 0;
}