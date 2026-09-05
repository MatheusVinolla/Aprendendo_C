#include <stdio.h>

int main() {
    int escolhido, soma_pares;
    escolhido = soma_pares = 0;

    printf("\n\033[1;33m=== CALCULADORA DA SOMA DE PARES ===\033[m\n");

    printf("Insira um número inteiro para calcular: ");
    scanf("%d", &escolhido);

    if (escolhido < 0) {

        printf("\n\033[1;31mNúmero Inválido, apenas números positivos!\033[m\n");

    } else {

        printf("\033[1;33m\n"); // COLORIR DE MARROM

        for (int contador = 0; contador <= escolhido; contador ++) {
            if ((contador & 1) == 0){  // NÚMERO PAR
                printf("%03d = NÚMERO PAR\n", contador);
                soma_pares += contador;
            }
        }

        printf("\n\033[m"); // DESCOLORIR DE MARROM
        printf("A soma de todos os números pares é: %d\n", soma_pares);

        return 0;
    }
}

