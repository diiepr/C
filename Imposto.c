#include <stdio.h>

struct IMOVEL
{
    int nrregistro;
    float valorimposto;
    int mesesatraso;
};

struct TABELAIMPOSTO
{
    float valorini;
    float valorfim;
    float percentual;
};

void RegistraImovel(struct IMOVEL *Imovel)
{
        printf("Digite o numero do registro: ");
        scanf("%d", &Imovel->nrregistro);

        printf("Digite o valor do imposto: ");
        scanf("%f", &Imovel->valorimposto);

        printf("Digite a quantidade de meses de atraso: ");
        scanf("%d", &Imovel->mesesatraso);
}

float CalculaMulta(struct IMOVEL *Imovel, struct TABELAIMPOSTO *TabelaImposto)
{
    float multa = 0.0;

    for (int i = 0; i < 4; i++)
    {
        if (Imovel->valorimposto >= TabelaImposto[i].valorini &&
            Imovel->valorimposto <= TabelaImposto[i].valorfim)
        {
            multa = Imovel->valorimposto *
                    TabelaImposto[i].percentual *
                    Imovel->mesesatraso;
        }
    }
    return multa;
}

void OrdenaImoveis(struct IMOVEL *Imovel, int NumImoveis,
                   struct TABELAIMPOSTO *TabelaImposto)
{
    struct IMOVEL aux;

    for (int i = 0; i < NumImoveis - 1; i++)
    {
        for (int j = 0; j < NumImoveis - 1 - i; j++)
        {
            if (Imovel[j].mesesatraso > Imovel[j + 1].mesesatraso)
            {
                aux = Imovel[j];
                Imovel[j] = Imovel[j + 1];
                Imovel[j + 1] = aux;
            }
        }
    }

    printf("\nImoveis ordenados por meses de atraso:\n");

    for (int i = 0; i < NumImoveis; i++)
    {
        printf("\nNumero do registro: %d\n", Imovel[i].nrregistro);
        printf("Meses de atraso: %d\n", Imovel[i].mesesatraso);
        printf("Valor do imposto: R$ %.2f\n", Imovel[i].valorimposto);
        printf("Valor da multa: R$ %.2f\n",
               CalculaMulta(&Imovel[i], TabelaImposto));
    }
}

int main()
{
    struct IMOVEL Imovel[100];

    struct TABELAIMPOSTO TabelaImposto[4] = {
        {0.00, 1000.00, 0.05},
        {1000.01, 2000.00, 0.10},
        {2000.01, 5000.00, 0.20},
        {5000.01, 999999.99, 0.25}
    };

    int NumImoveis;

    printf("Digite a quantidade de imoveis: ");
    scanf("%d", &NumImoveis);

    if (NumImoveis < 1 || NumImoveis > 100)
    {
        printf("Quantidade de imoveis invalida. Digite um valor entre 1 e 100.\n");
        return 1;
    }

    for (int i = 0; i < NumImoveis; i++)
    {
        printf("\nImovel: %d\n", i + 1);
        RegistraImovel(&Imovel[i]);
    }

    OrdenaImoveis(Imovel, NumImoveis, TabelaImposto);

    return 0;
}