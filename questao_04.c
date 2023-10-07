#include <stdio.h>
#include <string.h>

#define TAM 84

int main()
{
    char s1[TAM];// = "Teste de string";
    char s2[TAM];// = "Isso é um teste";
    unsigned char i = 0; //Nesse caso i não pode chegar a 255, portanto usarei unsigned char
    unsigned char c = 0; //Contador

    puts("Insira uma string:");
    fgets(s1, TAM, stdin);

    puts("Insira outra string:");
    fgets(s2, TAM, stdin);

    while(!(s1[i] == '\n')) { //Não incluir a quebra de linha (causada por usar ENTER após digitar a string)
        if (s1[i] == s2[i]) {
            c++;
        }
        i++;
    }

    printf("As strings %s\n", c == i ? "são iguais" : "não são iguais");
    
    puts("\n");
    puts("Com o uso de strcmp():"); //Nesse caso precisa inverter no ternário
    printf("As strings %s\n", strcmp(s1, s2) ? "não são iguais" : "são iguais");

    return 0;
}