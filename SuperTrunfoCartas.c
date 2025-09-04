#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração das variáveis para a carta 01
    char estado01;
    char codigo01[4];
    char nomeCidade01[50];
    unsigned long int populacao01;
    float area01;
    float pib01;
    int pontosTuristicos01;
    float densidade01;

    // Declaração das variáveis para a carta 02
    char estado02;
    char codigo02[4];
    char nomeCidade02[50];
    unsigned long int populacao02;
    float area02;
    float pib02;
    int pontosTuristicos02;
    float densidade02;

    // Leitura dos dados da carta 01
    printf("Insira os dados da carta 01:\n");
    printf("Estado A-H: ");
    scanf(" %c", &estado01);
    printf("Código da Carta: ");
    scanf("%3s", codigo01);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade01);
    printf("Número de habitantes: ");
    scanf("%lu", &populacao01);
    printf("Tamanho da Área (km²): ");
    scanf("%f", &area01);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib01);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos01);

    densidade01 = (float)populacao01 / area01;

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

    densidade02 = (float)populacao02 / area02;

    // Menu interativo para escolher o atributo
    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s e %s pelo atributo escolhido:\n", nomeCidade01, nomeCidade02);

    switch (opcao) {
        case 1: // População
            printf("População:\n");
            printf("%s: %lu\n", nomeCidade01, populacao01);
            printf("%s: %lu\n", nomeCidade02, populacao02);
            if (populacao01 > populacao02) {
                printf("Vencedor: %s\n", nomeCidade01);
            } else if (populacao02 > populacao01) {
                printf("Vencedor: %s\n", nomeCidade02);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Área (km²):\n");
            printf("%s: %.2f\n", nomeCidade01, area01);
            printf("%s: %.2f\n", nomeCidade02, area02);
            if (area01 > area02) {
                printf("Vencedor: %s\n", nomeCidade01);
            } else if (area02 > area01) {
                printf("Vencedor: %s\n", nomeCidade02);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("PIB (bilhões de reais):\n");
            printf("%s: %.2f\n", nomeCidade01, pib01);
            printf("%s: %.2f\n", nomeCidade02, pib02);
            if (pib01 > pib02) {
                printf("Vencedor: %s\n", nomeCidade01);
            } else if (pib02 > pib01) {
                printf("Vencedor: %s\n", nomeCidade02);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Número de pontos turísticos:\n");
            printf("%s: %d\n", nomeCidade01, pontosTuristicos01);
            printf("%s: %d\n", nomeCidade02, pontosTuristicos02);
            if (pontosTuristicos01 > pontosTuristicos02) {
                printf("Vencedor: %s\n", nomeCidade01);
            } else if (pontosTuristicos02 > pontosTuristicos01) {
                printf("Vencedor: %s\n", nomeCidade02);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (menor vence)
            printf("Densidade demográfica (habitantes/km²):\n");
            printf("%s: %.2f\n", nomeCidade01, densidade01);
            printf("%s: %.2f\n", nomeCidade02, densidade02);
            if (densidade01 < densidade02) {
                printf("Vencedor: %s\n", nomeCidade01);
            } else if (densidade02 < densidade01) {
                printf("Vencedor: %s\n", nomeCidade02);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, escolha uma opção entre 1 e 5.\n");
            break;
    }

    return 0;
}
