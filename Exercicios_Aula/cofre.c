//Tentativas Excedidas : 3 tentativas no máximo
//Alerta de Invasão : 9999 digitado feche o programa

#include <stdio.h>

int main() {

    int login, senha, tentativas;
    double saldo = 1000.00;
    
    tentativas = 0;
    while (1) {
        printf("LOGIN : ");
        scanf("%d", &login);
        printf("SENHA : ");
        scanf("%d", &senha);

        if ((senha == 9999) || (login == 9999)) {
            printf("\nCÓDIGO DE SEGURANÇA ATIVADO\n");
            printf("SERVIÇO ENCERRADO...\n");
            break;
        } else if (tentativas > 3){
            printf("\nLIMITES DE TENTATIVAS EXCEDIDO\n");
            printf("SERVIÇO ENCERRADO...\n");
            break;
        } else if ((login == 0000) && (senha == 1234)) {
            printf("\nBEM-VINDO Thommas\n");
            printf("SEU SALDO É DE: R$ %.2lf\n", saldo);
            tentativas = 0;
            /*int opcao;
            while (1) {
                switch opcao:
                    case 1:
                        break
                    case 2:
                        break
            */
            }


        
        } else {
            printf("\nSENHA OU LOGIN INVÁLIDO, TENTE NOVAMENTE...\n");
            tentativas++;
        }
    }
    return 0;
}
