#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAM 3
#define MAXIMO 20


//Nota: usar -lm quando compilar
int main()
{
    srand(time(NULL));
    int v[TAM], soma = 0, produto = 1;

    //Preencher o vetor
    for (unsigned char i = 0; i < TAM; i++) {
        v[i] = rand()%MAXIMO;
        soma += v[i]; //Adicionar o valor à soma total
        produto *= v[i]; //Multiplicar os valores gerados
        printf("%d\n", v[i]);
    }

    printf("Média aritmética: %.2f\n", (float)soma/TAM);
    printf("Média geométrica: %.2f\n", pow(produto, (float)1/TAM));

    return 0;
}