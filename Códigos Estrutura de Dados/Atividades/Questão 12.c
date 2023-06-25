#include <stdio.h>

int main()
{
    float joao, maria;
    int anos;
    joao = 1.5;
    maria = 1.1;
    anos = 0;
    while (maria < joao)
    {
        maria += 3;
        joao += 2;
        anos++;
    }
    printf("%i\n", anos);
    printf("%f\n", maria);
    printf("%f\n", joao);
    return 0;
}
