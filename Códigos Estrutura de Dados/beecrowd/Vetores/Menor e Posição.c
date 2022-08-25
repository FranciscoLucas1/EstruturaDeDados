#include <stdio.h>

int main(int argc, char const *argv[])
{
    int N, menor, posi = 0;

    scanf("%i", &N);
    int X[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%i", &X[i]); 
    }

    menor = X[0];
    for (int i = 0; i < N; i++)
    {
        if (X[i] < menor)
        {
            menor = X[i];
            posi = i;
        }
    }

    printf("Menor valor: %i\n", menor);
    printf("Posicao: %i\n", posi);

    return 0;
}
