#include <stdio.h>

int main() {
	int n1, n2;

	printf("Inserisci due numeri\n");
	scanf("%d %d", &n1, &n2);

	int r;

	do {
		r = n1 % n2;

		if (r > 0) {
			n1 = n2;
			n2 = r;
		}
	} while (r > 0);

	printf("L'MCD tra %d e %d e' %d\n", n1, n2, r);

	return 0;
}	