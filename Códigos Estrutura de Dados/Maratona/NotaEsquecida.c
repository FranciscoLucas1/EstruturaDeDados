#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char const *argv[])
{
    int A, M, A2;

    scanf("%i", &A);
    scanf("%i", &M);

    A2 = M * 2 - A;

    printf("%i", A2);

    return 0;
}
