#include <stdio.h>
#include <string.h>

#define TAM 84 //Tamanho máximo da string

//Códigos de cores para facilitar a leitura
#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"

int main() 
{
    char v[TAM];
    char c;
    unsigned char k = 0;

    puts("Insira uma string:");
    fgets(v, TAM, stdin); //Nesse caso vou deixar o '\n' incluso, já que só vai facilitar a leitura dps

    puts("Insira um caractére:");
    scanf("%c", &c);

    //Verificar se o caractére está na string
    for (unsigned int i = 0; i < TAM; i++) {
        if (v[i] == '\0') break; //Sair do loop quando encontrar '\0'
        if (v[i] == c) {
            printf("%s%c%s", GREEN, v[i], RESET); //Destacar o caractére escolhido
            k++;
        } else {
            printf("%c", v[i]);
        }
    }

    printf("A string fornecida %s o caractére escolhido\n", k != 0 ? "possui" : "não possui");

    return 0;
}