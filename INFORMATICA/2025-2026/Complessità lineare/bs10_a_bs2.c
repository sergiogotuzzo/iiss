#include <stdio.h>

int main() {
	int n;

	printf("Inserisci il numero in base 10\n");
	scanf("%d", &n);

	int sum = 0, pow = 1;

	while (n > 0) {
		sum += n % 2 * pow;
		pow *= 10;
		n /= 2;
	}

	printf("%d\n", sum);

	return 0;
}
