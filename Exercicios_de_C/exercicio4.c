/* EXERCICIO 4
TERMINAL DE AUTOATENDIMENTO 
DE UMA LANCHONETE
DESAFIO JÁ FEITO
*/

#include <stdio.h>

int main() {
	
	int codigoProduto, quantidade, sobremesaResposta;
    int invalidoProduto, invalidoQuantidade, invalidoSobremesa;
	float total, totalSemDesconto, preco, desconto, valorDescontado,sobremesaValor;

	printf("\t===== MENU =====\n");
	printf("1 - Hambúrguer ........ R$ 18,00\n");
	printf("2 - X-Salada .......... R$ 22,00\n");
	printf("3 - X-Bacon ........... R$ 25,00\n");
	printf("4 - Batata Frita ...... R$ 12,00\n");
	printf("5 - Refrigerante ...... R$ 7,00\n");

	printf("Insira o código do produto: ");
	scanf("%d", &codigoProduto);
	printf("Insira a quantidade do produto: ");
	scanf("%d", &quantidade);
	printf("Deseja adicionar sobremesa [0 = Não, 1 = Sim]? ");
	scanf("%d", &sobremesaResposta);

    invalidoProduto = ((codigoProduto <= 0) || (codigoProduto > 5)) ? 1:0;
    invalidoQuantidade = (quantidade <= 0) ? 1:0;
    invalidoSobremesa = ((sobremesaResposta != 1) && (sobremesaResposta != 0)) ? 1:0;

	if ((invalidoProduto) || (invalidoQuantidade) || (invalidoSobremesa)){
            if (invalidoProduto) {
                printf("Produto Inválido\n");
                }
            if (invalidoQuantidade) {
                printf("Quantidade Inválida\n");
                }
            if (invalidoSobremesa) {
                printf("Resposta da Sobremesa Inválida\n");
                } 
    } else {

        printf("\n============= NOTA FISCAL ============\n");

        switch (codigoProduto){
            preco = 0; //Evitar warnings do compilador
            case 1:
                preco = 18;
                printf("PRODUTO ESCOLHIDO  === Hambúrguer\n");
                break;
            case 2:
                preco = 22;
                printf("PRODUTO ESCOLHIDO  === X-Salada\n");
                break;
            case 3:
                preco = 25;
                printf("PRODUTO ESCOLHIDO  === X-Bacon\n");
                break;
            case 4:
                preco = 12;
                printf("PRODUTO ESCOLHIDO  === Batata Frita\n");
                break;
            case 5:
                preco = 7;
                printf("PRODUTO ESCOLHIDO  === Refrigerante\n");
                break;
            }

        sobremesaValor = (sobremesaResposta) ? 8:0;
        totalSemDesconto = (preco * quantidade) + sobremesaValor;
        if (totalSemDesconto > 100) {
            desconto = 0.90; //10%
        } else if ((totalSemDesconto <= 100) && (totalSemDesconto => 50)) {
            desconto = 0.95; //5%
        } else {
            desconto = 1;
        }

        valorDescontado = (1 - desconto) * totalSemDesconto;
        total = totalSemDesconto * desconto;

        printf("QUANTIDADE         === %d\n", quantidade);
        printf("VALOR DOS PRODUTOS === R$ %.2f\n", preco * quantidade);
        printf("VALOR DA SOBREMESA === R$ %.2f\n", sobremesaValor);
        printf("DESCONTO           === R$ %.2f\n", valorDescontado);
        printf("VALOR FINAL        === R$ %.2f\n", total);
    } 
 	return 0;
}
