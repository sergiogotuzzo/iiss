#include <ncurses.h>
#include <stdbool.h>

int main() {
    initscr();
    noecho();
    curs_set(0);
    keypad(stdscr, TRUE);
    nodelay(stdscr, TRUE);
    start_color();

    int max_x, max_y;

    getmaxyx(stdscr, max_y, max_x);

    int ship_x = 0, ship_y = 0;
    int cannon_x = max_x / 2, cannon_y = max_y - 5;
    int bullet_x, bullet_y = cannon_y - 1;
    bool fired = false;

    timeout(80);

    init_pair(1, COLOR_RED, COLOR_BLACK);

    bool right = true;

    while (true) {
        clear();

        if (ship_x >= max_x - 5) {
            right = false;
        } else if (ship_x <= 0) {
            right = true;
        }

        if (right) {
            ship_x++;
        } else {
            ship_x--;
        }

        attron(COLOR_PAIR(1));
        mvprintw(ship_y, ship_x, "( o )");
        attroff(COLOR_PAIR(1));
        mvprintw(cannon_y, cannon_x, "/\\");

        if (fired) {
            bullet_y--;

            if (bullet_y == ship_y && bullet_x >= ship_x && bullet_x <= ship_x + 5) {
                mvprintw(max_y / 2, (max_x - 9) / 2, "COLPITO!");
                refresh();
                napms(2000);
                break;
            }
            
            if (bullet_y < 0) {
                mvprintw(max_y / 2, (max_x - 9) / 2, "MANCATO!");
                refresh();
                napms(2000);
                break;
            }

            mvaddch(bullet_y, bullet_x, '|');
        }

        switch (getch()) {
            case KEY_LEFT: {
                if (cannon_x > 3) {
                    cannon_x -= 3;
                }
            } break;
            case KEY_RIGHT: {
                if (cannon_x < max_x - 5) {
                    cannon_x += 3;
                }
            } break;
            case ' ': {
                if (!fired) {
                    fired = true;
                    bullet_x = cannon_x;
                    mvaddch(bullet_y, bullet_x, '|');
                    refresh();
                }
            } break;
        }

        refresh();
    }

    getch();
    endwin();

    return 0;
}