#include <stdio.h>

int main(){

    int idade;
    printf("Insira a sua idade: ");
    scanf("%i", &idade);

    if (idade < 0) {
        goto erro;
    }
    printf("\nVocê tem %i anos!\n", idade);
    return 0;

    erro:
        printf("\nIdade Inválida, não aceito número negativo\n");
        return 1;
}
