#include <stdio.h>
#include <string.h>

#define TAM 84

int main()
{
    char s1[TAM];// = "Teste de string";
    char s2[TAM];// = "Isso é um teste";
    char cats[TAM*2]; //Dobro do tamanho;
    unsigned char i = 0; //Nesse caso i não pode chegar a 255, portanto usarei unsigned char
    unsigned char k = 0;

    puts("Insira uma string:");
    fgets(s1, TAM, stdin);

    puts("Insira outra string:");
    fgets(s2, TAM, stdin);

    while(!(s1[i] == '\n')) { //Não incluir a quebra de linha (causada por usar ENTER após digitar a string)
        cats[i] = s1[i];
        i++;
    }

    s1[i] = '\0'; //Remover o \n e colocar \0

    while(!(s2[k] == '\n')) { //Concatenar
        cats[k+i] = s2[k];
        k++;
    }

    s2[k] = '\0'; //Remover a quebra de linha

    cats[k+i] = '\0'; //Fim da string (substitui o \n por \0)


    i = 0; //Reset
    while(!(cats[i] == '\0')) {
        printf("%c", cats[i]);
        i++;
    }
    printf("\n");
    printf("Quantidade de caractéres: %hhu\n", i);
    
    puts("\n"); //Essa versão inclui a quebra de linha
    puts("Com o uso de strcat():"); //caso eu não remova a quebra de linha nas strings originais
    printf("%s\n", strcat(s1, s2)); //A outra versão não inclui a quebra de linha

    return 0;
}