#include <stdio.h>

int main(int argc, char const *argv[])
{

    int N, X, in = 0, out = 0;

    scanf("%i", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%i", &X);

        if (X >= 10 && X <= 20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    printf("%i in\n", in);
    printf("%i out\n", out);

    return 0;
}
