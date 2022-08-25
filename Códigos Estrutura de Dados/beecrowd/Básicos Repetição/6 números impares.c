#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x; 
    scanf("%i", &x);

    for (int i = x; i <= x+11; i++)
    {
        if (i % 2 != 0)
        {
            printf("%i\n", i);
        }
    }

    return 0;
}
