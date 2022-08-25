#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    double N1, N2, N3, N4, media, NE, mf;

    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

    media = (2 * N1 + 3 * N2 + 4 * N3 + 1 * N4) / 10;

    printf("Media: %.1lf\n", media);
    if (media >= 7)
    {
        printf("Aluno aprovado.\n");
    }
    else if (media >= 5.0 && media <= 6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &NE);
        printf("Nota do exame: %.1lf\n", NE);
        mf = (NE + media) / 2;

        if (mf >= 5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", mf);
        }
        else
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", mf);
        }
    }
    else
    {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
