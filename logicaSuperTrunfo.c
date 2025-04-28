#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[8];
    char nomecidade1[30];
    int populacao1, pontosturisticos1;
    float area1, pib1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[8];
    char nomecidade2[30];
    int populacao2, pontosturisticos2;
    float area2, pib2;

    // Variável para armazenar a cidade vencedora
    char cidadeVencedora[30];

    // Leitura dos dados da Carta 1
    printf("Cadastrando a carta 1\n\n");

    printf("Qual é o seu Estado? ");
    scanf(" %c", &estado1); // espaço antes de %c para ignorar '\n'

    printf("Código do Estado: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %s\n", &nomecidade1); // lê até a quebra de linha (com espaços)

    printf("Tamanho da área em (km²): \n");
    scanf("%f", &area1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("PIB do Estado (bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    printf("\n");

    // Leitura dos dados da Carta 2
    printf("Cadastrando a carta 2\n\n");

    printf("Qual é o seu Estado? ");
    scanf(" %c", &estado2);

    printf("Código do Estado: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %s\n", &nomecidade2);

    printf("Tamanho da área em (km²): \n");
    scanf("%f", &area2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("PIB do Estado (bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    printf("\n");

    // Exibição das cartas cadastradas
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosturisticos1);
    printf("\n");

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);
    printf("\n");

    // Determinar a vencedora
    if (populacao1 > populacao2) {
        printf("Carta 1 Vencedora!!\n");
    } else {
        printf("Carta 2 Vencedora!!\n");
    }

    printf("A cidade vencedora é: %d\n", cidadeVencedora);

    return 0;
}