//      EXERCICIO 10
// Desenho de Pirâmide para Construção

#include <stdio.h>

int main(){
    
    int alturaPiramide, novamente;
    char caracterPiramide[2];

    printf("\n\t\033[1;33m======== DESENHAR PIRÂMIDE ========\033[m\n");

    do {

        printf("Insira um valor inteiro entre 1 e 20 para a altura: ");
        scanf("%i", &alturaPiramide);
     
        if ((alturaPiramide < 1) || (alturaPiramide > 20)){
            printf("Altura inválida!\n"); 
            continue;
        }
        
        printf("Insira o caracter que deseja desenhar: ");
        scanf("%s", caracterPiramide);

        printf("\n\033[1;33m");
        for (int contador = 1; contador <= alturaPiramide; contador++){
            for (int asteriscos = 1; asteriscos <= contador; asteriscos++){
                printf("%s", caracterPiramide);
            }
            printf("\n");
        } 
        printf("\n\033[m");
        while(1){
            printf("Deseja desenhar novamente[1 = SIM, 0 = NÃO]? ");
            scanf("%i", &novamente);
            if ((novamente == 0) || (novamente == 1)){
                break; 
            } else {
                printf("Resposta inválida! Digite 1 ou 0 \n\n");
                continue; 
            }
        }
        if (novamente == 0){
            break; 
        }
        printf("\n");
    } while (1);

    return 0;
}
