#include <stdio.h>
#include <string.h>

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50], cidadeVencedora[50];
    unsigned long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    double area1, area2, pib1, pib2, densidade_populacional1, densidade_populacional2, percap1, percap2;
    float superPoder1, superPoder2; 
    
    // Cadastro das Cartas:
    // Área para entrada de dados | Adição da primeira carta 

    printf("*---* Bem vindo ao jogo Super Trunfo *---*\n");
    printf("\nPara começar, digite os dados da sua carta.\n");

    printf("Digite o estado (A - H): ");
    scanf("%c", &estado1);

    printf("Agora o código da carta (use a letra do estado mais dois números de 01-04): ");
    scanf("%s", codigo1);

    printf("Qual é o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digte o número da população: ");
    scanf("%ld", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%lf", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%lf", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("\n");

    // Adição da segunda carta 

    printf("Digite o estado (A - H): ");
    scanf(" %c", &estado2);

    printf("Agora o código da carta (use a letra do estado mais dois números de 01-04): ");
    scanf("%s", codigo2);

    printf("Qual é o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digte o número da população: ");
    scanf("%ld", &populacao2);

    printf("Digite a área em km²: ");
    scanf("%lf", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%lf", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    //Cálculos lógicos

    densidade_populacional1 = (double) populacao1 / area1;
    densidade_populacional2 = (double) populacao2 / area2;

    percap1 = (double) pib1 * 1000000000.0 / populacao1;
    percap2 = (double) pib2 * 1000000000.0 / populacao2;
    
    // Comparação de Cartas:

    printf("\n\nComparação de cartas (Atributo: População):\n\n");
    printf("Carta 1: %s. População: %lu\n", cidade1, populacao1);
    printf("Carta 2: %s. População: %lu\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
         printf("Cidade 1 (%s) tem a maior população.\n", cidade1);
         strcpy(cidadeVencedora, cidade1);
    } else {
         printf("Cidade 2 (%s) tem a maior população.\n", cidade2);
         strcpy(cidadeVencedora, cidade2);
    }
    // Exibição carta vencedora

    printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
