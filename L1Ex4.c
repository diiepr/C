// Exercício calcula lampâdas nescessárias, totais e a potência //
// De acordo com o número de cômodos, classe, comprimento e largura //

#include <stdio.h>

int main()
{
    int numComodos, Cont;
    int classe, watts;
    int area, potencia, lampadas;
    int comprimento, largura;
    int totalLampadas = 0;
    int totalPotencia = 0;

    printf("Digite o numero de comodos: ");
    scanf("%i", &numComodos);

    for (Cont = 1; Cont <= numComodos; Cont++)
    {
        printf("\nComodo %i\n", Cont);

        printf("Digite a classe: ");
        scanf("%i", &classe);

        printf("Digite o comprimento: ");
        scanf("%i", &comprimento);

        printf("Digite a largura: ");
        scanf("%i", &largura);

        area = comprimento * largura;

        if (classe == 1)
        {
            watts = 10;
        }
        else if (classe == 2)
        {
            watts = 15;
        }
        else if (classe == 3)
        {
            watts = 18;
        }
        else if (classe == 4)
        {
            watts = 20;
        }
        else if (classe == 5)
        {
            watts = 25;
        }

        potencia = area * watts;

        lampadas = potencia / 60;

        if (potencia % 60 != 0)
        {
            lampadas++;
        }

        printf("Area: %i m2\n", area);
        printf("Potencia: %i W\n", potencia);
        printf("Lampadas necessarias: %i\n", lampadas);

        totalLampadas = totalLampadas + lampadas;
        totalPotencia = totalPotencia + potencia;
    }

    printf("\nTotal de lampadas: %i\n", totalLampadas);
    printf("Total de potencia: %i W\n", totalPotencia);

    return 0;
}
