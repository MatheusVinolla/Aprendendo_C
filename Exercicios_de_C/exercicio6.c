/* EXERCICIO 6
CALCULADORA DE OPERAÇÕES BIT A BIT
DESAFIO PROIBIDO NÚMEROS NEGATIVOS
*/

#include <stdio.h>

int main(){

    int numero1, numero2, operacao, resultado;
    int invalido, negativo;

    printf("\n===== Calculadora de Operações Bit a Bit =====\n");
    printf("1 - E bit a bit (&)\n");
    printf("2 - OU bit a bit (|)\n");
    printf("3 - OU exclusivo (^)\n");
    printf("4 - Deslocamento à esquerda (<<)\n");
    printf("5 - Deslocamento à direita (>>)\n");

    printf("____________________________________\n\n");
    printf("Insira um número inteiro qualquer: ");
    scanf("%d", &numero1);
    printf("Insira outro número inteiro qualquer: ");
    scanf("%d", &numero2);
    printf("____________________________________\n\n");

    negativo = (numero1 < 0) || (numero2 < 0);
    if (negativo) {
        printf("Os valores não podem ser negativos...\n");
    } else {

        printf("Insira a operação que deseja executar: ");
        scanf("%d", &operacao);

        invalido = 0;

        switch (operacao) {
            case 1:
                resultado = numero1 & numero2;
                break;
            case 2:
                resultado = numero1 | numero2;
                break;
            case 3:
                resultado = numero1 ^ numero2;
                break;
            case 4:
                resultado = numero1 << numero2;
                break;
            case 5:
                resultado = numero1 >> numero2;
                break;
            default:
                printf("Operação Inválida\n");
                invalido = 1;
                break; 
        }
        if (!invalido){
            printf("O resultado da operação vale em decimal:     %d\n", resultado);    
            printf("O resultado da operação vale em hexadecimal: %X\n", resultado);
        }
    }

    return 0;
}
