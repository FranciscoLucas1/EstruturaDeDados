#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{

    double A, B, C, maior, meio, menor;

    scanf("%lf", &A); // 5
    scanf("%lf", &B); // 7
    scanf("%lf", &C); // 10

    if (B > A && B > C)
    {
        maior = B;
        B = A;
        A = maior;
    }
    else if (C > A && C > B)
    {
        maior = C;
        C = A;
        A = maior;
    }

    if (A >= B + C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if (pow(A, 2) == pow(B, 2) + pow(C, 2))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (pow(A, 2) > pow(B, 2) + pow(C, 2))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (pow(A, 2) < pow(B, 2) + pow(C, 2))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (A == B && B == C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else
    {
        if ((A != B) && (A != C) && (B != C))
        {
        }
        else
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
