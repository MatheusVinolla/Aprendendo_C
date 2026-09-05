#include <stdio.h>

int main(){
    
    int saque;
    while (1) {
        printf("\n=== CAIXA ELETRÔNICO ===\n");
        printf("DIGITE 999 PARA SAIR\n\n");
        printf("Insira o valor do saque: ");
        scanf("%d", &saque);

        if (saque <= 0) {
            printf("\nValor Inválido para a transação, tente novamente...\n");
            continue;

        } else if (saque == 999){
            printf("\nOperação Finalizada com sucesso!\n");
            break;

        } else if ((saque % 10) != 0) {
            printf("\nNotas Indisponíveis, dirija-se para outro caixa\n");
            printf("Apenas Notas de R$10, R$20 e R$50...\n");
            continue;

         } else {
            printf("\nSaque Efetuado com sucesso!\n");
        }
    }
    return 0;
}

