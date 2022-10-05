#include <stdio.h>
#include <string.h>
#include <ctype.h>

void analise(char s1[], char s2[]);
void contaLetras(char s1[], char s2[]);
void sIgual(char s1[], char s2[]);
void contarVogais(char s[]);

int main(int argc, char const *argv[])
{
    char str1[100];
    char str2[100];

    scanf("%[^\n]", str1);
    fflush(stdin);
    scanf("%[^\n]", str2);
    fflush(stdin);

    analise(str1, str2);

    return 0;
}

void analise(char s1[], char s2[])
{
    contaLetras(s1, s2);
    sIgual(s1, s2);
    contarVogais(s1);
    contarVogais(s2);
}

void contaLetras(char s1[], char s2[])
{

    int esp1 = 0, esp2 = 0;
    for (int i = 0; i <= strlen(s1); i++)
    {
        if (isspace(s1[i]))
        {
            esp1++;
        }
    }
    for (int i = 0; i <= strlen(s2); i++)
    {
        if (isspace(s2[i]))
        {
            esp2++;
        }
    }

    printf("A string 1 tem %i letras\n", strlen(s1) - esp1);
    printf("A string 2 tem %i letras\n", strlen(s2) - esp2);
}

void sIgual(char s1[], char s2[])
{
    if (strcmp(s1, s2) == 0)
    {
        printf("As strings são iguais\n");
    }
    else
    {
        printf("As string são diferentes\n");
    }
}

void contarVogais(char s[])

{

    int quantidadeV = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {

        char letra = s[i];

        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
            quantidadeV++;
        else if (letra == 32)
        {
            continue;
        }
    }

    printf("A quantidade de vogais na string %s é %i\n", s, quantidadeV);
}
