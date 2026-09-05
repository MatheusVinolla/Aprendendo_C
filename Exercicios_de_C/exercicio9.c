//      EXERCICIO 9
// Monitoramento de Temperatura Corporal

#include <stdio.h>
int main(){

    int quantidadeMedicoes, quantidadeFebre, quantidadeValida;
    float temperatura, maiorTemperatura, menorTemperatura, mediaTemperatura;

    mediaTemperatura = 0; //valor de inicialização
    maiorTemperatura = menorTemperatura = -1; //valor de inicialização
    quantidadeFebre = 0; //valor padrão incial  

    printf("\033[1;33m\n ==== CALCULADORA DE TEMPERATURAS ====\033[m\n");

    printf("Insira a quantidade de medições a fazer: ");
    scanf("%d", &quantidadeMedicoes);
    printf("\n");
    
   quantidadeValida = quantidadeMedicoes;
    for(int contador = 1; contador <= quantidadeMedicoes; contador++){
        printf("Insira a temperatura do %d° paciente: ", contador);
        scanf("%f", &temperatura);
        
        if ((temperatura < 30.0) || (temperatura > 45.0)){
            printf("Temperatura inválida! Ignorando.\n");
            quantidadeValida--;
            continue;
        }
        if ((maiorTemperatura == -1) || (menorTemperatura == -1)){
            //Inicialização com a primeira temperatura válida
            maiorTemperatura = menorTemperatura = temperatura; 
        }
        mediaTemperatura += temperatura;
        quantidadeFebre =  (temperatura >= 37.5) ? ++quantidadeFebre:quantidadeFebre;
        maiorTemperatura = (temperatura > maiorTemperatura) ? temperatura:maiorTemperatura;
        menorTemperatura = (temperatura < menorTemperatura) ? temperatura:menorTemperatura;
    }
     
    printf("\n");
    if ((maiorTemperatura == -1) || (menorTemperatura == -1)){
        printf("Nenhuma medição válida\n");
    } else {
        mediaTemperatura = mediaTemperatura / quantidadeValida;
        printf("A média de temperatura foi de:  %.01f°C\n", mediaTemperatura);
        printf("A maior temperatura foi de:     %.01f°C\n", maiorTemperatura);
        printf("A menor temperatura foi de:     %.01f°C\n", menorTemperatura);
        printf("\nA quantidade de pacientes com febre foi de: %01d\n", quantidadeFebre);

        if (mediaTemperatura >= 37.5) {
            printf("Alerta de febre generalizada\n");
        } else if ((36 <= mediaTemperatura) && (mediaTemperatura <= 37.4)){
            printf("Temperaturas normais\n");
        } else {
            printf("Possível hipotermia\n");
        }
    }

    return 0;
}
