#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100 //Tamanho do vetor

#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"

int main() 
{
    srand(time(NULL)); //Mudar seed

    int v[TAM], max, min;
    puts("Insira o menor valor do intervalo:");
    scanf("%d", &min);

    puts("Insira o maior valor do intervalo:");
    scanf("%d", &max);

    //Preencher o vetor
    for (unsigned char i = 0; i < TAM; i++) { //O ternário evita que o valor gerado seja sempre negativo
        v[i] = rand()%max + (min < 0 ? -rand()%min : min);
        printf("%d\n", v[i]);
    }

    //Processar os dados

    //Ordenar por seleção
    for (unsigned char k = 0; k < TAM; k++) {
        for (unsigned char n = k; n < TAM; n++) {
            if (v[k] > v[n]) {
                v[k] = v[k] ^ v[n];
                v[n] = v[k] ^ v[n];
                v[k] = v[k] ^ v[n];
            }
        }
    }

    printf("\n");

    puts("Vetor ordenado por seleção:");
    for (unsigned char j = 0; j < TAM; j++) {
        printf("%d\n", v[j]);
    }

    printf("\n");
    puts("==========");

    //Gerar outros valores para testar com bubble sort
    for (unsigned char i = 0; i < TAM; i++) { //O ternário evita que o valor gerado seja sempre negativo
        v[i] = rand()%max + (min < 0 ? -rand()%min : min);
        printf("%s%d%s\n", GREEN, v[i], RESET);
    }

    //Ordenar por bubble sort
    //Poderia usar variáveis de controle para verificar se já está ordenado, mas iria custar 1B a mais
    for (unsigned char k = 0; k < TAM; k++) {
        for (unsigned char n = 0; n < TAM - 1; n++) {
            if (v[n] > v[n+1]) {
                v[n] = v[n] ^ v[n+1];
                v[n+1] = v[n] ^ v[n+1];
                v[n] = v[n] ^ v[n+1];
            }
        }
    }

    printf("\n");

    puts("Vetor ordenado por bolha:");
    for (unsigned char j = 0; j < TAM; j++) {
        printf("%s%d%s\n", GREEN, v[j], RESET);
    }

    printf("\n");

    return 0;
}