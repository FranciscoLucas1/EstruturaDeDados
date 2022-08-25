#include <stdlib.h>
#include <stdio.h>

#define TAM 4

void somarEimprimir(int tamanho, int *v1, int *v2, int *v3);

int main(int argc, char const *argv[])
{

    int *vetor1 = (int *)malloc(TAM * sizeof(int));
    int *vetor2 = (int *)malloc(TAM * sizeof(int));
    int *vetor3 = (int *)malloc(TAM * sizeof(int));

    for (int i = 0; i < TAM; i++)
    {
        printf("Digite o valor da posição[%i] do vetor n°1\n", i);
        scanf("%i", &vetor1[i]);

        printf("Digite o valor da posição[%i] do vetor n°2\n", i);
        scanf("%i", &vetor2[i]);
    }

    somarEimprimir(TAM, vetor1, vetor2, vetor3);

    free(vetor1);
    free(vetor2);
    free(vetor3);

    return 0;
}

void somarEimprimir(int tamanho, int *v1, int *v2, int *v3)
{

    for (int i = 0; i < tamanho; i++)
    {
        v3[i] = v1[i] + v2[i];
    }

    for (int j = 0; j < tamanho; j++)
    {
        printf("Vetor 3[%i]: %i\n", j, v3[j]);
    }
}
