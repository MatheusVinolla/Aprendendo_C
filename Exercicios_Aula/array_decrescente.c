#include <stdio.h>

int main(){

    int numeros_organizar[5] = {1, 5, 3, 7, 3};
    int elemento, elemento_temp;
    int maior_numeros, indice_maior, indice_inicial;

    indice_inicial = 0;
    do {
        maior_numeros = numeros_organizar[indice_inicial];
        indice_maior = indice_inicial;

        for (int indice = indice_inicial; indice <= 4; indice++){
            elemento = numeros_organizar[indice];
            if (elemento > maior_numeros) {
                maior_numeros = elemento;
                indice_maior = indice;
            }
        }
            elemento_temp = numeros_organizar[indice_inicial];
            numeros_organizar[indice_inicial] = maior_numeros;
            numeros_organizar[indice_maior] = elemento_temp;

            indice_inicial++;
    } while (indice_inicial <= 4);

    for (int indice = 0; indice <= 4; indice++){
        printf("%d, ", numeros_organizar[indice]);
    }
    printf("\n"); 
    return 0;
}
