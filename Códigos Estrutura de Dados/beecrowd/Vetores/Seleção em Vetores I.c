#include <stdio.h>

#define TAM 100

int main(int argc, char const *argv[])
{
    double vetor[TAM];

    for (int i = 0; i < TAM; i++)
    {

        scanf("%lf", &vetor[i]);
    }
    for (int j = 0; j < TAM; j++)
    {

        if (vetor[j] <= 10)
        {
            printf("A[%i] = %.1lf\n", j, vetor[j]);
        }
    }

    return 0;
}
