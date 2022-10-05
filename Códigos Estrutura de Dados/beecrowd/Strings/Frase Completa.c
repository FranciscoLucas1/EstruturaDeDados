#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TAM 1000
int main(int argc, char const *argv[])
{
    int N, contadorA = 0, posi, contaR = 0;
    char frase[TAM];

    scanf("%i", &N);

    for (int i = 0; i < N; i++)
    {
        contadorA = 0;
        fflush(stdin);
        scanf("%[^\n]", frase);

        for (int j = 0; j < strlen(frase) - 1; j++)
        {
            char letra = frase[j];
            if (isalpha(letra))
            {
                contadorA++;
            }
            for (int k = j+1; k < frase[k] != '\0'; k++)
            {
                if (letra == frase[k])
                {
                    contaR++;
                }
            }
        }
        
        if (contadorA - contaR == 26)
        {
            printf("frase completa\n");
        }
        else if (contadorA - contaR >= 13 && contadorA - contaR < 26)
        {
            printf("frase quase completa\n");
        }
        else
        {
            printf("frase mal elaborada\n");
        }
    }

    return 0;
}
