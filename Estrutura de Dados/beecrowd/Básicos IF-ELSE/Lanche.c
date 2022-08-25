#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int item, quant;
    double pagar;

    scanf("%i", &item);
    scanf("%i", &quant);

    switch (item)
    {
    case 1:
        pagar = quant*4.00;
        printf("Total: R$ %.2lf\n", pagar);
        break;
    case 2:
        pagar = quant*4.50;
        printf("Total: R$ %.2lf\n", pagar);
        break;
    case 3:
        pagar = quant*5.00;
        printf("Total: R$ %.2lf\n", pagar);
        break;
    case 4:
        pagar = quant*2.00;
        printf("Total: R$ %.2lf\n", pagar);
        break;
    case 5:
        pagar = quant*1.00;
        printf("Total: R$ %.2lf\n", pagar);
        break;
    default:
        break;
    }

    return 0;
}
