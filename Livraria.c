
#include <stdio.h>
#include <string.h>

typedef struct Livro
{
    int ano;
    char titulo[100];
    char autor[100];
    int nVolume;
    float preco;
}Brito;

typedef struct Livraria
{
    struct Livro V[100];
    int nLivros;
}Livraria;


void preencheLivro(Brito *novo)
{
    printf("\nDigite o titulo: ");
    scanf(" %99[^\n]", novo->titulo);

    printf("Digite o autor: ");
    scanf(" %99[^\n]", novo->autor);

    printf("Digite o ano: ");
    scanf("%d", &novo->ano);

    printf("Digite o numero de exemplares: ");
    scanf("%d", &novo->nVolume);

    printf("Digite o preco: ");
    scanf("%f", &novo->preco);
}


void preencheLivraria(Livraria *liv, int numLivros)
{
    liv->nLivros = numLivros;

    for (int i = 0; i < numLivros; i++)
    {
        printf("Livro: %d", i + 1);

        preencheLivro(&liv->V[i]);
    }
}


void mostraLivrosPorNome(Livraria *liv)
{
    Brito aux;

    for (int i = 0; i < liv->nLivros - 1; i++)
    {
        for (int j = 0; j < liv->nLivros - 1 - i; j++)
        {
            if (strcmp(liv->V[j].titulo, liv->V[j + 1].titulo) > 0)
            {
                aux = liv->V[j];
                liv->V[j] = liv->V[j + 1];
                liv->V[j + 1] = aux;
            }
        }
    }

    printf("Livros ordenados por titulo:\n");

    for (int i = 0; i < liv->nLivros; i++)
    {
        printf("\nTitulo: %s", liv->V[i].titulo);
        printf("\nAutor: %s", liv->V[i].autor);
        printf("\nAno: %d", liv->V[i].ano);
        printf("\nExemplares: %d", liv->V[i].nVolume);
        printf("\nPreco: R$ %.2f\n", liv->V[i].preco);
    }
}


float calculaCusto(Livraria *liv)
{
    float total = 0;

    for (int i = 0; i < liv->nLivros; i++)
    {
        total += liv->V[i].preco * liv->V[i].nVolume;
    }

    return total;
}


int main()
{
    int qtlivros;
    Livraria livraria;

    printf("Informe a quantidade de livros: ");
    scanf("%d", &qtlivros);

    if (qtlivros < 1 || qtlivros > 100)
    {
        printf("Quantidade invalida!\n");
        return 1;
    }

    preencheLivraria(&livraria, qtlivros);

    mostraLivrosPorNome(&livraria);

    printf("\nCusto total da livraria: R$ %.2f\n",
           calculaCusto(&livraria));
            

    return 0;
}
