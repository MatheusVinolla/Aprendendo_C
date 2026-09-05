#include <stdio.h>

int main() {

    int escolhido;

    printf("\n=== CALCULADORA DE FATORIAL ===\n");

    printf("Escolha um número para calcular: ");
    scanf("%d", &escolhido);
    printf("\n");

    if (escolhido < 0) {
        printf("O fatorial não pode ser negativo!\n");
        return 0;
    } else if (escolhido == 0) {
        printf("O FATORIAL DE 0 É 1\n");
        return 0;
    }

    int calculo_fatorial = 1;
    char operador = '*';
    for (int contador = 1; contador <= escolhido; contador++) {
        calculo_fatorial *= contador;
        operador = (contador == escolhido) ? '=': operador;
        printf("%d %c ", contador, operador);

    }
    printf("%d", calculo_fatorial);
    printf("\nO FATORIAL DE %d É %d\n", escolhido, calculo_fatorial);

    return 0;
}
