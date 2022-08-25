#include <stdio.h>
#define TAM 6
#define TAM2 5

int main(int argc, char const *argv[])
{

    int valor;
    int vetPar[TAM2];
    int vetImpar[TAM2];
    int cPar = 0, cImpar = 0;

    for (int i = 0; i < TAM; i++)
    {
        scanf("%i", &valor);

        if (valor % 2 == 0)
        {
            vetPar[cPar] = valor;
            cPar++;
            if (cPar == 5)
            {
                for (int j = 0; i < TAM2; j++)
                {
                    printf("par[%i] = %i", j, vetPar[j]);
                    vetPar[j] = 0;
                }
                cPar = 0;
            }
        }
        else
        {
            vetImpar[i] = valor;
            cImpar++;
            if (cImpar == 5)
            {
                for (int j = 0; i < TAM2; j++)
                {
                    printf("impar[%i] = %i", j, vetImpar[j]);
                    vetImpar[j] = 0;
                }
                cImpar = 0;
            }
        }
    }
    for (int i = 0; i < TAM2; i++)
    {
        if (vetImpar[i] == 0)
            break;
        printf("impar[%i] = %i\n", i, vetImpar[i]);
    }
    for (int i = 0; i < TAM2; i++)
    {
        if (vetPar[i] == 0)
            break;
        printf("par[%i] = %i\n", i, vetPar[i]);
    }

    return 0;
}
