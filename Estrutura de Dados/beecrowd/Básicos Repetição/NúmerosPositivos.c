#include <stdio.h>

int main()
{

    int conta = 0;
    float n;
    float media;
    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &n);

        if (n > 0)
        {
            conta++;
            media = (media + n);
        }
    }

    printf("%i valores positivos\n", conta);
    printf("%.1f", media/conta);
    return 0;
}