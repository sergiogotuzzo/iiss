#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
    initwindow(800, 600, "Scala");

    int w = 30;
    int h = 20;

    for (int i = 0; i < getmaxy() / h; i++) {
        bar(i * w, getmaxy() - (i + 1) * h, i * w + w, getmaxy());
    }

    getch();

    closegraph();

    return 0;
}