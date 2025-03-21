#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char A, A01[4], Recife[50];
    int populacao = 12345000, PontosTuristicos = 50;
    float area1 = 220 , pib1 = 55000000000.00;

    // Entrada de dados para a primeira carta
    printf("Digite o estado da Carta 1 (A-H): ");
    scanf(" %c", &A);
    
    printf("Digite o código da Carta 1 (ex: A01): ");
    scanf("%s", A01);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", Recife);

    printf("Digite a população da Carta 1: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade da Carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade da Carta 1 (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &PontosTuristicos);

    // Declaração das variáveis para a segunda carta
    char B, B02[4], Fortaleza[50];
    int populacao2 = 2000000, pontosTuristicos2 = 70;
    float area2 = 400, pib2 = 60000000.00;

    // Entrada de dados para a segunda carta
    printf("\nDigite o estado da Carta 2 (A-H): ");
    scanf(" %c", &B);
    
    printf("Digite o código da Carta 2 (ex: B02): ");
    scanf("%s", B02);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", Fortaleza);

    printf("Digite a população da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade da Carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade da Carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", A);
    printf("Código: %s\n", A01);
    printf("Nome da Cidade: %s\n", Recife);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", B);
    printf("Código: %s\n", B02);
    printf("Nome da Cidade: %s\n", Fortaleza);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}