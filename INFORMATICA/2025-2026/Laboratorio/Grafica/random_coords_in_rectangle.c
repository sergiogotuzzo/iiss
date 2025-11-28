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

    int width = 200;
    int height = 100;
    int x = getmaxx() / 2 - width / 2;
    int y = getmaxy() / 2 - height / 2;
    
    rectangle(x, y, x + width, y + height);

    int rolls = 1000;

    srand(time(NULL));

    int inRectangle = 0;

    for (int i = 0; i < 1000; i++) {
        int coordX = rand() % 1000;
        int coordY = rand() % 1000;

        if ((coordX >= x && coordX <= x + width) && (coordY >= y && coordY <= y + height)) {
            inRectangle++;
        }
    }

    printf("%d\n", inRectangle);

    getch();

    closegraph();

    return 0;
}