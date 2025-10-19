#include <stdio.h>

int main()
{
	float N;

	printf("Scrivi un numero\n");
	scanf("%f", &N);

	float somma = 0;

	for (int i = 1; i <= N; i++) {
		somma += i;
	};

	printf("%f", somma);

	return 0;
}
