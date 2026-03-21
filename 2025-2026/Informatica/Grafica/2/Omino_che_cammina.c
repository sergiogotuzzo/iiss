#include <graphics.h>
#include <stdbool.h>

int main() {
    initwindow(800, 600, "Omino che cammina");

    bool sx = true;
    int a = 100;
    int b = 0;

    for (int i = 0; i < getmaxx() - 100; i++) {
        cleardevice();
        
        circle(50 + i, getmaxy() - 100 - 100 - 50, 50); // Testa
        line(50 + i, getmaxy() - 100 - 100, 50 + i, getmaxy() - 100); // Torace
        line(50 + i, getmaxy() - 100 - 100, b + i, getmaxy() - 100); // Braccio 1
        line(50 + i, getmaxy() - 100 - 100, a + i, getmaxy() - 100); // Braccio 2
        line(50 + i, getmaxy() - 100, b + i, getmaxy()); // Gamba 1
        line(50 + i, getmaxy() - 100, a + i, getmaxy()); // Gamba 2

        refresh();

        if (sx) {
            a--;
            b++;

            if (b == 100) {
                sx = false;
            }
        } else {
            a++;
            b--;

            if (b == 0) {
                sx = true;
            }
        }
    }

    getch();

    closegraph();

    return 0;
}