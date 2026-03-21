#include <graphics.h>

int main() {
    initwindow(800, 600, "Cerchi Olimpici");

    setbkcolor(WHITE);

    int r = 50;
    int colors[5] = {BLUE, YELLOW, BLACK, GREEN, RED};
    int x = r;

    for (int i = 0; i < 5; i++) {
        int y = r;

        if (i % 2 != 0) {
            y += r;
        }

        setcolor(colors[i]);
        circle(x, y, r);
        refresh();
        delay(1000);

        x += r + 10;
    }

    getch();

    closegraph();

    return 0;
}