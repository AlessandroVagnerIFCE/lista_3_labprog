#include <stdio.h>
#include <string.h>

#define TAM 84

int main()
{
    char s1[TAM];
    char s2[TAM];
    unsigned char i = 0;
    unsigned char k = 0;

    puts("Insira uma string:");
    fgets(s1, TAM, stdin);

    while(!(s1[i] == '\n')) { //Não incluir a quebra de linha (causada por usar ENTER após digitar a string)
        s2[i] = 'a'; //Evitar lixo de memória
        i++;
    }

    s2[i] = '\0'; //Colocar \0 no fim da string e tirar a quebra de linha
    i--; //Evitar outro \0

    //Inverter a string
    while(!(s2[k] == '\0')) {
        s2[k] = s1[i];
        printf("%c", s2[k]);
        i--;
        k++;
    }

    printf("\n");

    return 0;
}