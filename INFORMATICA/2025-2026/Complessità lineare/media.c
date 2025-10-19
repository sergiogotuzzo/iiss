#include <stdio.h>

int main() {
	int n;

	printf("Inserisci il numero di valori\n");
	scanf("%d", &n);

	int sum = 0;	

	for (int i = 0; i < n; i++) {
		int ni;

		printf("Inserisci il valore n. %d\n", i + 1);
		scanf("%d", &ni);

		sum += ni;
	}

	printf("La media e' %d\n", sum / n);

	return 0;
}