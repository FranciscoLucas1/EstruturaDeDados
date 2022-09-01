#include <stdio.h>

#define TAM 12

int main(int argc, char const *argv[])
{
    char O;
    double M[TAM][TAM], soma = 0;
    
    int colum = 1; 
    scanf("%s", &O);

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }

    for (int i = 1; i < TAM; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            soma+= M[i][j];
        }
        colum++;
    }

    if(O == 'S'){
        printf("%.1lf\n", soma);
    }
    else if(O == 'M'){
        printf("%.1lf\n", soma/66);
    }



    return 0;
}
