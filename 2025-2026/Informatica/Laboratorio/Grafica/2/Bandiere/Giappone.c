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

    rectangle(0, 0, width, height);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(1, 1, WHITE);

    setcolor(RED);
    circle(width / 2, height / 2, height / 3);
    setfillstyle(SOLID_FILL, RED);
    floodfill(width / 2 + 1, height / 2 + 1, RED);

    getch();

    closegraph();

    return 0;
}