#include <stdio.h>

int main() {
	int n, i = 0;

	do {
		scanf("%d", &n);

		if (n >= 0 && n % 2 == 0) {
			i++;
		}
	} while (n >= 0);

	printf("I numeri positivi inseriti sono %d\n", i);
	
	return 0;
}