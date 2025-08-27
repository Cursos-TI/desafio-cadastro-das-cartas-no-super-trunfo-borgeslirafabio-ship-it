#include <stdio.h>

int main() 
{
    
    // Declaração das variáveis para a carta 01
    char estado01;
    char codigo01[4];
    char nomeCidade01[50];
    int populacao01;
    float area01;
    float pib01;
    int pontosTuristicos01;

    // Leitura dos dados da carta 01
    printf("Insira os dados da carta 01:\n");
    
    printf("Estado A-H: ");
    scanf(" %c", &estado01); // O espaço antes de %c ignora caracteres de nova linha

    printf("Código da Carta: ");
    scanf("%s", codigo01); // Não precisa de & para arrays

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade01); // Lê até a nova linha

    printf("Número de habitantes: ");
    scanf("%d", &populacao01); 

    printf("Tamanho da Área (km²): ");
    scanf("%f", &area01); 

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib01); 

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos01); 

    // Declaração das variáveis para carta 02
    char estado02;
    char codigo02[4];
    char nomeCidade02[50];
    int populacao02;
    float area02;
    float pib02;
    int pontosTuristicos02;

    // Leitura dos dados da carta 02
    printf("\nInsira os dados da carta 02:\n");
    
    printf("Estado A-H: ");
    scanf(" %c", &estado02); 

    printf("Código da Carta: ");
    scanf("%s", codigo02);  

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade02); 

    printf("Número de habitantes: ");
    scanf("%d", &populacao02);

    printf("Tamanho da Área (km²): ");
    scanf("%f", &area02); 

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib02); 
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos02); 

    // Exibição dos dados da Carta 01
    printf("\nCarta 01\n");
    printf("Estado: %c\n", estado01);
    printf("Código da Carta: %s\n", codigo01);
    printf("Nome da Cidade: %s\n", nomeCidade01);
    printf("Número de habitantes: %d\n", populacao01);
    printf("Tamanho da Área: %.2f km²\n", area01);
    printf("PIB: %.2f bilhões de reais\n", pib01);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos01);

    // Exibição dos dados da Carta 02
    printf("\nCarta 02\n");
    printf("Estado: %c\n", estado02);
    printf("Código da Carta: %s\n", codigo02);
    printf("Nome da Cidade: %s\n", nomeCidade02);
    printf("Número de habitantes: %d\n", populacao02);
    printf("Tamanho da Área: %.2f km²\n", area02);
    printf("PIB: %.2f bilhões de reais\n", pib02);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos02);

    return 0;
}
