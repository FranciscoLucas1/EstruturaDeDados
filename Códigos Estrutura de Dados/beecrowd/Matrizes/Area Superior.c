#include <stdio.h>

#define TAM 12

int main(int argc, char const *argv[])

{
    double M[TAM][TAM];
    double media = 0, soma = 0;
    char O;

    scanf("%s", &O);

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {

            scanf("%lf", &M[i][j]);
        }
    }
    for (int i = 0; i <= TAM - 2; i++) 
    {

        for (int j = i+1; j <= TAM - 2 - i; j++)
        {

            soma += M[i][j];
        }
    }

    if (O == 'S')
    {
        printf("%.1lf\n", soma);
    }
    else if (O == 'M')
    {
        printf("%.1lf\n", soma / 30);
    }
    return 0;
}
