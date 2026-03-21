#include <graphics.h>
#include <stdbool.h>

int main() {
    int square = 70;
    int table = 8;

    initwindow(square * table, square * table, "Scacchiera");

    bool flag = true;

    int x = 0;
    int y = 0;

    for (int i = 0, j = 0, k = 0; i < table * table; i++, k++) {
        if (k >= table) {
            k = 0;
            j++;
            flag = !flag;
        }

        setfillstyle(SOLID_FILL, flag ? BLACK : WHITE);
        bar(k * square, j * square, k * square + square, j * square + square);

        flag = !flag;
    }

    getch();

    closegraph();

    return 0;
}