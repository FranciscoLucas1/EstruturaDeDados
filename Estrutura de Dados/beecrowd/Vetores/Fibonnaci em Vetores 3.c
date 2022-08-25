#include <stdio.h>

#define TAM 61
int main(int argc, char const *argv[])
{
    int T, N, f1 = 0, f2 = 1;

    scanf("%i", &T);

    int vetor[TAM];
    int posi[T];
    vetor[0] = f1;
    vetor[1] = f2;

    for (int i = 0; i < TAM; i++)
    {
        int f;
        f = f1 + f2;
        f1 = f2;
        f2 = f;
        
        vetor[i] = f;
    }
    for (int i = 0; i < T; i++)
    {
        scanf("%i", &posi[i]);
        
    }
    for (int i = 0; i < T; i++)
    {
        printf("Fib(%i) = %i\n", i, vetor[i]);
    }
    
    

    return 0;
}
