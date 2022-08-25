#include <stdio.h>

int main()
{

    int conta = 0;
    int n;
    for (int i = 0; i < 5; i++)
    {
        scanf("%i", &n);

        if (n % 2 == 0)
        {
            conta++;
        }
    }

    printf("%i valores pares\n", conta);
    return 0;
}