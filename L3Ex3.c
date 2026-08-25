// Exercício que pede uma palavra e uma letra //
// Retorna o elemento em que a letra se encontra //

#include <stdio.H>
#include <string.h>
#include <ctype.h>

int main ()
{
    char Palavra[99], Caracter;
    int i, Indice;

    printf("Digite uma palavra: ");
    scanf("%[^\n]", &Palavra);
    printf("Digite um caracter: ");
    scanf(" %c", &Caracter);

    for (i = 0; i < strlen(Palavra); i++){
        Palavra[i] = (char)tolower((unsigned char)Palavra[i]);
        if (Caracter == Palavra[i]){
            Indice = i;
            printf("A letra '%c' aparece no %iº elemento\n", Caracter, Indice);
        }
    }
    return 0;
}