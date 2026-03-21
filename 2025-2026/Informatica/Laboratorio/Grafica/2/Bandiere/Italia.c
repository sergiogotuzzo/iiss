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

    int colors[3] = {GREEN, WHITE, RED};
    int x = 0;

    for (int i = 0; i < 3; i++) {
        setcolor(colors[i]);
        rectangle(x, 0, x + width / 3, height);
        setfillstyle(SOLID_FILL, colors[i]);
        floodfill(x + 1, 1, colors[i]);

        x += width / 3;
    }

    getch();

    closegraph();

    return 0;
}