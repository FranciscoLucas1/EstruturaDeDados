#include <stdio.h>

int main(int argc, char const *argv[])
{
    double A, B, C, maior, menor1, menor2;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);


    if (A > B && A > C)
    {
        maior = A;
        menor1 = B;
        menor2 = C;
    }
    else if (B > C && B > A)
    {
        maior = B;
        menor1 = C;
        menor2 = A;
    }
    else {
        maior = C;
        menor1 = B;
        menor2 = A;
    }
    
    
    if(menor1 + menor2 > maior){
        printf("Perimetro = %.1lf\n", maior+menor1+menor2);

    }
    else{
        printf("Area = %.1lf\n", ((A + B)*C)/2);

    }
}
    
    
    
    
    
    
    
    
    
    
    
    /*
     else if (A < B && A < C)
    {
        menor1 = A;
    }
    else
    {
        menor2 = A;
    }
    if (B > C && B > A)
    {
        maior = B;
    }
    else if (B < A && B < C)
    {
        menor1 = B;
    }
    else
    {
        menor2 = B;
    }
    
    if (C > B && C > A)
    {
        maior = C;
    }
    else if (C < B && C < A)
    {
        menor1 = C;
    }
    else
    {
        menor2 = C;
    }
 */


