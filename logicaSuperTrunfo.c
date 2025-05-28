#include <stdio.h>

int main()
{

    // Desafio  Lógica Super Trunfo!!//

    printf("Desafio Lógica Super Trunfo!!\n\n");
    printf("Cadastrando cartas de super trunfo!!\n\n");

    // Variáveis da Carta 1
    char estado1;
    char codigo1[8];
    char nomecidade1[30];
    float area1;
    int populacao1;
    float pib1;
    int pontosturisticos1;
    float densidade1;
    float percapita1;
    int resultado1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[8];
    char nomecidade2[30];
    float area2;
    int populacao2;
    float pib2;
    int pontosturisticos2;
    float densidade2;
    float percapita2;
    int resultado2;

    // Leitura dos dados da Carta 1
    printf("Cadastrando a Carta 1\n\n");

    printf("Qual é o seu Estado? ");
    scanf(" %c", &estado1); // espaço antes de %c para ignorar '\n'

    printf("Código do Estado: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: \n");
    scanf(" %[^\n]", nomecidade1);

    printf("Tamanho da área em (km²): ");
    scanf(" %f", &area1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("PIB do Estado (bilhões de reais): ");
    scanf(" %f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    printf("\n");

    // Leitura dos dados da Carta 2
    printf("Cadastrando a Carta 2\n\n");

    printf("Qual é o seu Estado? ");
    scanf(" %c", &estado2);

    printf("Código do Estado: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomecidade2);

    printf("Tamanho da área em (km²): ");
    scanf(" %f", &area2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("PIB do Estado (bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    printf("\n");

    // Calculo da densidade populacional e do PIB per capita
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    percapita1 = (pib1 * 1000000000.0f) / populacao1; // em reais
    percapita2 = (pib2 * 1000000000.0f) / populacao2; // em reais

   
    // Exibição das cartas cadastradas
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional da Carta 1: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita da Carta 1: %.2f Reais!!\n", percapita1);
    printf("\n");

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);
    printf("D    ensidade populacional da Carta 2: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita da Carta 2: %.2f Reais!!\n", percapita2);
    printf("\n");

    // Comparando as Cartas
    printf("Comparando as Cartas...\n\n");
    printf("População da Carta 1: %d\n", populacao1);
    printf("População da Carta 2: %d\n", populacao2);

    if (populacao1 > populacao2)
    {
        printf("Resultado: Carta 1 Venceu!!\n");
        resultado1 = 1;
    }
    else if (populacao1 < populacao2)
    {
        printf("Resultado:  Carta 2 Venceu!!\n");
        resultado1 = 2;
    }
    else
    {
        printf("As cartas têm a mesma população.\n");
        resultado1 = 0;
    }

    return 0;
}
