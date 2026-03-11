#include <stdio.h> // Biblioteca padrão para usar printf e scanf

// Função principal do programa
int main() {

    // -------- Declaração das variáveis da Carta 1 --------
    char estado1;              // Armazena a letra do estado (A-H)
    char codigo1[4];           // Armazena o código da carta (ex: A01)
    char cidade1[50];          // Armazena o nome da cidade
    int populacao1;            // Armazena a população da cidade
    float area1;               // Armazena a área da cidade em km²
    float pib1;                // Armazena o PIB da cidade
    int pontosTuristicos1;     // Quantidade de pontos turísticos

    // -------- Declaração das variáveis da Carta 2 --------
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // -------- Entrada de dados da Carta 1 --------
    printf("Cadastro da Carta 1\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // Lê um caractere representando o estado

    printf("Codigo da carta: ");
    scanf("%s", codigo1); // Lê o código da carta

    printf("Nome da cidade: ");
    scanf("%s", cidade1); // Lê o nome da cidade

    printf("Populacao: ");
    scanf("%d", &populacao1); // Lê a população da cidade

    printf("Area (km2): ");
    scanf("%f", &area1); // Lê a área da cidade

    printf("PIB: ");
    scanf("%f", &pib1); // Lê o PIB da cidade

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1); // Lê a quantidade de pontos turísticos

    // -------- Entrada de dados da Carta 2 --------
    printf("\nCadastro da Carta 2\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // -------- Exibição dos dados cadastrados --------
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos2);

    return 0; // Indica que o programa terminou corretamente
}
