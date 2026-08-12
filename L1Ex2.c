#include <stdio.h>

int main()
{
    int Matriz1[20], Matriz2[20], Matriz3[20];
    int Cont;
    for (Cont = 0; Cont <=19; Cont++)
    {
        printf("\nDigite um Numero para a primeira matriz: ");
        scanf("%i", &Matriz1[Cont]);
    }
    for (Cont = 0; Cont <=19; Cont++)
    {
        printf("\nDigite um numero para a segunda matriz: ");
        scanf("%i", &Matriz2[Cont]);
    }
    for (Cont = 0; Cont <=19; Cont ++)
    {
        Matriz3[Cont] = Matriz1[Cont] + Matriz2[Cont];
        printf("\n%i\n", Matriz3[Cont]);
    }
return 0;
}
