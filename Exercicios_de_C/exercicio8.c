//      EXERCICIO 8
//CRUD DE SUPERMERCADO
#include <stdio.h>

int main(){
    
    int opcao, mostragem, vazio; 
    vazio = 1;

    char nomeProduto[20] = "VAZIO";
    int quantidadeEstoque;
    float precoUnitario;

    do {
        printf("\033[1;33m\n==== SUPERMERCADO ====\n");
        printf("1 - Adicionar produto\n");
        printf("2 - Listar produtos\n");
        printf("3 - Calcular valor total do estoque\n");
        printf("4 - Sair\n");

        printf(">>> \033[m");
        scanf("%i", &opcao);
        printf("\n\n");

        switch (opcao) {
            case 1:         
                printf("Quantos produtos deseja cadastrar? ");
                scanf("%i", &mostragem);
                printf("\n");
                for (int contador = 1; contador <= mostragem; contador++){

                    printf("Insira o nome do produto: ");
                    scanf("%s", nomeProduto);
                    printf("Insira a quantidade em estoque: ");
                    scanf("%i", &quantidadeEstoque);
                    if (quantidadeEstoque < 0){
                        printf("Quantidade de estoque não pode ser negativo!\n\n");
                        break;
                    }
                    printf("Insira o preço unitário: ");
                    scanf("%f", &precoUnitario);
                    if (precoUnitario < 0){
                        printf("Preço Unitário não pode ser negativo!\n\n");
                        break;
                    }
                    vazio = 0;
                    printf("\n");
                } 
                if (!vazio){
                    printf("CADASTRO REALIZADO COM SUCESSO!\n");
                }
                    break;
            case 2:         
                if (vazio){
                    printf("Nenhum produto cadastrado.\n");
                } else {
                    printf("%-20s | QUANTIDADE | PREÇO\n", "NOME");
                    printf("%-20s | %-10d | R$%-5.02f", nomeProduto, quantidadeEstoque, precoUnitario);
                }
                break;

            case 3: 
                if (vazio){
                    printf("Nenhum produto cadastrado.\n");
                } else {
                    printf("Valor total do estoque: R$%.02f\n", quantidadeEstoque * precoUnitario);
                }
                break;
            case 4:
                printf("Encerrando o sistema...\n");
                break;        
            default: 
                printf("Opção inválida!\n");
                break;
        }
    } while(opcao != 4);

    return 0;
}
