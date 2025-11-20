#include <stdio.h>

int main() {
    int d = 2;
    int m = 5;
    int y = 2025;

    int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int len = 12;

    int sum = 345;

    while (sum > arr[m - 1]) {
        sum -= arr[m - 1];
        m++;

        if (m > 12) {
            y++;
            m = 1;
        }
    }

    d += sum;

    printf("%d/%d/%d\n", d, m, y);

    return 0;
}