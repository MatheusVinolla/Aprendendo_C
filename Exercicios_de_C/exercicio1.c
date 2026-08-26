//Exercicio 1 - Programa para ver se 3 lados quaisquer podem formar um triângulo
// Equilátero, isósceles, escaleno

#include <stdio.h>

int main(){

	int aresta1, aresta2, aresta3; //medidas dos lados
	int verificar1, verificar2, verificar3; //comparação dos lados
	int negativo;	//algum valor negativo
	printf("\n========================================\n");
	printf("\tCalculadora de Triângulo");
	printf("\n========================================\n");
	printf("Informe o 1° lado do triângulo: ");
	scanf("%d", &aresta1);
	printf("Informe o 2° lado do triângulo: ");
	scanf("%d", &aresta2);
	printf("Informe o 3° lado do triângulo: ");
	scanf("%d", &aresta3);
	printf("___________________________________\n\n");
	printf("Os lados informados foram: %d - %d - %d\n", aresta1, aresta2, aresta3);
	/*
	a < b + c
	b < a + c
	c < a + b
	*/

	verificar1 = aresta1 < aresta2 + aresta3;
	verificar2 = aresta2 < aresta1 + aresta3;
	verificar3 = aresta3 < aresta1 + aresta2;

	negativo = (aresta1 < 0) || (aresta2 < 0) || (aresta3 < 0);

	if  ( !(negativo) && verificar1 && verificar2 && verificar3 ){
	//É possível formar um triângulo

		if ((aresta1 == aresta2) && (aresta1 == aresta3)) {
		//EQUILÁTERO
			printf("Os lados formam um triângulo equilátero\n");
		} else if ((aresta1 != aresta2) && (aresta1 != aresta3)) {
		//ESCALENO
			printf("Os lados formam um triângulo escaleno\n");
		} else {
		//ISÓSCELES
			printf("Os lados formam um triângulo isósceles\n");

		}
	} else {
		//Não é possível formar um triângulo
		printf("Valores não formam um triângulo\n");
	}
	return 0;
}
