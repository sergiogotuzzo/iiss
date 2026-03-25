#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void init_table(char table[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            table[i][j] = '-';
        }
    }
}

void print_table(char table[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mvaddch(i * 2, j * 2, table[i][j]);
        }
    }
}

void select_cell(char table[3][3], int row, int col) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == row && j == col) {
                attron(A_REVERSE);
            }

            mvaddch(i * 2, j * 2, table[i][j]);

            attroff(A_REVERSE);
        }
    }
}

bool check_row(char table[3][3], char player, int row) {
    return table[row][0] == player && table[row][1] == player && table[row][2] == player;
}

bool check_col(char table[3][3], char player, int col) {
    return table[0][col] == player && table[1][col] == player && table[2][col] == player;
}

bool check_diagonals(char table[3][3], char player) {
    bool c_1 = table[0][0] == player && table[1][1] == player && table[2][2] == player;
    bool c_2 = table[0][2] == player && table[1][1] == player && table[2][0] == player;

    return c_1 || c_2;
}

bool did_someone_win(char table[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if (check_row(table, player, i)) {
            return true;
        }

        if (check_col(table, player, i)) {
            return true;
        }
    }

    if (check_diagonals(table, player)) {
        return true;
    }

    return false;
}

int main() {
    srand(time(NULL));
    initscr();
    noecho();
    curs_set(0);
    keypad(stdscr, TRUE);
    start_color();

    char table[3][3];
    int sel_row = 0, sel_col = 0;
    char player = 'X';
    int bot_row, bot_col;
    bool win = false;

    init_table(table);

    select_cell(table, sel_row, sel_col);

    while (!win) {
        switch (getch()) {
            case KEY_UP: {
                if (sel_row > 0) {
                    sel_row--;

                    refresh();

                    select_cell(table, sel_row, sel_col);
                }
            } break;
            case KEY_DOWN: {
                if (sel_row < 2) {
                    sel_row++;

                    refresh();

                    select_cell(table, sel_row, sel_col);
                }
            } break;
            case KEY_LEFT: {
                if (sel_col > 0) {
                    sel_col--;

                    refresh();

                    select_cell(table, sel_row, sel_col);
                }
            } break;
            case KEY_RIGHT: {
                if (sel_col < 2) {
                    sel_col++;

                    refresh();

                    select_cell(table, sel_row, sel_col);
                }
            } break;
            case ' ': {
                table[sel_row][sel_col] = player;

                if (did_someone_win(table, player)) {
                    refresh();

                    select_cell(table, sel_row, sel_col);
                    win = true;
                    mvprintw(20, 0, "HAI VINTO!");
                }

                do {
                    bot_col = rand() % 3;
                    bot_row = rand() % 3;
                } while (table[bot_row][bot_col] != '-');

                table[bot_row][bot_col] = 'O';

                if (did_someone_win(table, 'O')) {
                    refresh();

                    select_cell(table, sel_row, sel_col);
                    win = true;
                    mvprintw(20, 0, "HAI PERSO!");
                }

                refresh();

                select_cell(table, sel_row, sel_col);
            }
        }
    }

    getch();
    endwin();

    return 0;
}