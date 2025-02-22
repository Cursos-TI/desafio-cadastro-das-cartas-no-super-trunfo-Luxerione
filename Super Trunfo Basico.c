#include <stdio.h>
int main(){ // Inicio do Código
    char estado; // Estado representado em uma letra
    char cidade[50]; // Nome da Cidade
    char carta[10]; // Código da Carta, uma letra seguida de números
    int população, turismo; // Tamanho da população e Número de Pontos Turísticos
    float área, pib; // Tamanho da Área em km² e PIB

    printf ("Carta 1: \n"); // Inicio do cadastro da Carta 1
    printf("Digite o Estado: \n"); // Cadastro do Estado
    scanf("%c", &estado);

    printf("Digite o Código de Carta: \n"); // Cadastro do Código
    scanf("%s", &carta);

    printf("Digite o Nome da Cidade: \n"); // Cadastro do Nome da Cidade
    scanf("%s", &cidade);

    printf("Digite a População: \n"); // Cadastro do Tamanho da População
    scanf("%d", &população);

    printf("Digite a Área(em km²): \n"); // Cadastro da Área
    scanf("%f", &área);

    printf("Digite o PIB: \n"); // Cadastro do PIB
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos: \n"); // Cadastro dos Pontos Turisticos
    scanf("%d", &turismo);

    printf("Carta 1: \n - Estado: %c \n", estado); // Resultado do Cadastro
    printf("- Código de Carta: %s \n", carta);
    printf("- Nome da Cidade: %s\n", cidade);
    printf("- População: %d \n - Área em km²: %f km² \n", população, área);
    printf("- PIB: %f bilhões de reais \n - Número de Pontos Turísticos: %d \n ", pib, turismo);

    char estado2;
    char cidade2[50];
    char carta2[10];
    int população2, turismo2;
    float área2, pib2;

    printf ("Carta 2: \n"); // Inicio da Carta 2
    printf("Digite o Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código de Carta: \n");
    scanf("%s", &carta2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a População: \n");
    scanf("%d", &população2);

    printf("Digite a Área(em km²): \n");
    scanf("%f", &área2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &turismo2);

    printf("Carta 2: \n - Estado: %c \n", estado2);
    printf("- Código de Carta: %s \n", carta2);
    printf("- Nome da Cidade: %s\n", cidade2);
    printf("- População: %d \n - Área em km²: %f km² \n", população2, área2);
    printf("- PIB: %f bilhões de reais \n - Número de Pontos Turísticos: %d \n ", pib2, turismo2);
    return 0;
} // Fim do código