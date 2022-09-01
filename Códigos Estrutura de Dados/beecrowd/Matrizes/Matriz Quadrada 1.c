#include <stdio.h>

int main(int argc, char const *argv[])
{

    int v = 0, tam;

    do
    {
       
        scanf("%i", &v);
        tam = v;
        int m[tam][tam];

        for (int i = 0; i < tam; i++)
        {
            for (int j = 0; j < tam; j++)
            {   
            
                m[i][j] = v;
            }
        }

        for (int i = 0; i < tam; i++)
        {
            for (int j = 0; j < tam; j++)
            {
                printf("%3i", m[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        
    }while (tam != 0);

    return 0;
}
