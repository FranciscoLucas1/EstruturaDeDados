#include <stdio.h>

int main()
{

    int contaPares = 0, contaImp = 0, contaNeg = 0, contaPos = 0;
    int n;
    for (int i = 0; i < 5; i++)
    {
        scanf("%i", &n);

        if (n % 2 == 0)
        {
            contaPares++;
        }
        if (n % 2 != 0)
        {
            contaImp++;
        }
        if (n > 0)
        {
            contaPos++;
        }
        if (n < 0)
        {
            contaNeg++;
        }
    }
    

    printf("%i valor(es) par(es)\n", contaPares);
    printf("%i valor(es) impar(es)\n", contaImp);
    printf("%i valor(es) positivo(s)\n", contaPos);
    printf("%i valor(es) negativo(s)\n", contaNeg);

    return 0;
}