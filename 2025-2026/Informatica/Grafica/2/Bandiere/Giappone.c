#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
    int width = 600;
    int height = 400;

    initwindow(width, height, "Giappone");

    bar(0, 0, width, height);

    setcolor(RED);
    circle(width / 2, height / 2, height / 3);
    setfillstyle(SOLID_FILL, RED);
    floodfill(width / 2 + 1, height / 2 + 1, RED);

    getch();

    closegraph();

    return 0;
}