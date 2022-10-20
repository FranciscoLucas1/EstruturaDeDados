#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int C, S = 100, max = S;

    scanf("%i", &C);

    int caixas[C];

    for (int i = 0; i < C; i++)
    {
        scanf("%i", &caixas[i]);
    }

    for (int i = 0; i < C; i++)
    {
        S = S + caixas[i];
        if (S > max)
            max = S;
    }

    printf("%i", max);

    return 0;
}
