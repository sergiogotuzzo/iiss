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

    for (int i = 0; i < getmaxy() / 20; i++) {
        bar(i * 20, getmaxy() - (i + 1) * 20, i * 20 + 20, getmaxy());
    }

    getch();

    closegraph();

    return 0;
}