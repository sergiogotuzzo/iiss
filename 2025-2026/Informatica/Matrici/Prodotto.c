#include <stdio.h>

#define ROW_MX1 2 // = COL_MX2
#define COL_MX1 3 // = ROW_MX2
#define ROW_MX2 3 // = COL_MX1
#define COL_MX2 2 // = ROW_MX1

int main() {
    int mx1[ROW_MX1][COL_MX1] = {{1, 2, 3}, {4, 5, 6}};
    int mx2[ROW_MX2][COL_MX2] = {{7, 8}, {9, 10}, {11, 12}};
    int res[ROW_MX1][COL_MX2] = {};

    for (int i = 0; i < ROW_MX1; i++) {
        for (int j = 0; j < COL_MX2; j++) {
            for (int k = 0; k < COL_MX1; k++) {
                res[i][j] += mx1[i][k] * mx2[k][j];
            }
        }
    }

    for (int i = 0; i < ROW_MX1; i++) {
        for (int j = 0; j < COL_MX2; j++) {
            printf("%d ", res[i][j]);
        }

        printf("\n");
    }

    return 0;
}