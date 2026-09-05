/* EXERCICIO 3
CALCULAR A TARIFA DE ENERGIA
DADA EM KWH com taxa de consumo 
para cada ocasião
*/

#include <stdio.h>

int main(){
	
	float consumoReal, taxa;
	int consumoKwh, negativo, multiplo8;

	printf("\n=======================================\n");
	printf("    Calculadora de Consumo em KWH");
	printf("\n=======================================\n");
	printf("Informe o seu consumo em KWH: ");
	scanf("%d", &consumoKwh);

    negativo = 0;

	if (consumoKwh > 500) {
		//1,20 * consumo * 1,15
		taxa = 1.20 * 1.15;
	} else if (consumoKwh > 200) {
		taxa = 1.20;
	} else if ((101 <= consumoKwh) && (consumoKwh <= 200)) {
		taxa = 0.75;
	} else if ((0 <= consumoKwh) && (consumoKwh <= 100)) {
		taxa = 0.50;
	} else {
		printf("Consumo Inválido\n");
		negativo = 1;
	}
	if (!negativo) {
        //DESAFIO: O CONSUMO É MÚLTIPLO DE 8 OU NÃO
        multiplo8 = ((consumoKwh & 7) == 0);
        if (multiplo8) {
            printf("\nSeu consumo de %dkwh é um número múltiplo de 8!!!\n", consumoKwh);
        } else {
            printf("\nSeu consumo de %dkwh não é um número múltiplo de 8\n", consumoKwh); 
        }
        
		consumoReal = consumoKwh * taxa;
		printf("Você deverá pagar %.2fR$\n", consumoReal);
	}

	return 0;
}
