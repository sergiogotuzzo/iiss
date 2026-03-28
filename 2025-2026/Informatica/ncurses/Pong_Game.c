#include <ncurses.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define PLAYER_HEIGHT 4

void draw_player(int y, int x) {
    attron(A_REVERSE);

    for (int i = 0; i < PLAYER_HEIGHT; i++) {
        mvaddch(y + i, x, ' ');
    }

    attroff(A_REVERSE);
}

void draw_ball(int y, int x) {
    attron(A_REVERSE);
    mvaddch(y, x, ' ');
    attroff(A_REVERSE);
}

bool ball_collapsed(int ball_y, int ball_x, int player_y, int player_x) {
    return (ball_x >= player_x - 1 && ball_x <= player_x + 1) && (ball_y >= player_y && ball_y < player_y + PLAYER_HEIGHT);
}

int get_ball_y_factor(int player_y, int ball_y) {
    int range = player_y + PLAYER_HEIGHT - 1 - ball_y;

    switch (range) {
        case 0:
            return 2;
        case 1:
            return 1;
        case 2:
            return -1;
        case 3:
            return -2;
    }
}

void reset_ball_stats(int *ball_y, int *ball_x, int *ball_y_factor, int *ball_x_factor, int round, int max_y, int max_x) {
    *ball_y = max_y / 2;
    *ball_x = max_x / 2;
    *ball_y_factor = 0;
    *ball_x_factor = (round % 2 == 0) ? 3 : -3;
}

int main() {
    srand(time(NULL));
    initscr();
    noecho();
    curs_set(0);
    keypad(stdscr, TRUE);
    nodelay(stdscr, TRUE);
    start_color();

    int max_x, max_y;

    getmaxyx(stdscr, max_y, max_x);

    int round = 0, bot_points = 0, player_points = 0;
    int player_y = max_y / 2, player_x = max_x - 2;
    int bot_y = max_y / 2, bot_x = 1;
    int ball_y = max_y / 2, ball_x = max_x / 2;
    int ball_y_factor = 0, ball_x_factor = 3;
    bool flag = false;
    int random_bot_range;

    timeout(80);

    while (true) {
        clear();

        mvprintw(0, max_x / 2, "%d - %d", bot_points, player_points);

        draw_player(bot_y, bot_x);
        draw_player(player_y, player_x);

        draw_ball(ball_y, ball_x);

        ball_x += ball_x_factor;
        ball_y += ball_y_factor;

        if (ball_collapsed(ball_y, ball_x, player_y, player_x) || ball_collapsed(ball_y, ball_x, bot_y, bot_x)) {
            if (ball_x_factor > 0) {
                ball_y_factor = get_ball_y_factor(player_y, ball_y);
                ball_x_factor = -3;
            } else {
                ball_y_factor = get_ball_y_factor(bot_y, ball_y);
                ball_x_factor = 3;
                flag = false;
            }
        }

        if (ball_y >= max_y || ball_y <= 0) {
            ball_y_factor = -ball_y_factor;
        }

        if (ball_x > max_x) {
            bot_points++;
            round++;
            reset_ball_stats(&ball_y, &ball_x, &ball_y_factor, &ball_x_factor, round, max_y, max_x);
        } else if (ball_x < 0) {
            player_points++;
            round++;
            reset_ball_stats(&ball_y, &ball_x, &ball_y_factor, &ball_x_factor, round, max_y, max_x);
        }

        if (ball_x_factor < 0) {
            if (!flag) {
                flag = true;
                random_bot_range = rand() % 2 + 1;
            }

            if (bot_y + PLAYER_HEIGHT - 1 - random_bot_range > ball_y) {
                if (bot_y > 0) {
                    bot_y--;
                }
            } else if (bot_y + PLAYER_HEIGHT - 1 - random_bot_range < ball_y) {
                if (bot_y < max_y - PLAYER_HEIGHT) {
                    bot_y++;
                }
            }
        }

        switch (getch()) {
            case KEY_UP:
                if (player_y > 0) {
                    player_y--;
                }
                break;
            case KEY_DOWN:
                if (player_y < max_y - PLAYER_HEIGHT) {
                    player_y++;
                }
                break;
        }

        if (bot_points >= 10 || player_points >= 10) {
            clear();

            mvprintw(max_y / 2 - 1, max_x / 2, "%d - %d", bot_points, player_points);

            char who[4];

            strcpy(who, bot_points >= 10 ? "Bot" : "You");

            mvprintw(max_y / 2, max_x / 2, "%s won!", who);

            refresh();
            napms(2000);
            break;
        }

        refresh();
    }

    getch();
    endwin();

    return 0;
}