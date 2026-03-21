#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
    int width = 600;
    int height = 300;

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

    setcolor(RED);
    rectangle(0, 0, width, height);
    setfillstyle(SOLID_FILL, RED);
    floodfill(1, 1, RED);

    width = width / 3;
    height = height / 2;
    
    setcolor(WHITE);
    rectangle(0, 0, width, height);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(1, 1, WHITE);

    int rectVerWidth = height / 2 / 3;
    int rectVerHeight = height / 2;
    int rectVerX = width / 2 - rectVerWidth / 2;
    int rectVerY = height / 2 - rectVerHeight / 2;

    setcolor(RED);
    rectangle(rectVerX, rectVerY, rectVerX + rectVerWidth, rectVerY + rectVerHeight);
    setfillstyle(SOLID_FILL, RED);
    floodfill(rectVerX + 1, rectVerY + 1, RED);

    int rectHorWidth = rectVerHeight;
    int rectHorHeight = rectVerWidth;
    int rectHorX = width / 2 - rectHorWidth / 2;
    int rectHorY = height / 2 - rectHorHeight / 2;

    setcolor(RED);
    rectangle(rectHorX, rectHorY, rectHorX + rectHorWidth, rectHorY + rectHorHeight);
    setfillstyle(SOLID_FILL, RED);
    floodfill(rectHorX + 1, rectHorY + 1, RED);

    setcolor(RED);
    rectangle(rectHorX, rectHorY, rectHorX + rectHorWidth, rectHorY + rectHorHeight);
    setfillstyle(SOLID_FILL, RED);
    floodfill(rectHorX + rectHorHeight + rectVerWidth + 1, rectHorY + 1, RED);

    getch();

    closegraph();

    return 0;
}