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

    int square = 70;
    int table = 8;
    bool flag = true;

    int x = 0;
    int y = 0;

    for (int i = 0, j = 0, k = 0; i < table * table; i++, k++) {
        if (k >= table) {
            k = 0;
            j++;
            flag = !flag;
        }

        setcolor(flag ? BLACK : WHITE);
        rectangle(k * square, j * square, k * square + square, j * square + square);
        setfillstyle(SOLID_FILL, flag ? BLACK : WHITE);
        floodfill(k * square + 1, j * square + 1, flag ? BLACK : WHITE);

        flag = !flag;
    }

    getch();

    closegraph();

    return 0;
}