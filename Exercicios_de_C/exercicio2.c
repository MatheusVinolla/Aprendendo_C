//EXERCICIO 2 - ANO BISSEXTO
// divisivel por 4, mas não por 100
//		ou
// divisivel por 400
// DESAFIO USANDO OPERADOR BIT BIT SE É PAR OU NÃO

#include <stdio.h>

int main(){

    printf("\n===================================\n");
    printf("    CALCULADORA DE ANO BISSEXTO    ");
    printf("\n===================================\n");

	int ano;
    int divisivel4, divisivel100, divisivel400;
    int impar;

	printf("Insira o ano para calcular: ");
	scanf("%d", &ano);
    
    if (ano < 0){
        printf("Ano %d Inválido...\n", ano);
    } else {
        // DESAFIO
        // 0 & 1 = 0 === NÃO IMPAR
        // 1 & 1 = 1 === IMPAR
        impar = ano & 1;
        if (impar){
            printf("\nO ano %d é IMPAR!!!\n", ano); 
        } else {
            printf("\nO ano %d é PAR!!!\n", ano);
        } 
        
        divisivel4 = ((ano & 3) == 0) ? 1:0;
        divisivel100 = ((ano % 100) == 0) ? 1:0;
        divisivel400 = ((ano % 400) == 0) ? 1:0;

        if ((divisivel4 && !divisivel100) || (divisivel400)) {
            printf("Ano %d é bissexto\n", ano);
        } else {
            printf("Ano %d não bissexto\n", ano);
        }
    }

	return 0;
}
