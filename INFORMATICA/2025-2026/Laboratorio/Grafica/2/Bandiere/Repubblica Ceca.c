#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
    int width = 600;
    int height = 400;

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

    rectangle(0, 0, width, height / 2);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(1, 1, WHITE);

    setcolor(RED);
    rectangle(0, height / 2, width, height);
    setfillstyle(SOLID_FILL, RED);
    floodfill(1, height / 2 + 1, RED);

    setcolor(BLUE);
    line(0, 0, 0, height);
    line(0, height, width / 2, height / 2);
    line(width / 2, height / 2, 0, 0);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(1, height / 2 - 1, BLUE);
    floodfill(1, height / 2, BLUE);

    getch();

    closegraph();

    return 0;
}