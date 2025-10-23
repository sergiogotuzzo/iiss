#include <stdio.h>

int main() {
	int n;

	printf("Inserisci il numero\n");
	scanf("%d", &n);

	int pow = 1;

	while (pow <= n) {
		printf("%d\n", pow);		
		pow *= 2;
	}
	
	return 0;
}
