
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int X, Y, soma = 0;

    scanf("%i", &X);
    scanf("%i", &Y);

    for (int i = Y+1; i < X; i++)
    {
        if(i % 2 != 0){
            soma = soma + i;
        }
    }
    printf("%i\n", soma);

    return 0;
}


