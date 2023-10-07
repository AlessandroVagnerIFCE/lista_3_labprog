#include <stdio.h>
#include <string.h>

#define TAM 84

int main()
{
    char s1[TAM];// = "Teste de string";
    char s2[TAM];// = "Isso é um teste";
    unsigned char i = 0; //Nesse caso i não pode chegar a 255, portanto usarei unsigned char

    puts("Insira uma string:");
    fgets(s1, TAM, stdin);

    puts("Insira outra string:");
    fgets(s2, TAM, stdin);

    while(!(s1[i] == '\n')) { //Não incluir a quebra de linha (causada por usar ENTER após digitar a string)
        printf("%c", s1[i]);
        i++;
    }
    printf("\n");
    printf("Quantidade de caractéres: %hhu\n", i);

    i = 0; //Reset
    while(!(s2[i] == '\n')) {
        printf("%c", s2[i]);
        i++;
    }
    printf("\n");
    printf("Quantidade de caractéres: %hhu\n", i);

    return 0;
}