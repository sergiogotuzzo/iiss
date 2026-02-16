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

    setbkcolor(WHITE);

    int r = 50;
    int colors[5] = {BLUE, YELLOW, BLACK, GREEN, RED};
    int gap = 10;
    int x = r;

    for (int i = 0; i < 5; i++) {
            int y = r;

        if (i % 2 != 0) {
            y += r;
        }

        delay(1000);

        setcolor(colors[i]);
        circle(x, y, r);

        x += r + gap;
    }

    getch();

    closegraph();

    return 0;
}