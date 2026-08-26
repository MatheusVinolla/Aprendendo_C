#include <stdio.h>

int main(){
	
	float consumoReal, taxa;
	int consumoKwh, negativo;

	printf("\n=======================================\n");
	printf("\tCalculadora de Consumo em KWH");
	printf("\n=======================================\n");
	printf("Informe o seu consumo em KWH: ");
	scanf("%d", &consumoKwh);

	if (consumoKwh > 500) {
		//1,20 * consumo * 1,15
		taxa = 1.20 * 1.15;
	} else if (consumoKwh > 200) {
		taxa = 1.20;
	} else if ((101 < consumoKwh) && (consumoKwh < 200)) {
		taxa = 0.75;
	} else if ((0 < consumoKwh) && (consumoKwh < 100)) {
		taxa = 0.50;
	} else {
		printf("Consumo Inválido\n");
		negativo = 1;
	}
	if (!negativo) {
		consumoReal = consumoKwh * taxa;
		printf("Você deverá pagar %.2fR$\n", consumoReal);
	}

	return 0;
}
