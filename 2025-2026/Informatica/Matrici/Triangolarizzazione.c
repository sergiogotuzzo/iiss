#include <stdio.h>

int main() {
    int mx[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3 - 1; i++) {
        for (int j = i + 1; j < 3; j++) {
            float coef = -mx[j][i] / mx[i][i];

            for (int k = 0; k < 3; k++) {
                mx[j][k] += mx[i][k] * coef;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mx[i][j]);
        }

        printf("\n");
    }

    return 0;
}