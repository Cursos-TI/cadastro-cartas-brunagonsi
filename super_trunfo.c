#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados de cada carta
struct Carta {
    char estado;               // Letra de 'A' a 'H'
    char codigo[4];            // Ex: "A01"
    char nomeCidade[50];       // Nome da cidade
    int populacao;             // Número de habitantes
    float area;                // Área em km²
    float pib;                 // PIB em bilhões
    int pontosTuristicos;      // Número de pontos turísticos
};

int main() {
    struct Carta carta1, carta2;

    printf("===== Cadastro de Cartas Super Trunfo =====\n\n");

    // Cadastro da primeira carta
    printf("Cadastro da Carta 1:\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    getchar(); // limpar buffer
    printf("Digite o nome da cidade: ");
    fgets(carta1.nomeCidade, 50, stdin);
    carta1.nomeCidade[strcspn(carta1.nomeCidade, "\n")] = 0;

    printf("Digite a populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a area (km²): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &carta1.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    getchar(); // limpar buffer antes de ler strings novamente

    // Cadastro da segunda carta
    printf("\nCadastro da Carta 2:\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    getchar();
    printf("Digite o nome da cidade: ");
    fgets(carta2.nomeCidade, 50, stdin);
    carta2.nomeCidade[strcspn(carta2.nomeCidade, "\n")] = 0;

    printf("Digite a populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a area (km²): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &carta2.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibição dos dados
    printf("\n===== Dados Cadastrados =====\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
