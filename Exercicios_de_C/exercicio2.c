//EXERCICIO 2 - ANO BISSEXTO

// divisivel por 4, mas não por 100
//		ou
// divisivel por 400

#include <stdio.h>

int main(){

	int ano;
    int divisivel4, divisivel100, divisivel400;

	printf("Insira o ano para calcular: ");
	scanf("%d", &ano);
    
    if (ano < 0){
        scanf("%d", &ano);
        printf("Ano Inválido...\n");
    } else {

        divisivel4 = ((ano & 3) == 0) ? 1:0;
        divisivel100 = ((ano % 100) == 0) ? 1:0;
        divisivel400 = ((ano % 400) == 0) ? 1:0;

        if ((divisivel4 && !divisivel100) || (divisivel400)) {
            printf("Ano bissexto\n");
        } else {
            printf("Ano não bissexto\n");
        }
    }

	return 0;
}
