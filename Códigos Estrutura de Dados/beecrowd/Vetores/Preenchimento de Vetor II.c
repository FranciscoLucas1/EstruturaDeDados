#include <stdio.h>

#define TAM 1000

int main(int argc, char const *argv[])
{
    int T;
    int aux = T;
    int N[TAM];

    scanf("%i", &T);
    aux = T - T; 

    for (int i = 0; i < TAM; i++)
    {
        N[i] = aux; 
        aux++; 
        if (aux > T - 1)
        {
            aux = 0;
        }

        printf("N[%i] = %i\n", i, N[i]);
    }

    return 0;
}
