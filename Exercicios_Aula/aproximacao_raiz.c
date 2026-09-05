#include <stdio.h>

int main() {

    double numero, valor_novo, valor_antigo;
    double erro_aproximacao;
    int iteracao;

    printf("\033[1;33m==== CALCULADORA DE RAIZ QUADRADA ====\033[m\n");

    printf("Insira o valor a ser calculado: ");
    scanf("%lf", &numero);
    printf("\n");

    if (numero < 0) {

        printf("\nNúmero inválido, apenas positivos!\n");

    } else {

        valor_antigo = numero;
        erro_aproximacao = 1;
        iteracao = 0;

        while (erro_aproximacao > 0.0001) {
            valor_novo = 0.5 * (valor_antigo + numero/valor_antigo);

            erro_aproximacao = (valor_antigo - valor_novo);
            erro_aproximacao = (erro_aproximacao < 0) ? (erro_aproximacao * (-1)) : (erro_aproximacao);

            valor_antigo = valor_novo;
            iteracao ++;

            printf("ITERAÇÃO == %d° ||| VALOR NOVO == %lf ||| \t ERRO DE APROXIMAÇÃO == %lf\n",
                                           iteracao,valor_novo, erro_aproximacao);
        }
    }
    printf("\nValor da raiz aproximada == %lf\n", valor_novo);
    return 0;
}
