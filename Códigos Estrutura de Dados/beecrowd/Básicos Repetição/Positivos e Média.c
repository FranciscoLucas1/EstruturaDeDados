#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float numero, media = 0;
    int conta = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &numero);

        if (numero > 0)
        {
            conta++;
            media = media + numero;
        }
    }

    printf("%i valores positivos\n", conta);
    printf("%.1f\n", media / conta);

    return 0;
}
