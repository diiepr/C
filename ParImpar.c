#include <stdio.h>
#include <string.h>
#include <ctype.h>


void TrocaCaracteres(char *Mensagem)
{
    int Qnt_Caracter_Mensagem = strlen(Mensagem);

    for (int i = 0; i < Qnt_Caracter_Mensagem; i++)
    {
        if (i % 2 == 0)
        {
            if (*(Mensagem + i) == 'A')
                *(Mensagem + i) = 'Z';
            else
                *(Mensagem + i) -= 1;
        }
        else
        {
            if (*(Mensagem + i) == 'Z')
                *(Mensagem + i) = 'A';
            else
                *(Mensagem + i) += 1;
        }
    }

    printf("Modificado: %s\n", Mensagem);
}


int main()
{
    char Mensagem[50];

    do
    {
        printf("Digite a Mensagem: ");
        scanf("%s", Mensagem);

        for (int i = 0; *(Mensagem + i) != '\0'; i++)
        {
            if (isalpha(*(Mensagem + i)))
            {
                *(Mensagem + i) = toupper(*(Mensagem + i));
            }
        }

        if (strcmp(Mensagem, "FIM") == 0)
        {
            TrocaCaracteres(Mensagem);
            printf("Acabou.\n");
            break;
        }

        TrocaCaracteres(Mensagem);

    } while (1);

    return 0;
}