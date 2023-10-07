#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15 //Tamanho do vetor
#define MAXIMO 100 //A função rand() irá gerar números entre 0 e MAXIMO - 1

int main() 
{
    srand(time(NULL)); //Mudar seed

    float v[TAM], maior, menor;

    //Preencher o vetor
    for (unsigned char i = 0; i < TAM; i++) {
        v[i] = ((float)rand()/RAND_MAX) * MAXIMO;
        printf("%.2f\n", v[i]);
    }

    maior = v[0];
    menor = v[0];

    //Processar os dados
    for (unsigned char k = 1; k < TAM; k++) {
        if (v[k] > maior) {
            maior = v[k];
        } else if (v[k] < menor) {
            menor = v[k];
        }
    }

    //Saída
    printf("\n");
    printf("%.2f + %.2f = %.2f\n", maior, menor, maior+menor);

    return 0;
}