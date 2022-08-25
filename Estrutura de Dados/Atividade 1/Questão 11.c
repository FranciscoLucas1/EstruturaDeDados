#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    int num = 0; 
    printf("Digite um número para verificar se ele está na casa das unidades, dezenas, centenas ou milhares\n");
    scanf("%i", &num);


    if (num <= 9 ){
        printf("O número está na casa das unidades");

    }
    else if(num > 9 && num < 99){
        printf("O número está na casa das dezenas");

    }
    else if(num > 99 && num < 999){
        printf("O número está na casa das centenas");
    

    }
    else{
        printf("O número está na casa dos milhares");
    }


    return 0;
}
