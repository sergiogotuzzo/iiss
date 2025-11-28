/*
* Cognome: Gotuzzo
* Nome: Sergio
* Classe: 3 AIT
* Data: 26/11/2025
*/

#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

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

    int radius = 200;
    int circleX = getx() + radius;
    int circleY = getmaxy() / 2;
    bool left = true;

    while (true) {
        cleardevice();

        if (circleX >= getmaxx() - radius) {
            left = false;
        } else if (circleX <= getx() + radius) {
            left = true;
        }

        if (left) {
            circleX += 1;
        } else {
            circleX -= 1;
        }

        circle(circleX, circleY, radius);
    }

    getch();

    closegraph();

    return 0;
}