#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

    int populacao1, turismo1, populacao2, turismo2;
    float area1, pib1, area2, pib2, pibcapita1, pibcapita2, densidade1, densidade2;
    char cidade1[20], codigo1[20], estado1[20], cidade2[20], codigo2[20], estado2[20];

  // Área para entrada de dados

  printf("Digite os dados da CARTA 1\n");

    printf("Digite o Estado: ");
    scanf("%s", estado1);

    printf("Digite o Codigo da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &turismo1);

    
    printf("Digite os dados da CARTA 2\n");

    printf("Digite o Estado: ");
    scanf("%s", estado2);

    printf("Digite o Codigo da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &turismo2);
  
    //Calcular a Densidade Populacional

    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    //Calcular o PIB per Capita
    pibcapita1 = (pib1 * 1000000000) / populacao1;
    pibcapita2 = (pib2 * 1000000000) / populacao2;
  
  // Área para exibição dos dados da cidade

    printf("CARTA 1:\n");
    printf("Estado: %s \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d \n", turismo1);
    printf("Densidade Populacional: %.2f hab/km\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibcapita1);

    printf("CARTA 2:\n");
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d \n", turismo2);
    printf("Densidade Populacional: %.2f hab/km\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibcapita2);
  
return 0;
} 
// Implementação do nível Novato com cadastro de duas cartas
// Estrutura será otimizada nos próximos níveis do desafio
