#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int x1, x2, y1, y2, dist;


    printf("Coordenado do Ponto 1 (X)");
    scanf("%i", &x1);
    
    printf("Coordenado do Ponto 1 (Y)");
    scanf("%i", &y1);
    
    printf("Coordenado do Ponto 2 (X)");
    scanf("%i", &x2);

    printf("Coordenado do Ponto 2 (Y)");
    scanf("%i", &y2);
    
    
    dist = sqrt(((x2 - x1)^2) + ((y2 - y1)^2));
    printf("A distância euclidiana entre os pontos é %i", dist);
    
    return 0;
}
