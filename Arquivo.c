
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "func-sub.c"

typedef struct fatura
{
	int numFatura;
	int codProduto;
	char nomeProduto[32];
	int qtde;
	double vrunit;
	double vrfrete;
	int codforn;
} Fatura;



int LeArquivo(Fatura *vetor)
{
  char linha[200];
  char aux[40];
  FILE *arq;
  Fatura vfatura;
  int qtde=0;

  arq = fopen("fatura.txt","r");

  if (arq == NULL)
  {
    printf("Erro ao abrir arquivo\n");
    return -1;
  }
  fgets(linha,200,arq);
  while (!feof(arq))
  {
	substr(linha,aux,1,5);
	vfatura.numFatura = atoi(aux);
	substr(linha,aux,5,7);
	vfatura.codProduto = atoi(aux);
	substr(linha,aux,8,40);
	strcpy(vfatura.nomeProduto,rtrim(aux));
	substr(linha,aux,41,44);
	vfatura.qtde = atoi(aux);
	substr(linha,aux,45,54);
    vfatura.vrunit = atoi(aux)/100.0;
	substr(linha,aux,55,64);
    vfatura.vrfrete = atoi(aux)/100.0;
	substr(linha,aux,65,68);
	vfatura.codforn = atoi(aux);

	if (vfatura.codforn > 0 && vfatura.qtde > 0)
	{

	  vetor[qtde]=vfatura;
      qtde++;
    }

    fgets(linha,100,arq);
  }

  fclose(arq);
  return qtde;
}

void OrdenaFaturas(Fatura *vetor, int qtde)
{
    int i, j;
    Fatura temp;

    for (i = 1; i < qtde; i++)
    {
        temp = vetor[i];
        j = i - 1;

        while (j >= 0 && strcmp(vetor[j].nomeProduto, temp.nomeProduto) > 0)
        {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = temp;
    }
}

void MostrarFaturas(Fatura *vetor, int qntde)
{
    int i;
    for (i = 0; i < qntde; i++)
    {
        printf("Numero da Fatura: %d\n", vetor[i].numFatura);
        printf("Codigo do Produto: %d\n", vetor[i].codProduto);
        printf("Nome do Produto: %s\n", vetor[i].nomeProduto);
        printf("Quantidade: %d\n", vetor[i].qtde);
        printf("Valor Unitario: %.2f\n", vetor[i].vrunit);
        printf("Valor do Frete: %.2f\n", vetor[i].vrfrete);
        printf("Codigo do Fornecedor: %d\n", vetor[i].codforn);
        printf("-----------------------------\n");
        Sleep(2000);
    }
}

int PedeFatura()
{
    int numFatura;
    system("cls");
    printf("Digite o numero da fatura para pesquisa: ");
    scanf("%d", &numFatura);
    return numFatura;
}


void PesquisaFatura(Fatura *vetor, int qtde, int numFatura)
{
    int inicio = 0;
    int fim = qtde - 1;
    int meio;
    int encontrado = 0;

    while (inicio <= fim)
    {
        meio = (inicio + fim) / 2;

        if (vetor[meio].numFatura == numFatura)
        {
            printf("Fatura encontrada:\n");
            MostrarFaturas(&vetor[meio], 1);
            encontrado = 1; 
            break;
        }
        else if (vetor[meio].numFatura < numFatura)
        {
            inicio = meio + 1;
        }
        else
        {
            fim = meio - 1;
        }
    }

    if (!encontrado)
    {
        printf("Fatura nao encontrada.\n");
    }
}

void MostraItensFatura(Fatura *vetor, int qtde, int numFatura)
{
    int i;
    for (i = 0; i < qtde; i++)
    {
        if (vetor[i].numFatura == numFatura)
        {
           printf("%d - %s - %d - %.2f - %.2f - %d\n", vetor[i].numFatura, vetor[i].nomeProduto, vetor[i].qtde, vetor[i].vrunit, vetor[i].vrfrete, vetor[i].codforn);
        }
    }
}





int main()
{
   Fatura vetorFatura[20];
   int qtde;
   qtde = LeArquivo(vetorFatura);

   OrdenaFaturas(vetorFatura, qtde);
   MostrarFaturas(&vetorFatura[0], qtde);
   system("cls");
   PesquisaFatura(vetorFatura, qtde, PedeFatura());
   MostraItensFatura(vetorFatura, qtde, PedeFatura());

}
