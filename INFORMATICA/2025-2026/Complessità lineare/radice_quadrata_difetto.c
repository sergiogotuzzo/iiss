#include <stdio.h>

int main() {
	int n;

	printf("Inserisci un numero\n");
	scanf("%d", &n);

	int res = 1;

	while (res * res <= n) {
		res++;
	}

	printf("La radice quadrata di %d è %d\n", n, res - 1);

	return 0;
}