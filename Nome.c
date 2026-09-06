#include <stdio.h>
#include <string.h>

void Novo_Nome(char Nome[100])
{
    int i, Cont;
    int j = 0;
    char Sobrenome_Invertido[100];
    char Sobrenome_Real[100];
    char Nome_Real[100];

    for (i = strlen(Nome) - 1; Nome[i] != ' '; i--)
    {
        Sobrenome_Invertido[j] = Nome[i];
        j++;
    }
    Sobrenome_Invertido[j] = '\0';

    Cont = 0;
    for(i = j - 1; i >= 0; i--)
    {
        Sobrenome_Real[Cont] = Sobrenome_Invertido[i];
        Cont++;
    }

    j =  0;
    for (i = 0; Nome[i] != ' '; i++)
    {
        Nome_Real[j] =  Nome[i];
        j++;
    }

    Nome_Real[j] = '\0';
    Sobrenome_Real[Cont] = '\0';

    printf("%s, ", Sobrenome_Real);
    printf("%s", Nome_Real);
}

int main (void)
{
    char Nome[100];

    printf("Digite seu nome: ");
    scanf("%[^\n]", &Nome);

    Novo_Nome(Nome);

    return 0;
}