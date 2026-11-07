#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void CriptografarCesar(char *texto, int *K)
{
    int qntd_caracteres = strlen(texto);

    for (int i= 0; i < qntd_caracteres; i++){
        if (isalpha(*(texto + i))){
            if (*(texto + i) == 'X')
                *(texto + i) = 'A';
            else if (*(texto + i) == 'Y')
                *(texto + i) = 'B';
            else if (*(texto + i) == 'Z')
                *(texto + i) = 'C';
            else
                *(texto + i) += *K; 
        }
    } 
    printf("Modificado:  %s\n", texto);
}

int main(){
     char texto[100];
     int K = 3;
     char Resposta;

     while (K != 0) {
         system("cls");
         printf("Digite o texto que você deseja criptografar com a cifra de César: ");
         scanf(" %[^\n]", texto);

         for (int i = 0; i < strlen(texto); i++){
            texto[i] = toupper(texto[i]);
         }
         
         CriptografarCesar(texto, &K);

         printf("\nDeseja encerrar o programa? (S/N): ");
         scanf(" %c", &Resposta);
         Resposta = tolower(Resposta);

         if (Resposta == 's'){
             system("cls");
             printf("Encerrando o Programa...\n");
             _sleep(2000);
             K = 0;
        }
         
         else if (Resposta != 'n'){
            while( Resposta != 'n' && Resposta != 's'){
            system("cls");
            printf("Resposta inválida. Por favor, digite 'S' para sim ou 'N' para não.\n");
            _sleep(2000);
             printf("\nDeseja encerrar o programa? (S/N): ");
            scanf(" %c", &Resposta);
            Resposta = tolower(Resposta);
            if (Resposta == 's'){
                system("cls");
                printf("Encerrando o Programa...\n");
                _sleep(2000);
                K = 0;
            }
         }
      }

        
    }
     system("cls");
     return 0;
}
    