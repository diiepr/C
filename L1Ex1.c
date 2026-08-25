// Exercício pede valores para um vetor //
// Retorna outro vetor com valores invertidos //

#include <stdio.h>

int main()
{
  int Matriz1[10], Matriz2[10];
  int Cont;
  for (Cont = 10; Cont > 0; Cont--)
  {
      printf("Digite um Numero: ");
      scanf("%i", &Matriz1[Cont]);
  }
  printf("\nSeu vetor invertido e: \n");
  for (Cont = 0; Cont < 10; Cont++)
  {
      Matriz2[Cont] = Matriz1[Cont];
      printf("\n%i\n", Matriz2[Cont]);
  }
  return 0;
}
