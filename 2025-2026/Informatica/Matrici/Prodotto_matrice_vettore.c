#include <stdio.h>

#define ROW_MX 2
#define COL_MX 3

int main() {
    int mx[ROW_MX][COL_MX] = {{1, 2, 3}, {4, 5, 6}};
    int arr[COL_MX] = {7, 9, 11};
    int res[ROW_MX] = {0, 0};

    for (int i = 0; i < ROW_MX; i++) {
        for (int j = 0; j < COL_MX; j++) {
            res[i] += mx[i][j] * arr[j];
        }
    }

    for (int i = 0; i < ROW_MX; i++) {
        printf("%d ", res[i]);
    }

    printf("\n");

    return 0;
}