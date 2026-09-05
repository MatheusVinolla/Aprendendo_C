//              EXERCICIO 7
// CONTROLE DE VENDAS PARA UMA LANCHONETE
#include <stdio.h>

int main(){

    int codigoProduto, contadorVendas;
    float valorVenda, valorTotal;
    contadorVendas = 0;
    valorTotal = 0;

    printf("\033[1;33m\n===== LANCHONETE BOM SABOR =====\n\033[m");

    while (1){
        printf("Informe o código do produto: ");
        scanf("%i", &codigoProduto);
        if (codigoProduto == -1){
            break;
        }
        printf("Informe o valor da venda: ");
        scanf("%f", &valorVenda);
        
        if (valorVenda <= 0){
            printf("\033[31mValor inválido! Venda ignorada.\n\n\033[m");
            continue;
        }

        printf("\n");
        valorTotal += valorVenda;
        contadorVendas++;
    } 

    printf("\n=========================================\n");
    if ((valorTotal == 0) || (contadorVendas == 0)){
        printf("Nenhuma venda registrada.\n");
    } else { 
        printf("Total de vendas:      %d\n", contadorVendas);
        printf("Total arrecadado:   R$%.2f\n", valorTotal);
        printf("Valor médio:        R$%.2f\n", valorTotal / contadorVendas); 
    }
    return 0;
}
