#include <stdio.h>

#define tamNome 200

int main(int argc, char const *argv[])
{
    
    int qnt;
    char nome[tamNome];
    float pS, pB, pA;
    float s = 0, b = 0,  a = 0; // saques, bloqueios e ataques
    float s1 = 0, b1 = 0, a1 =0; // saques, bloqueios e ataques (que tiveram sucesso)
    float somaSq = 0, somaBloq = 0, somaAtaq = 0; // soma de todos 
    float somaS1 = 0, somaB1 = 0, somaA1 = 0; // soma de todos que tiveram sucesso
    scanf("%i", &qnt);

    for (int i = 0; i < qnt; i++)
    {
        scanf("%s", &nome);
        scanf("%f %f %f", &s, &b, &a);
        scanf("%f %f %f", &s1, &b1, &a1);
    
        somaSq += s; somaBloq += b; somaAtaq+= a;
        somaS1 += s1; somaB1 += b1; somaA1 += a1;

    }
    pS = (somaS1)/(somaSq)*100;
    pB = (somaB1)/(somaBloq)*100;
    pA = (somaA1)/(somaAtaq)*100;

    printf("Pontos de Saque: %.2f %%.\n", pS);
    printf("Pontos de Bloqueio: %.2f %%.\n", pB);
    printf("Pontos de Ataque: %.2f %%.\n", pA);
    return 0;
}
