// Exercício para ler uma matriz 12x12 e calcular a soma ou média de uma linha específica, dependendo da operação escolhida pelo usuário.
#include <stdio.h>

int main() {

    float M[12][12], soma = 0, media = 0;
    int Linha, i, j;
    char Operacao;
    
    printf("Digite a linha desejada: ");
    scanf("%d", &Linha);
    printf("Digite a operacao desejada (S para soma, M para media): ");
    scanf(" %c", &Operacao);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            printf("Digite o valor para M[%d][%d]: ", i, j);
            scanf("%f", &M[i][j]);
        }
    }
    if (Operacao == 'S') {
        for (j = 0; j < 12; j++) {
            soma += M[Linha][j];
        }
        printf("Soma da linha %d: %.1f\n", Linha, soma);
    } else if (Operacao == 'M') {
        for (j = 0; j < 12; j++) {
           soma += M[Linha][j];
        }
        media = soma / 12;
        printf("Media da linha %d: %.1f\n", Linha, media);
    } else {
        printf("Operacao invalida.\n");
    }
    return 0;
}