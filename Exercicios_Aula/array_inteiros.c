#include <stdio.h>

int main(){

    int numeros[5] = {5, 2, 12, 15, 8};
    int elemento;

    float media_numeros = 0;

    int soma_numeros = 0;
    int maior_numeros = numeros[0];
    int menor_numeros = numeros[0];

    for (int indice = 0; indice <= 4; indice++){
        elemento = numeros[indice];
        soma_numeros += elemento;
        media_numeros += elemento / 5.0;
        maior_numeros = (elemento > maior_numeros) ? elemento:maior_numeros;
        menor_numeros = (elemento < menor_numeros) ? elemento:menor_numeros;
    }
    printf("\n");
    printf("Soma  = %d\n", soma_numeros);
    printf("Média = %.1f\n", media_numeros);
    printf("Maior = %d\n", maior_numeros);
    printf("Menor = %d\n", menor_numeros);
    return 0;
}
