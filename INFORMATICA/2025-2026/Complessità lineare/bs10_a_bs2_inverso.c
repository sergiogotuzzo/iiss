#include <stdio.h>

int main() {
	int n;

	printf("Inserisci il numero\n");
	scanf("%d", &n);

	while (n > 0) {
		printf("%d", n % 2);
		n /= 2;
	}

	printf("\n");

	return 0;
}
