// Exercício pede valores para dois vetores //
// Retorna um vetor com valores intercalados //

#include <stdio.h>

int main()
{
    int Matriz1[25], Matriz2[25], Matriz3[50];
    int Cont;
    for (Cont = 0; Cont <= 24; Cont++)
    {
        printf("\n\nDigite um numero para a primeira matriz: ");
        scanf("%i", &Matriz1[Cont]);
    }
    for (Cont = 0; Cont <= 24; Cont++)
    {
        printf("\n\nDigite um numero para a segunda matriz: ");
        scanf("%i", &Matriz2[Cont]);
    }
    printf("\nA intercalacao das duas matrizes e: \n");
    for (Cont = 0; Cont <=49; Cont++)
    {
        Matriz3[Cont * 2] = Matriz1[Cont];
        Matriz3[Cont * 2 + 1] = Matriz2[Cont];
        printf("\n%i", Matriz3[Cont]);
    }
return 0;
}
