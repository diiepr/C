// Exercício que pede uma palavra e uma letra //
// Retorna a quantidade de vezes em que a letra aparece na palavra //

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()

{
    char Palavra[12], letra;
    int i, qntd_letras;

    qntd_letras = 0;

    printf("Diga uma palavra: ");
    scanf("%11s", &Palavra);
    printf("Digite a letra que você quer saber as informações: ");
    scanf(" %c", &letra);

    for (i = 0; i < strlen(Palavra); i++){
        Palavra[i] = (char)tolower((unsigned char)Palavra[i]);
        if (Palavra[i] == letra)
            qntd_letras++;
    }
        

    printf("A quantidade de vezes em que a letra apareceu:  %i", qntd_letras);
    return 0;
}