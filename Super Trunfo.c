#include <stdio.h>
int main(){ // Inicio do Código
    char estado; // Estado representado em uma letra
    char cidade[50]; // Nome da Cidade
    char carta[10]; // Código da Carta, uma letra seguida de números
    unsigned long int população; // Tamanho da População
    int turismo; // Número de Pontos Turisticos
    float área, pib; // Tamanho da Área em km² e PIB
    float densidade;
    float capita;
    float superpoder;

    printf("Carta 1: \n"); // Inicio do cadastro da Carta 1
    printf("Digite o Estado: \n"); // Cadastro do Estado
    scanf("%c", &estado);

    printf("Digite o Código de Carta: \n"); // Cadastro do Código
    scanf("%s", &carta);

    printf("Digite o Nome da Cidade: \n"); // Cadastro do Nome da Cidade
    scanf("%s", &cidade);

    printf("Digite a População: \n"); // Cadastro do Tamanho da População
    scanf("%u", &população);

    printf("Digite a Área(em km²): \n"); // Cadastro da Área
    scanf("%f", &área);

    printf("Digite o PIB: \n"); // Cadastro do PIB
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos: \n"); // Cadastro dos Pontos Turisticos
    scanf("%d", &turismo);

    printf("Carta 1: \n - Estado: %c \n", estado); // Resultado do Cadastro
    printf("- Código de Carta: %s \n", carta);
    printf("- Nome da Cidade: %s\n", cidade);
    printf("- População: %u \n - Área em km²: %.2f km² \n", população, área);
    printf("- PIB: %.2f bilhões de reais \n - Número de Pontos Turísticos: %d \n ", pib, turismo);
    densidade = população / área; // Declarando cálculo da densidade
    printf("- Densidade Populacional: %.2f hab/km² \n", densidade);
    capita = população / pib; // Declarando cálculo do PIB per Capita
    printf("- PIB per Capita: %.2f reais \n", capita);
    superpoder = população + área + pib + turismo + capita + 1/densidade;
    printf("- Super Poder: %f \n", superpoder);

    char estado2;
    char cidade2[50];
    char carta2[10];
    unsigned long int população2;
    int turismo2;
    float área2, pib2;
    float densidade2;
    float capita2;
    float superpoder2;

    printf ("Carta 2: \n"); // Inicio da Carta 2
    printf("Digite o Estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código de Carta: \n");
    scanf("%s", &carta2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a População: \n");
    scanf("%u", &população2);

    printf("Digite a Área(em km²): \n");
    scanf("%f", &área2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &turismo2);

    printf("Carta 2: \n - Estado: %c \n", estado2);
    printf("- Código de Carta: %s \n", carta2);
    printf("- Nome da Cidade: %s\n", cidade2);
    printf("- População: %u \n - Área em km²: %.2f km² \n", população2, área2);
    printf("- PIB: %.2f bilhões de reais \n - Número de Pontos Turísticos: %d \n ", pib2, turismo2);
    densidade2 = população2 / área2; // Declarando cálculo da densidade
    printf("- Densidade Populacional: %.2f hab/km² \n", densidade);
    capita2 = população2 / pib2; // Declarando cálculo do PIB per Capita
    printf("- PIB per Capita: %.2f reais \n", capita2);
    superpoder2 = população2 + área2 + pib2 + turismo2 + capita2 + 1/densidade2;
    printf("- Super Poder: %f \n", superpoder2);

    int resultadopop, resultadoárea, resultadopib, resultadoturismo, resultadoden, resultadocapita, resultadosuper;
    resultadopop = população > população2;
    resultadoárea = área > área2;
    resultadopib = pib > pib2;
    resultadoturismo = turismo > turismo2;
    resultadoden = densidade < densidade2;
    resultadocapita = capita > capita2;
    resultadosuper = superpoder > superpoder2;

    printf("Comparação das Cartas:\n");
    printf("Se o Resultado for 1, Carta 1 vence, se for 0, Carta 2 vence:");
    printf("População: %d\n", resultadopop);
    printf("Área: %d\n", resultadoárea);
    printf("PIB: %d\n", resultadopib);
    printf("Pontos Turisticos: %d\n", resultadoturismo);
    printf("Densidade Populacional: %d\n", resultadoden);
    printf("PIB per Capita: %d\n", resultadocapita);
    printf("Super Poder: %d\n", resultadosuper);

    return 0;
} // Fim do código