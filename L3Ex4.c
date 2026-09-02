// Remove uma letra de um número inteiro representado como uma string.
// imprime o resultado. Se o resultado for apenas zeros, ele imprime "0".

#include <stdio.h>
#include <string.h>

void NumeroFuncao (char Remover, char Numero[106])
{
    char Resultado[106];
    int i, j;
    j = 0;

    for ( i = 0; Numero[i] != '\0'; i++)
    {
        if  (Numero[i] != Remover)
        {
            Resultado[j] = Numero[i];
            j++;
        }   
    }

    int SoZeros = 1;
    for (i = 0; i < j; i++)
        if (Resultado[i] != '0'){
            SoZeros = 0;
            break;
        }

    if (SoZeros == 1 || j == 0) {
        Resultado[0] = '0';
        Resultado[1] = '\0';
    }
    else
        Resultado[j] = '\0';
        

    printf("\n%s", Resultado);

}

int main ()
{
    char Remover;
    char Numero [106];

    printf ("Digite um número: ");
    scanf(" %s", &Numero);
    printf("Digite o número que vc deseja remover: ");
    scanf(" %c", &Remover);
    printf("O número corrigido é: ");
    NumeroFuncao(Remover, Numero);

    return 0;
}