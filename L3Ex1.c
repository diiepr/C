#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char Palavra[11];
    int Vogal = 0;

    printf("Digite uma palavra: ");
    scanf("%s", Palavra);

    for (int i = 0; i < strlen(Palavra); i++) {
        Palavra[i] = (char)tolower((unsigned char)Palavra[i]);

        if (Palavra[i] == 'a' || Palavra[i] == 'e') {
            Palavra[i] = 'w';
            Vogal++;
        } 
        else if   (Palavra[i] == 'i' ||
                   Palavra[i] == 'o' ||
                   Palavra[i] == 'u') {
            Palavra[i] = 'x';
            Vogal++;
        }
    }

    printf("Palavra modificada: %s\n", Palavra);
    printf("Quantidade de vogais: %d\n", Vogal);

    return 0;
}