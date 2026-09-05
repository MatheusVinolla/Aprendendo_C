#include <stdio.h>

int main(){
    // MATRIZ IDENTIDADE 4x4 USANDO WHILE APENAS
    printf("\n\033[1;35m === MATRIZ IDENTIDADE 4 x 4 ===\n\n");

    int linhas, colunas, elemento;

    linhas = 1;
    while (linhas <= 4) {
        colunas = 1;
        while (colunas <= 4) {
            elemento = (linhas == colunas) ? 1 : 0;
            printf("  %d", elemento);
            colunas++;
        }
        printf("\n");
        linhas++;
    }

    printf("\033[m\n");

    return 0;
}
