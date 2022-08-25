#include <stdlib.h>
#include <stdio.h>

#define TAM 10
#define FALSO 0
#define VERDADEIRO 1

int main(int argc, char const *argv[])
{

    int *v;
    int n, achou = VERDADEIRO;
    v = (int *)malloc(TAM * sizeof(int));

    void verificar(int num, int vetor[], int achou);

    for (int i = 0; i < TAM; i++)
    {
        printf("Digite o %i° valor: ", i + 1);
        scanf("%i", &v[i]);
    }

    printf("Digite um número para verificar se ele está no vetor:");
    scanf("%i", &n);

    verificar(n, v, achou);
    free (v); //liberando memória
}

void verificar(int num, int vetor[], int achou)
{

    achou = FALSO;
    for (int i = 0; i < TAM; i++)
    {
        if (num == vetor[i])
        {
            printf("Número encontrado na posição %i\n", i + 1);
            achou = VERDADEIRO;
        }
    }

    if (!achou)
    {
        printf("A chave %i não foi encontrada", num);
    }
}
