#include <stdio.h>

int main() {
    int sequencia;
    printf("\n=== CALCULADORA DA SEQUÊNCIA DE FIBONNACI ===\n");
    printf("\nInsira a quantidade de números da sequência de FIBONNACI: ");
    scanf("%d", &sequencia);
    printf("\n");

    if (sequencia < 0) {
        printf("\nO número não pode ser negativo!\n");
    } else if (sequencia == 1) {
        printf("\nVALORES == 0\n");
    } else if (sequencia == 2) {
        printf("\nVALORES == 0, 1\n");
    } else {
        int primeiro_valor, segundo_valor, proximo_valor;
        primeiro_valor = 0;
        segundo_valor  = 1;
        proximo_valor = 0;//APENAS INICIALIZAÇÃO

        printf("VALORES == 0, 1");

        for (int contador = (sequencia - 2);
            contador >= 1; contador --) {

            proximo_valor = primeiro_valor + segundo_valor;
            printf(", %d", proximo_valor);

            primeiro_valor = segundo_valor;
            segundo_valor = proximo_valor;
        }
    }

    printf("\n");

    return 0;
}
