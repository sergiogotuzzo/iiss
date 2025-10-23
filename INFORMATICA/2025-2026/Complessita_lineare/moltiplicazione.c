#include <stdio.h>

int main() {
	int n1, n2;

	printf("Inserisci due valori\n");
	scanf("%d %d", &n1, &n2);

	int res = 0;

	for (int i = 0; i < n2; i++) {
		res += n1;
	}

	printf("Il prodotto tra %d e %d e' %d\n", n1, n2, res);

	return 0;
}