#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 5
#define COL 5
#define MAXIMO 100

#define GREEN "\x1b[32m"
#define RESET "\x1b[0m"

int main()
{
    srand(time(NULL));

    int m[LIN][COL], x, c = 0;

    puts("Insira o valor de X:");
    scanf("%d", &x);
    
    puts("\n");

    //Preencher a matriz
    for (unsigned char i = 0; i < LIN; i++) {
        for (unsigned char k = 0; k < COL; k++) {
            m[i][k] = rand()%MAXIMO;
        }
    }

    //Processar os dados
    for (unsigned char j = 0; j < LIN; j++) {
        for (unsigned char n = 0; n < COL; n++) {
            if (m[j][n] == x) {
                printf("%s%d%s ", GREEN, m[j][n], RESET);
                c++;
            } else {
                printf("%d ", m[j][n]);
            }
        }
        printf("\n");
    }

    printf("O valor %d aparece %d vezes na matriz\n", x, c);

    return 0;
}