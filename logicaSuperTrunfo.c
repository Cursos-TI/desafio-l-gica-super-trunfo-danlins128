#include <stdio.h>
#include <string.h>

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50], cidadeVencedora[50];
    unsigned long int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2, escolha;
    double area1, area2, pib1, pib2, densidade_populacional1, densidade_populacional2, revert_densidade1, revert_densidade2, percap1, percap2;
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

    revert_densidade1 = 1.0 / densidade_populacional1;
    revert_densidade2 = 1.0 / densidade_populacional2;

    // Exibição das cartas

    // Carta 01

    printf("\nCarta 01\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("Pib per Capita: %.2f reais\n\n", percap1);

    // Carta 02

    printf("Carta 02\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);    
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("Pib per Capita: %.2f reais\n\n", percap2);

    printf("Escolha a opção do atributo da carta para comparar.\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turistícos\n");
    printf("5 - Densidade demográfica\n");   
    printf("6 - Sair\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("\nComparação de cartas (Atributo: População):\n");
        printf("Carta 1: %s. População: %lu\n", cidade1, populacao1);
        printf("Carta 2: %s. População: %lu\n", cidade2, populacao2);

        if (populacao1 > populacao2) {
            printf("Cidade 1 (%s) tem a maior população.\n", cidade1);
            strcpy(cidadeVencedora, cidade1);
        } else if (populacao1 < populacao2){
            printf("Cidade 2 (%s) tem a maior população.\n", cidade2);
            strcpy(cidadeVencedora, cidade2);
        } else {
            printf("Houve um EMPATE!");
        }
        break;
    case 2:
        printf("\nComparação de cartas (Atributo: Área):\n");
        printf("Carta 1: %s. Área: %.2f\n", cidade1, area1);
        printf("Carta 2: %s. Área: %.2f\n", cidade2, area2);

        if (area1 > area2) {
            printf("Cidade 1 (%s) tem a maior Área.\n", cidade1);
            strcpy(cidadeVencedora, cidade1);
        } else if (area1 < area2){
            printf("Cidade 2 (%s) tem a maior Área.\n", cidade2);
            strcpy(cidadeVencedora, cidade2);
        } else {
            printf("Houve um EMPATE!");
        }
        break;
    case 3:
        printf("\nComparação de cartas (Atributo: PIB):\n");
        printf("Carta 1: %s. PIB: %.2f\n", cidade1, pib1);
        printf("Carta 2: %s. PIB: %.2f\n", cidade2, pib2);

        if (pib1 > pib2) {
            printf("Cidade 1 (%s) tem o maior PIB.\n", cidade1);
            strcpy(cidadeVencedora, cidade1);
        } else if (pib1 < pib2){
            printf("Cidade 2 (%s) tem o maior PIB.\n", cidade2);
            strcpy(cidadeVencedora, cidade2);
        } else {
            printf("Houve um EMPATE!");
        }
        break;
    case 4:
        printf("\nComparação de cartas (Atributo: Pontos turísticos):\n");
        printf("Carta 1: %s. Pontos turísticos: %d\n", cidade1, pontos_turisticos1);
        printf("Carta 2: %s. Pontos turísticos: %d\n", cidade2, pontos_turisticos2);

        if (pontos_turisticos1 > pontos_turisticos2 ) {
            printf("Cidade 1 (%s) tem mais pontos turísticos.\n", cidade1);
            strcpy(cidadeVencedora, cidade1);
        } else if (pontos_turisticos1 < pontos_turisticos2){
            printf("Cidade 2 (%s) tem mais pontos turísticos.\n", cidade2);
            strcpy(cidadeVencedora, cidade2);
        } else {
            printf("Houve um EMPATE!");
        }
        break;
    case 5:
        printf("\nComparação de cartas (Atributo: Densidade demográfica):\n");
        printf("Carta 1: %s. Densidade demográfica: %f\n", cidade1, revert_densidade1);
        printf("Carta 2: %s. Densidade demográfica: %f\n", cidade2, revert_densidade2);

        if (revert_densidade1 < revert_densidade2) {
            printf("Cidade 1 (%s) tem a maior densidade demográfica.\n", cidade1);
            strcpy(cidadeVencedora, cidade1);
        } else if (revert_densidade2 > revert_densidade1){
            printf("Cidade 2 (%s) tem a maior densidade demográfica.\n", cidade2);
            strcpy(cidadeVencedora, cidade2);
        } else {
            printf("Houve um EMPATE!");
        }
        break;
    case 6:
        printf("Saindo...");
        break;
    
    default:
        break;
    }
        
    // Exibição carta vencedora

    printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
