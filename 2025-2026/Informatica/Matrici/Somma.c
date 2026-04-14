#include <stdio.h>

int main() {
    int mx1[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int mx2[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int res[4][3] = {};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            res[i][j] = mx1[i][j] + mx2[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", res[i][j]);
        }

        printf("\n");
    }

    return 0;
}