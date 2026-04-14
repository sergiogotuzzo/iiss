#include <stdio.h>

int main() {
    int mx1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mx2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mx1[i][j] = mx2[j][i];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mx1[i][j]);
        }

        printf("\n");
    }

    return 0;
}