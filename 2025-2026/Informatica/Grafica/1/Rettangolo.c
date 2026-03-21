/*
* Cognome: Gotuzzo
* Nome: Sergio
* Classe: 3 AIT
* Data: 26/11/2025
*/

#include <graphics.h>

int main() {
    initwindow(800, 600, "Rettangolo");

    int width = 200;
    int height = 100;
    int x = (getmaxx() - width) / 2;
    int y = (getmaxy() - height) / 2;
    
    rectangle(x, y, x + width, y + height);

    getch();

    closegraph();

    return 0;
}