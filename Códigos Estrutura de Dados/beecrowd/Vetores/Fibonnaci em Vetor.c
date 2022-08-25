#include <stdio.h>

int fb(int n);

int main(int argc, char const *argv[])
{
    int T;

    scanf("%i", &T);

    int Vetor[T];

    for (int N = 0; N < T; N++)
    {
        scanf("%i", &Vetor[N]);
    }
    for (int i = 0; i < T; i++)
    {
        printf("Fib(%i) = %i\n", Vetor[i], fb(Vetor[i]));
    }

    return 0;
}

int fb(int n)
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
        return fb(n - 1) + fb(n - 2);
    }
}
