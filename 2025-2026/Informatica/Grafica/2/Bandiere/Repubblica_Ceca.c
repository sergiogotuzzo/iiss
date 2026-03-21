#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
    int width = 600;
    int height = 400;

    initwindow(width, height, "Repubblica Ceca");

    setfillstyle(SOLID_FILL, WHITE);
    bar(0, 0, width, height / 2);
    
    setfillstyle(SOLID_FILL, RED);
    bar(0, height / 2, width, height);

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