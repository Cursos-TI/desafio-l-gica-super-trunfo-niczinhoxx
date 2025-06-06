#include <stdio.h>

int main()
{
    printf("Desafio Super Trunfo!!\n\n");
    printf("Cadastrando cartas de Super Trunfo!!\n\n");

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

    int opcao;

    // Leitura da Carta 1
    printf("Cadastrando a Carta 1\n\n");

    printf("Qual é o seu Estado? ");
    scanf(" %c", &estado1);

    printf("Código do Estado: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomecidade1);

    printf("Tamanho da área em (km²): ");
    scanf("%f", &area1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("PIB do Estado (bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    printf("\n");

    // Leitura da Carta 2
    printf("Cadastrando a Carta 2\n\n");

    printf("Qual é o seu Estado? ");
    scanf(" %c", &estado2);

    printf("Código do Estado: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomecidade2);

    printf("Tamanho da área em (km²): ");
    scanf("%f", &area2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("PIB do Estado (bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    percapita1 = (pib1 * 1e9f) / populacao1;
    percapita2 = (pib2 * 1e9f) / populacao2;

     // Exibição das cartas cadastradas
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional da carta 1: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita da carta 1: %.2f Reais!!\n", percapita1);
    printf("\n");

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);
    printf("D    ensidade populacional da carta 2: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita da carta 2: %.2f Reais!!\n", percapita2);
    printf("\n");

    // Exibição dos dados
    printf("\nCartas cadastradas:\n");
    printf("Carta 1 - %s\n", nomecidade1);
    printf("Carta 2 - %s\n\n", nomecidade2);

    // Menu de comparação
    printf("Escolha uma opção para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n");

    // Comparação com base na opção
    switch (opcao)
    {
    case 1:
        printf("População:\n");
        printf("Carta 1: %d\n", populacao1);
        printf("Carta 2: %d\n", populacao2);
        if (populacao1 > populacao2)
            printf("Resultado: Carta 1 venceu!\n");
        else if (populacao2 > populacao1)
            printf("Resultado: Carta 2 venceu!\n");
        else
            printf("Empate!\n");
        break;

    case 2:
        printf("Área:\n");
        printf("Carta 1: %.2f km²\n", area1);
        printf("Carta 2: %.2f km²\n", area2);
        if (area1 > area2)
            printf("Resultado: Carta 1 venceu!\n");
        else if (area2 > area1)
            printf("Resultado: Carta 2 venceu!\n");
        else
            printf("Empate!\n");
        break;

    case 3:
        printf("PIB:\n");
        printf("Carta 1: %.2f bilhões de reais\n", pib1);
        printf("Carta 2: %.2f bilhões de reais\n", pib2);
        if (pib1 > pib2)
            printf("Resultado: Carta 1 venceu!\n");
        else if (pib2 > pib1)
            printf("Resultado: Carta 2 venceu!\n");
        else
            printf("Empate!\n");
        break;

    case 4:
        printf("Pontos turísticos:\n");
        printf("Carta 1: %d\n", pontosturisticos1);
        printf("Carta 2: %d\n", pontosturisticos2);
        if (pontosturisticos1 > pontosturisticos2)
            printf("Resultado: Carta 1 venceu!\n");
        else if (pontosturisticos2 > pontosturisticos1)
            printf("Resultado: Carta 2 venceu!\n");
        else
            printf("Empate!\n");
        break;

    case 5:
        printf("Densidade populacional:\n");
        printf("Carta 1: %.2f habitantes/km²\n", densidade1);
        printf("Carta 2: %.2f habitantes/km²\n", densidade2);
        if (densidade1 > densidade2)
            printf("Resultado: Carta 1 venceu!\n");
        else if (densidade2 > densidade1)
            printf("Resultado: Carta 2 venceu!\n");
        else
            printf("Empate!\n");
        break;

    case 6:
        printf("PIB per capita:\n");
        printf("Carta 1: %.2f reais\n", percapita1);
        printf("Carta 2: %.2f reais\n", percapita2);
        if (percapita1 > percapita2)
            printf("Resultado: Carta 1 venceu!\n");
        else if (percapita2 > percapita1)
            printf("Resultado: Carta 2 venceu!\n");
        else
            printf("Empate!\n");
        break;

    default:
        printf("Opção inválida. Encerrando comparação.\n");
        break;
    }

    printf("\nFim do jogo Super Trunfo!!\n");
    printf("Obrigado por jogar!\n");

    return 0;
}