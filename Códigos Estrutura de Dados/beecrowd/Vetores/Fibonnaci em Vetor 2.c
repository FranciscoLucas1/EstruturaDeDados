#include <stdio.h>

int fb(int n, int t);

int main(int argc, char const *argv[])
{
    unsigned int T;

    scanf("%i", &T);

    unsigned int Vetor[T];

    for (int N = 0; N < T; N++)
    {
        scanf("%i", &Vetor[N]);
    }
    for (int i = 0; i < T; i++)
    {
        printf("Fib(%i) = %i\n", Vetor[i], fb(Vetor[i], T+1));
    }

    return 0;
}

int fb(int n, int t)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        int f0 = 0;
        int f1 = 1;
        int f2;

        for (int i = 0; i < t; i++)
        {
            f2 = f0 + f1;
            f0 = f1;
            f1 = f2;
        }

        return f0;
    }
}

