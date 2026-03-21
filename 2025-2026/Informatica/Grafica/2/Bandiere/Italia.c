#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
    int width = 600;
    int height = 400;

    initwindow(width, height, "Italia");

    setfillstyle(SOLID_FILL, GREEN);
    bar(0, 0, width / 3, height);
    
    setfillstyle(SOLID_FILL, WHITE);
    bar(width / 3, 0, width / 3 + width / 3, height);

    setfillstyle(SOLID_FILL, RED);
    bar(width / 3 + width / 3, 0, width / 3 + width / 3 + width / 3, height);

    getch();

    closegraph();

    return 0;
}