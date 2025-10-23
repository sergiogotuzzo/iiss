#include <stdio.h>

int main() {
	int max;

	printf("Inserire il numero massimo di numeri di Fibonacci da visualizzare\n");
	scanf("%d", &max);

	int n1 = 1, n2 = 0, i = 0;

	while (i++ <= max) {
		int sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		
		printf("%d\n", n2);
	}
	
	return 0;
}
