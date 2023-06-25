#include <stdio.h>
#include <stdlib.h>

typedef struct No
{

    int ficha;
    struct no *prox;

} no;

typedef struct fila
{

    no *inicio;
    no *fim;

} Fila;

Fila *iniciar()
{

    Fila *f = (Fila *)malloc(sizeof(Fila)); // Alocando nó de fila
    f->inicio = f->fim = NULL;              // A fila inicia como NULL (Vazia)
}

Fila *inserirNaFila(Fila *f, int fch)
{
    no *n = (no *)malloc(sizeof(no));
    n->ficha = fch;
    n->prox = NULL;
    if (f->fim != NULL)
        f->fim->prox = n;
    else
        f->inicio = n;
    f->fim = n;
    return f;
}

Fila *tirarDaFila(Fila *f)
{
    no *aux;
    if (f->inicio == NULL)
    {
        printf("A Fila está vazia. \n");
        return f;
    }
    aux = f->inicio;
    f->inicio = aux->prox;

    if (f->inicio == NULL)
        f->fim = NULL;
    free(aux);
    return f;
}

void imprimir(Fila *f)
{

    if (f->inicio == NULL)
        printf("A Fila está vazia. \n");
    else
    {
        no *aux;
        for (aux = f->inicio; aux != NULL; aux = aux->prox)
        {
            printf("%i ", aux->ficha);
        }
    }
    printf("\n");
}

void retornarPosi(Fila *f, int fch)
{
    int c = 0;
    no *aux;
    for (aux = f->inicio; aux != NULL; aux = aux->prox)
    {
        c++;
    }

    printf("%i está na posição %i, há %i na sua frente", fch, c, c-1);
}

void menu()
{

    printf("1 - Inserir pessoas na fila\n");
    printf("2 - Remover pessoa da fila\n");
    printf("3 - Exibir a fila completa\n");
    printf("4 - Retornar a posição na fila\n");
    printf("0 -  Sair\n");
}

int main(int argc, char const *argv[])
{

    Fila *A = iniciar();

    int opc = -1;
    int x = 0;
    int y = 0;

comeco:
    menu();
    printf("Digite uma opção: ");
    scanf("%i", &opc);

    switch (opc)
    {
    case 1:
        printf("Digite um número para adicionar a fila\n");
        scanf("%i", &x);
        inserirNaFila(A, x);
        goto comeco;
    case 2:
        tirarDaFila(A);
        goto comeco;
    case 3:
        imprimir(A);
        goto comeco;
    case 4:
        printf("Digite o número de uma ficha para exibir sua posição.\n");
        scanf("%i", &y);
        retornarPosi(A, y);
        goto comeco; 
    case 0:
        break;
    default:
        printf("Opção inválida, encerrando programa\n");
        break;
    }

    return 0;
}
