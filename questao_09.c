#include <stdio.h>

#define TAM 3

#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"

int main()
{
    int m[TAM][TAM];

    //Preencher a matriz
    for (unsigned char i = 0; i < TAM; i++) {
        for (unsigned char k = 0; k < TAM; k++) {
            printf("Insira o valor [%d][%d]:\n", i+1, k+1);
            scanf("%d", &(m[i][k]));
        }
    }

    printf("\n");

    for (unsigned char j = 0; j < TAM; j++) {
        for (unsigned char n = 0; n < TAM; n++) {
            printf("%s%d%s ", j == n ? GREEN : RESET, m[j][n], RESET);
        }
        printf("\n");
    }

    return 0;
}