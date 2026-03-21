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

    initwindow(800, 600, "Pixel casuali dentro un rettangolo");

    int rectWidth = 200;
    int rectHeight = 100;
    int rectX = (getmaxx() - rectWidth) / 2;
    int rectY = (getmaxy() - rectHeight) / 2;
    
    rectangle(rectX, rectY, rectX + rectWidth, rectY + rectHeight);

    int rolls = 1000;
    int count = 0;

    for (int i = 0; i < rolls; i++) {
        int x = rand() % rolls;
        int y = rand() % rolls;

        putpixel(x, y, WHITE);

        if ((x >= rectX && x <= rectX + rectWidth) && (y >= rectY && y <= rectY + rectHeight)) {
            count++;
        }
    }

    printf("%d\n", count);

    getch();

    closegraph();

    return 0;
}