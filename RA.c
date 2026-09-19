#include <stdio.h>
#include <string.h>

void DecodificaRA(char Numero[14])
{
    
    char UE[4] = {0};
    char Curso[4] = {0};
    char AnoIngresso[3] = {0};
    char SemestreIngresso;
    char Periodo;
    char NumAluno[4] = {0};
    int const i = 3;
    int const j = 2;

    char *ptr = Numero;
    
    strncpy(UE, ptr, 3);
    ptr += i;

    strncpy(Curso, ptr, 3);
    ptr += i;

    strncpy(AnoIngresso, ptr, 2);
    ptr += j;

    SemestreIngresso = *ptr;
    ptr++;

    Periodo = *ptr;
    ptr++;
    
    strncpy(NumAluno, ptr, 3);


    if (strcmp(UE, "003") == 0)
        printf("\nUnidade: Fatec Sorocaba.\n");
    else
        printf("\nFaculdade nao Cadastrada.\n");

    if (strcmp(Curso, "048") == 0)
        printf("Curso: Analise e Desenvolvimento de Sistemas\n");
    else if (strcmp(Curso, "100") == 0)
        printf("Curso: Fabricacao Mecanica.\n");
    else if (strcmp(Curso, "099") == 0)
        printf("Curso: Projetos Mecanicos.\n");
    else if (strcmp(Curso, "061") == 0)
        printf("Curso: Sistemas Biomedicos.\n");
    else if (strcmp(Curso, "074") == 0)
        printf("Curso: Logistica.\n");
    else if (strcmp(Curso, "073") == 0)
        printf("Curso: Eletronica Automotiva.\n");
    else if (strcmp(Curso, "080") == 0)
        printf("Curso: Polimeros.\n");
    else if (strcmp(Curso, "081") == 0)
        printf("Curso: Processos Metalurgicos.\n");
    else if (strcmp(Curso, "128") == 0)
        printf("Curso: Manufatura Avancada.\n");
    else if (strcmp(Curso, "064") == 0)
        printf("Curso: Gestao Empresarial - EAD\n");
    else if (strcmp(Curso, "136") == 0)
        printf("Curso: Gestao da Qualidade.\n");
    else if (strcmp(Curso, "068") == 0)
        printf("Curso: Manutencao de Aeronaves.\n");
    else if (strcmp(Curso, "149") == 0)
        printf("Curso: Logistica - AMS.\n");
    else if (strcmp(Curso, "143") == 0)
        printf("Curso: Analise e Desenvolvimento de Sistemas - AMS.\n");
    else if (strcmp(Curso, "090") == 0)
        printf("Curso: Automacao Industrial.\n");
    else
        printf("Curso nao cadastrado.\n");

    printf("Ano do Ingresso: 20%s\n", AnoIngresso);
    printf("Semestre do Ingresso: %c - Semestre\n", SemestreIngresso);

    if (Periodo == '1')
        printf("Periodo: Diurno.\n");
    else if (Periodo == '2')
        printf("Periodo: Matutino.\n");
    else if (Periodo == '3')
        printf("Periodo: Noturno.\n");
    else
        printf("Periodo não identificado");

    printf("Numero do Aluno: %s\n", NumAluno);
}

int main()
{
    char RA[14];

    printf("Digite seu RA: ");
    scanf("%13s", RA);
    
    DecodificaRA(RA);

    return 0;
}