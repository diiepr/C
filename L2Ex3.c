#include <stdio.h>
  #include <string.h> // Necessário para usar strcmp

  // A nova função retorna um ponteiro para um texto (const char*)
  const char* Decisao(char* Escolha1, char* Escolha2)
  {
      // strcmp retorna 0 se as duas strings forem exatamente iguais
      if (strcmp(Escolha1, "ataque") == 0 && strcmp(Escolha2, "ataque") == 0)
          return "Aniquilacao Mutua";

      else if (strcmp(Escolha1, "ataque") == 0 && strcmp(Escolha2, "pedra") == 0)
          return "Jogador 1 Venceu";

      else if (strcmp(Escolha1, "ataque") == 0 && strcmp(Escolha2, "papel") == 0)
          return "Jogador 1 Venceu";

      else if (strcmp(Escolha1, "pedra") == 0 && strcmp(Escolha2, "ataque") == 0)
          return "Jogador 2 Venceu";

      else if (strcmp(Escolha1, "papel") == 0 && strcmp(Escolha2, "ataque") == 0)
          return "Jogador 2 Venceu";

      else if (strcmp(Escolha1, "pedra") == 0 && strcmp(Escolha2, "pedra") == 0)
          return "Sem ganhador"; // Empate

      else if (strcmp(Escolha1, "papel") == 0 && strcmp(Escolha2, "papel") == 0)
          return "Ambos venceram";

      else if (strcmp(Escolha1, "pedra") == 0 && strcmp(Escolha2, "papel") == 0)
          return "Jogador 1 Venceu";

      else if (strcmp(Escolha1, "papel") == 0 && strcmp(Escolha2, "pedra") == 0)
          return "Jogador 2 Venceu";
  }

 int main ()
  {
      int N = 1;
      char Escolha1[16], Escolha2[16];

      while (N <= 1000)
      {
          scanf("%s %s", Escolha1, Escolha2);
          printf("%s\n", Decisao(Escolha1, Escolha2));
          N++;
      }

      return 0;
  }