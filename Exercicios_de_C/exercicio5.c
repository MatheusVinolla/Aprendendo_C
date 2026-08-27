/* EXERCICIO 5
SIMULADOR DE CAIXA ELETRÔNICO
DESAFIO: UTILIZAR UMA ESTRUTURA DE REPETIÇÃO
NÃO FOI ENSINADA AINDA...
*/

#include <stdio.h>

int main(){

    double saldo, deposito, saque, limite;
    int opcao;

    printf("===== CAIXA ELETRÔNICO =====\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Depositar\n");
    printf("3 - Sacar\n");
    printf("4 - Verificar limite\n");
    printf("5 - Encerrar\n");
    printf("=============================\n");
    
    printf("Insira a opção que deseja acessar: ");
    scanf("%d", &opcao);

    saldo = 1000;

    switch (opcao) {
        case 1:
            printf("O seu saldo atual é de: R$ %.2lf\n", saldo);
            break;
        case 2:
            printf("Insira o valor que deseja depositar: ");
            scanf("%lf", &deposito);
            deposito = (deposito > 0) ? deposito:0;
            saldo = saldo + deposito;
            break;
        case 3:
            printf("Insira o valor que deseja sacar: ");
            scanf("%lf", &saque);
            if (saque > saldo) {
                printf("Saldo Insuficiente!\n");
            }
            saque = ((saque > 0) && (saque < saldo)) ? saque:0;
            saldo = saldo - saque;
            break;
        case 4:
            limite = saldo * 0.30;
            printf("O Limite disponível para saque é: %.2lf\n", limite);
            break;
        case 5:
            printf("Operação Encerrada!\n");
            break;
        default:
            printf("Opção Inválida!\n");
            break;
    }

    if (opcao != 1) {
        printf("\nO seu saldo atual no final ficou de: R$ %.2lf\n", saldo);
    }
    
    return 0;
}
