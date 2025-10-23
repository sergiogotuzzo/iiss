#include <stdio.h>

int main() {
	int n1, n2;

	printf("Inserisci due numeri\n");
	scanf("%d %d", &n1, &n2);

	int i = 1;

	while ((n1 * i) % n2 != 0) {
		i++;
	}

	printf("L'mcm tra %d e %d e' %d\n", n1, n2, n1 * i);

	return 0;
}