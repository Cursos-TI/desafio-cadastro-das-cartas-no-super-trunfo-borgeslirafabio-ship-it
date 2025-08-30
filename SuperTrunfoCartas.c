#include <stdio.h>

int main() {
    // Declaração das variáveis para a carta 01
    char estado01;
    char codigo01[4];
    char nomeCidade01[50];
    unsigned long int populacao01;
    float area01;
    float pib01;
    int pontosTuristicos01;
    float quocientedensidade01;
    float quocientepib01;
    float superPoder01;

    // Declaração das variáveis para a carta 02
    char estado02;
    char codigo02[4];
    char nomeCidade02[50];
    unsigned long int populacao02;
    float area02;
    float pib02;
    int pontosTuristicos02;
    float quocientedensidade02;
    float quocientepib02;
    float superPoder02;

    // Leitura dos dados da carta 01
    printf("Insira os dados da carta 01:\n");

    printf("Estado A-H: ");
    scanf(" %c", &estado01);

    printf("Código da Carta: ");
    scanf("%3s", codigo01);  // Limita a 3 caracteres + '\0'

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade01);

    printf("Número de habitantes: ");
    scanf("%lu", &populacao01);  // %lu para unsigned long int

    printf("Tamanho da Área (km²): ");
    scanf("%f", &area01);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib01);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos01);

    // Cálculos para carta 01
    quocientepib01 = pib01 / (float)populacao01;
    quocientedensidade01 = (float)populacao01 / area01;

    // Leitura dos dados da carta 02
    printf("\nInsira os dados da carta 02:\n");

    printf("Estado A-H: ");
    scanf(" %c", &estado02);

    printf("Código da Carta: ");
    scanf("%3s", codigo02);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade02);

    printf("Número de habitantes: ");
    scanf("%lu", &populacao02);

    printf("Tamanho da Área (km²): ");
    scanf("%f", &area02);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib02);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos02);

    // Cálculos para carta 02
    quocientepib02 = pib02 / (float)populacao02;
    quocientedensidade02 = (float)populacao02 / area02;

    // Cálculo do Super Poder (soma dos atributos numéricos)
    superPoder01 = (float)populacao01 + area01 + pib01 + (float)pontosTuristicos01 + quocientepib01 + (1.0f / quocientedensidade01);
    superPoder02 = (float)populacao02 + area02 + pib02 + (float)pontosTuristicos02 + quocientepib02 + (1.0f / quocientedensidade02);

    // Exibição dos dados da Carta 01
    printf("\nCarta 01\n");
    printf("Estado: %c\n", estado01);
    printf("Código da Carta: %s\n", codigo01);
    printf("Nome da Cidade: %s\n", nomeCidade01);
    printf("Número de habitantes: %lu\n", populacao01);
    printf("Tamanho da Área: %.2f km²\n", area01);
    printf("PIB: %.2f bilhões de reais\n", pib01);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos01);
    printf("PIB per capita: %.6f\n", quocientepib01);
    printf("Densidade Populacional: %.6f habitantes/km²\n", quocientedensidade01);
    printf("Super Poder: %.6f\n", superPoder01);

    // Exibição dos dados da Carta 02
    printf("\nCarta 02\n");
    printf("Estado: %c\n", estado02);
    printf("Código da Carta: %s\n", codigo02);
    printf("Nome da Cidade: %s\n", nomeCidade02);
    printf("Número de habitantes: %lu\n", populacao02);
    printf("Tamanho da Área: %.2f km²\n", area02);
    printf("PIB: %.2f bilhões de reais\n", pib02);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos02);
    printf("PIB per capita: %.6f\n", quocientepib02);
    printf("Densidade Populacional: %.6f habitantes/km²\n", quocientedensidade02);
    printf("Super Poder: %.6f\n", superPoder02);

    // Comparações
    printf("\nComparações das cartas\n");

    // População: maior vence
    int popVence = (populacao01 > populacao02);
    printf("População: Carta 01 venceu (%d)\n", popVence);

    // Área: maior vence
    int areaVence = (area01 > area02);
    printf("Área: Carta 01 venceu (%d)\n", areaVence);

    // PIB: maior vence
    int pibVence = (pib01 > pib02);
    printf("PIB: Carta 01 venceu (%d)\n", pibVence);

    // Pontos Turísticos: maior vence
    int pontosVence = (pontosTuristicos01 > pontosTuristicos02);
    printf("Pontos Turísticos: Carta 01 venceu (%d)\n", pontosVence);

    // Densidade Populacional: menor vence
    int densidadeVence = (quocientedensidade01 < quocientedensidade02);
    printf("Densidade Populacional: Carta 01 venceu (%d)\n", densidadeVence);

    // PIB per Capita: maior vence
    int pibPerCapitaVence = (quocientepib01 > quocientepib02);
    printf("PIB per Capita: Carta 01 venceu (%d)\n", pibPerCapitaVence);

    // Super Poder: maior vence
    int superPoderVence = (superPoder01 > superPoder02);
    printf("Super Poder: Carta 01 venceu (%d)\n", superPoderVence);

    return 0;
}
