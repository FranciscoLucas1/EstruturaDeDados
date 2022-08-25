#include <stdio.h>

// Usando malloc para alocar memória para o vetor

/*
#define TAM 10

int main(int argc, char const *argv[])
{
    int *vetor = (int *)malloc(TAM * sizeof(int));
    int n = 0;
    int contador = 0;

    scanf("%i", &n);
    vetor[0] = n;

    do
    {
        printf("N[%i] = %i\n", contador, vetor[contador]);
        contador++;
        vetor[contador] = vetor[contador-1] * 2;


    }while (contador < TAM);

    free(vetor);

    return 0;
}
*/

// Sem usar malloc

#include <stdio.h>

#define TAM 10

int main(int argc, char const *argv[])
{
    int vetor[TAM];
    int n = 0;
    int contador = 0;

    scanf("%i", &n);
    vetor[0] = n;

    do
    {
        printf("N[%i] = %i\n", contador, vetor[contador]);
        contador++;
        vetor[contador] = vetor[contador-1] * 2;

    }while (contador < TAM);


    return 0;
}
