#include <stdio.h>

int main() {
	int n, e;

	printf("Inserisci un numero e l'esponente\n");
	scanf("%d %d", &n, &e);

	int res = 1;

	for (int i = 0; i < e; i++) {
		res *= n;
	}

	printf("%d^%d = %d\n", n, e, res);

	return 0;
}