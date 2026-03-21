#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
    int width = 600;
    int height = 300;

    initwindow(width, height, "Tonga");

    setfillstyle(SOLID_FILL, RED);
    bar(0, 0, width, height);

    width = width / 3;
    height = height / 2;
    
    setfillstyle(SOLID_FILL, WHITE);
    bar(0, 0, width, height);

    int rectVerWidth = height / 2 / 3;
    int rectVerHeight = height / 2;
    int rectVerX = width / 2 - rectVerWidth / 2;
    int rectVerY = height / 2 - rectVerHeight / 2;

    setfillstyle(SOLID_FILL, RED);
    bar(rectVerX, rectVerY, rectVerX + rectVerWidth, rectVerY + rectVerHeight);

    int rectHorWidth = rectVerHeight;
    int rectHorHeight = rectVerWidth;
    int rectHorX = width / 2 - rectHorWidth / 2;
    int rectHorY = height / 2 - rectHorHeight / 2;

    bar(rectHorX, rectHorY, rectHorX + rectHorWidth, rectHorY + rectHorHeight);

    getch();

    closegraph();

    return 0;
}