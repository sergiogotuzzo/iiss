#include <stdio.h>

int main() {
	float capitale, interesse;

	printf("Inserisci il capitale e la percentuale di tasso di interesse\n");
	scanf("%f %f", &capitale, &interesse);

	interesse /= 100;

	float capitaleRaddoppiato = capitale * 2;

	int anni = 1;

	while (capitale <= capitaleRaddoppiato) {
		capitale += capitale * interesse;

		anni++;
	}

	printf("Il capitale è raddoppiato dopo %d anni\n", anni);

	return 0;
}
