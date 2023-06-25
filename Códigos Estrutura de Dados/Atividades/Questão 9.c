#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int numero[9];

    for (int i = 0; i < 10; i++)
    {

        printf(" Digite seu %i valor: ", i + 1);
        scanf("%i", &numero[i]);      

    }
    
    for (int j = 0; j < 10; j++)
    {
        if (numero[j] % 3 == 0)
        {
            printf("%i\n", numero[j]);
        }
    }
    

    return 0;
}