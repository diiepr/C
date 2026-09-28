#include <stdio.h>
#include <string.h>

void Criptografar(char *Texto1, char *Texto2)
{
    char Controle1[16] = {
        'a', 'u', 'k', 'l', 'o', 'q', 'n', 'd',
        'x', 'h', 'r', 'e', 'y', 's', 'j', 'i'
    };

    char Controle2[16] = {
    '!', '@', '#', '$',
    '%', '&', '*', '(',
    ')', '-', '+', '=',
    '[', ']', '{', '}'
    };


    for (int i = 0; i < strlen(Texto1); i++){
        for (int j = 0; j < 16; j++){
            if (*(Texto1 + i) == *(Controle1 + j)){
                *(Texto2 + i) = *(Controle2 + j);
                break;}
                
            else if (*(Texto1 + i) == *(Controle2 + j)){
                *(Texto2 + i) = *(Controle1 + j);
                break;}
            else
                *(Texto2 + i) = *(Texto1 + i);
        }
    }

    *(Texto2 + strlen(Texto1)) = '\0';
}

int main()
{
    char Texto1[9];
    char Texto2[9];
    char Texto3[9];

    printf("Digite o texto a ser criptografado: ");
    scanf("%8s", Texto1);

    Criptografar(Texto1, Texto2);
    Criptografar(Texto2, Texto3);

    printf("Texto Criptografado:  %s, Texto Descriptografado:  %s.", Texto2, Texto3);

    return 0;
}