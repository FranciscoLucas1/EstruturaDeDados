#include <stdio.h>

#define TAM 20

int main(int argc, char const *argv[])
{
    int vetor[TAM], vetorAux[TAM], j = TAM-1, x = 0;

    for (int i = 0; i < TAM; i++)
    {
        scanf("%i", &vetor[i]);
    }
    
    while (j >= 0)
    {

        vetorAux[j] = vetor[x];
        x++;
        j--;
    }
    
    for (int k = 0; k < TAM; k++)
    {
        printf("N[%i] = %i\n", k, vetorAux[k]);
    }

    return 0;
}

