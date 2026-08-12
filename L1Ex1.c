#include <stdio.h>

int main()
{
  int Matriz1[10], Matriz2[10];
  int Cont;
  for (Cont = 9; Cont >= 0; Cont--)
  {
      printf("Digite um Numero: ");
      scanf("%i", &Matriz1[Cont]);
  }
  for (Cont = 0; Cont <=9; Cont++)
  {
      Matriz2[Cont] = Matriz1[Cont];
      printf("\n%i\n", Matriz2[Cont]);
  }
  return 0;
}
