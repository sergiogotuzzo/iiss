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

    bool sx = true;
    int a = 100;
    int b = 0;

    for (int i = 0; i < getmaxx() - 100; i++) {
        cleardevice();
        
        circle(50 + i, 150, 50); // Testa
        line(50 + i, 150 + 50, 50 + i, 150 + 150); // Torace

        line(50 + i, 150 + 50, b + i, 150 + 150); // Braccio sinistro
        line(50 + i, 150 + 50, a + i, 150 + 150); // Braccio destro
        line(50 + i, 150 + 50 + 100, b + i, 150 + 150 + 100); // Gamba sinistra
        line(50 + i, 150 + 50 + 100, a + i, 150 + 150 + 100); // Gamba destra

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