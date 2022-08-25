#include <stdio.h>
#define TAM 100

int main(int argc, char const *argv[])
{
    
    double X;
    scanf("%lf", &X);
    double vet[TAM];

     for (int i = 0; i < TAM; i++)
    {
        vet[i] = X;
        printf("N[%i] = %.4lf\n", i, vet[i]);
        X = X/2;
        

    }

    return 0;
}
