#include <stdio.h>

int main() {
	int n, d;

	printf("Inserisci un dividendo e un divisore\n");
	scanf("%d %d", &n, &d);

	int i = 0;

	while (n >= d) {
		n-=d;
		i++;
	}

	printf("Quoto: %d\nResto: %d\n", i, n);

	return 0;
}
