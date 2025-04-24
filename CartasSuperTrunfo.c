#include <stdio.h>

int main() {
    // Primeira carta
    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int ponto_turistico1;

    // Segunda carta
    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int ponto_turistico2;

    printf("Bem-vindo! Serão feitas algumas perguntas.\n");
    printf("Por favor, forneça as informações necessárias:\n\n");

    // Primeira carta
    printf("Informe uma letra de um Estado de (A-H): ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta (ex: B01): ");
    scanf("%s", codigo1);

    getchar(); // Limpa o buffer antes do fgets (nao sei se poderia usar)

    printf("Informe o nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Informe a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &ponto_turistico1);

    // Segunda carta
    printf("Informe a segunda letra de um Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta (ex: B01): ");
    scanf("%s", codigo2);

    getchar(); 

    printf("Informe o nome da cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Informe a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &ponto_turistico2);

    // Exibição dos dados
    printf("\n--- Informações da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", ponto_turistico1);

    printf("\n--- Informações da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", ponto_turistico2);

    return 0;
}
