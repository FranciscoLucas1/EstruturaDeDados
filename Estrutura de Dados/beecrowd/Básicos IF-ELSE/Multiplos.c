#include <stdio.h>

int main(int argc, char const *argv[])
{

    int A, B, maior, menor;

    scanf("%i", &A);
    scanf("%i", &B);
   
    if (A > B){
        maior = A;
        menor = B;
    }
    else{
        maior = B;
        menor = A;
    }

    if(maior % menor == 0){
        printf("Sao Multiplos\n");
    }
    else{
        printf("Nao sao Multiplos\n");
    }
   
   
   
    return 0;
}
