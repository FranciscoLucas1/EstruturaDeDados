#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{

    double A, B, C, r1, r2, delta;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    delta = pow(B, 2) - (4 * A * C);

    if (delta < 0 || A == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {

        r1 = (-1 * B + sqrt(delta)) / (2 * A);
        r2 = (-1 * B - sqrt(delta)) / (2 * A);

        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }

    return 0;
}

