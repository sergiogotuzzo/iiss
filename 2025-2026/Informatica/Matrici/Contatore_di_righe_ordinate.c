#include <stdio.h>
#include <stdbool.h>

int main() {
    int mx[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int count = 0;

    for (int i = 0; i < 4; i++) {
        bool isSorted = true;

        for (int j = 0; j < 3 - 1; j++) {
            if (mx[i][j] > mx[i][j + 1]) {
                isSorted = false;
            }
        }

        if (isSorted) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}