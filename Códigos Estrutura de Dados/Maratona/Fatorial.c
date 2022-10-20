#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int i, N, X, fat = 1;

    scanf("%i", &N);

    for (i = 1; fat < N; i++)
    {
        fat = fat * i;
       
    }
    printf("%i", fat);
    return 0;
}
