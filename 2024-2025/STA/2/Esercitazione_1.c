#include <stdio.h>

int main()
{
	int N;

	do {
		printf("Scrivi un numero intero positivo\n");
		scanf("%d", &N);
	} while (N <= 0);

	for (int i = 1; i <= N; i++) {
		printf("%d", i);
	};

	return 0;
}
