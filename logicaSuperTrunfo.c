#include <stdio.h>

int main() {

    //Desafio Super Trunfo!!//

    printf("Desafio Super Trunfo!!\n\n");
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
    float superPoder1;
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
    float superPoder2;
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
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;
    percapita1 = (pib1 * 1000000000.0f) / populacao1; // em reais
    percapita2 = (pib2 * 1000000000.0f) / populacao2; // em reais

    // Cálculo do super poder da carta 1
    superPoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + percapita1, densidade1 / densidade1;

    // Cálculo do super poder da carta 2
    superPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + percapita2, densidade2 / densidade2;



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
    printf("PIB per capita da carta 1: %.2f reais\n", percapita1);
     printf("Super Poder da carta 1: %.2f\n", superPoder1);
    printf("\n");
 
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2); 
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional da carta 2: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita da carta 2: %.2f reais\n", percapita2);
    printf("Super Poder da carta 2: %.2f\n", superPoder2);
    printf("\n");



    // Comparando as cartas
    printf("Comparando as Cartas!!\n\n");

    resultado1 = populacao1 > populacao2;
    resultado2 = populacao2 > populacao1;
    printf("População: Carta %d Venceu!\n", (populacao1 > populacao2) ? 1 : 2);

    resultado1 = area1 > area2;
    resultado2 = area2 > area1;
    printf("Àrea: Carta %d Venceu!\n", (area1 > area2) ? 1 : 2);


    resultado1 = pib1 > pib2;
    resultado2 = pib2 > pib1;
    printf("PIB: A Carta %d Venceu!\n", (pib1 > pib2) ? 1 : 2);
    

    resultado1 = pontosturisticos1 > pontosturisticos2;
    resultado2 = pontosturisticos2 > pontosturisticos1;
    printf("Pontos Turísticos: A Carta %d Venceu!\n", (pontosturisticos1 > pontosturisticos2) ? 1 : 2);
    

    resultado1 = percapita1 > percapita2;
    resultado2 = percapita2 > percapita1;
    printf("PIB per Capita: A Carta %d Venceu!\n", (percapita1 > percapita2) ? 1 : 2);


    resultado1 = densidade1 > densidade2;
    resultado2 = densidade2 > densidade1;
    printf("Densidade Populacional: A Carta %d Venceu!\n", (densidade1 > densidade2) ? 1 : 2);
    

    resultado1 = superPoder1 > superPoder2;
    resultado2 = superPoder2 > superPoder1;
    printf("Super Poder: A Carta %d Venceu!\n", (superPoder1 > superPoder2) ? 1 : 2);
    
    
    return 0;
}

