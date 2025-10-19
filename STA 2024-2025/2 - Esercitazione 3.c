#include <stdio.h>

int main()
{
	int N;

	do {
		printf("Scrivi un numero intero positivo\n");
		scanf("%d", &N);
	} while (N <= 0);

	int contatore = 0;

	do {
		contatore++;

		N = N / 10;
	} while (N != 0);

	printf("Le cifre del numero sono %d", contatore);

	return 0;
}
