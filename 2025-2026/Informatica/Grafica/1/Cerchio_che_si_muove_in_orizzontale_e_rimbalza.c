/*
* Cognome: Gotuzzo
* Nome: Sergio
* Classe: 3 AIT
* Data: 26/11/2025
*/

#include <graphics.h>
#include <stdbool.h>

int main() {
    initwindow(800, 600, "Cerchio che si muove in orizzontale e rimbalza");

    int r = 100;

    while (true) {
        for (int i = r; i < getmaxx() - 100; i++) {
            cleardevice();
            circle(i, getmaxy() / 2, r);
            refresh();
        }

        for (int i = getmaxx() - r; i >= r; i--) {
            cleardevice();
            circle(i, getmaxy() / 2, r);
            refresh();
        }
    }

    getch();

    closegraph();

    return 0;
}