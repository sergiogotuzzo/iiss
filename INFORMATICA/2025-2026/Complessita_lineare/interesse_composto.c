#include <stdio.h>

int main() {
	float capitale, interesse;

	printf("Inserisci il capitale e la percentuale del tasso di interesse\n");
	scanf("%f %f", &capitale, &interesse);

	int anni;

	printf("Dopo quanti anni di accumulo?\n");
	scanf("%d", &anni);

	interesse /= 100;

	for (int i = 0; i < anni; i++) {
		capitale += capitale * interesse;
	}

	printf("Il capitale accumulato dopo %d anni e' di %f\n", anni, capitale);

	return 0;
}
