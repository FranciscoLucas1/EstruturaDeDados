#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int idade = 0;
    int cont = 0, media = 0;
  
    do
    {
        printf("Digite a idade da %i° pessoa: ", cont + 1);
        scanf("%i", &idade);

        media = media + idade;
        cont++;
    } while (idade != 0);
    cont--;
    printf("A média das idades é %i", media / cont);

    return 0;
}
