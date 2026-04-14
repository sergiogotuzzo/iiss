#include <stdio.h>

int main() {
    int mx[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int factor = 4;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            mx[i][j] *= factor;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mx[i][j]);
        }

        printf("\n");
    }

    return 0;
}