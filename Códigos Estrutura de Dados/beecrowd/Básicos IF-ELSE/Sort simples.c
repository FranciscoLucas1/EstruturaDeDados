#include <stdio.h>
#include <limits.h>
int main(int argc, char const *argv[])
{

    int maior, menor, meio;
    int n1, n2, n3;
    scanf("%i", &n1);
    scanf("%i", &n2);
    scanf("%i", &n3);

    if (n1 > n2 && n1 > n3)
    {
        maior = n1;
    }
    else if (n1 < n2 && n1 < n3)
    {
        menor = n1;
    }
    else if ((n1 > n2 && n1 < n3) || (n1 < n2 && n1 > n3))
    {
        meio = n1;
    }

    if (n2 > n1 && n2 > n3)
    {
        maior = n2;
    }
    else if (n2 < n1 && n2 < n3)
    {
        menor = n2;
    }
    else if ((n2 > n1 && n2 < n3) || (n2 < n1 && n2 > n3))
    {
        meio = n2;
    }

    if (n3 > n1 && n3 > n2)
    {
        maior = n3;
    }
    else if (n3 < n1 && n3 < n2)
    {
        menor = n3;
    }
    else if ((n3 > n1 && n3 < n2) || (n3 > n2 && n3 < n1))
    {
        meio = n3;
    }


    printf("%i\n", menor);
    printf("%i\n", meio);
    printf("%i\n\n", maior);

    printf("%i\n", n1);
    printf("%i\n", n2);
    printf("%i\n", n3);

    return 0;
}
