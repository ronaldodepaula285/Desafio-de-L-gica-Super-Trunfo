#include <stdio.h>

// Desafio Super Trunfo - Lógica
// Tema 1 - Cadastro das cartas
int main() {

  printf("****Super Trunfo****\n");
  printf("Insira os dados de duas cidades para criar as cartas!\n");
  printf("Depois, escolha dois atributos para comparar as cartas!\n");

  printf("\n-----Tema 1 - Cadastro das cartas-----\n");
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, pib_per_capita1;
    float densidade2, pib_per_capita2;
    double superpoder1, superpoder2;

    // Área para entrada de dados da primeira carta
    printf("\nCadastro da primeira carta:\n");
    printf("Digite uma letra para o Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da cidade (3 dígitos): ");
    scanf(" %3s", codigo1);
    printf("Digite o nome da cidade: ");    
    scanf(" %[^\n]", cidade1);
    printf("Digite a população da cidade: ");   
    scanf(" %d", &populacao1);
    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf(" %d", &pontos1);
    // Cálculo da densidade populacional e PIB per capita após entrada dos dados
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1e9) / (float)populacao1; // Convertendo PIB para reais
    superpoder1 = (populacao1 + area1 + pib1 + pontos1 + pib_per_capita1);
    // Área para entrada de dados da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Digite uma letra para o Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da cidade (3 dígitos): ");
    scanf(" %3s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao2);
    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib2);
    printf("Digite os pontos da cidade (0 a 100): ");
    scanf(" %d", &pontos2);
    // Cálculo da densidade populacional e PIB per capita após entrada dos dados
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1e9) / (float)populacao2; // Convertendo PIB para reais 
    superpoder2 = (populacao2 + area2 + pib2 + pontos2 + pib_per_capita2);

  printf("\n***Cadastro concluído com sucesso***\n");
  
  // Área para exibição dos dados das cidades
    printf("Carta: 01\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);
    printf("Super poder: %.2f\n", superpoder1);
  //
    printf("\nCarta: 02\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões de rais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);
    printf("Super poder: %.2f\n", superpoder2);

  //variaveis para armazenar os atributos a serem comparados
  int atributo1, atributo2;

  // Área para seleção do primeiro atributo a ser comparado
  printf("\n-----Tema 2 -Analisando a Jogada-----\n");
  printf("\nEscolha qual o primeiro atributo a ser comparado:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos turísticos\n");
  printf("5 - Densidade populacional\n");
  printf("6 - PIB per capita\n");
  printf("7 - Super poder\n");
  scanf(" %d", &atributo1);

  switch (atributo1)
  {
  case 1:
    atributo1 = populacao1 > populacao2 ? 1 : 0;
    printf("População escolhida!\n");
    break;
  case 2:
    atributo1 = area1 > area2 ? 1 : 0;
    printf("Área escolhida!\n");
    break;
  case 3:
    atributo1 = pib1 > pib2 ? 1 : 0;
    printf("PIB escolhido!\n");
    break;
  case 4:
    atributo1 = pontos1 > pontos2 ? 1 : 0;
    printf("Pontos turísticos escolhidos!\n");
    break;
  case 5:
    atributo1 = densidade1 < densidade2 ? 1 : 0; //menor densidade é melhor
    printf("Densidade populacional escolhida!\n");
    break;
  case 6:
    atributo1 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
    printf("PIB per capita escolhido!\n");
    break;
  case 7:
    atributo1 = superpoder1 > superpoder2 ? 1 : 0;
    printf("Super poder escolhido!\n");
    break;
  default: 
  printf("Opção inválida!\n");
    break;
  }

  // Área para seleção do segundo atributo a ser comparado
  printf("\nDigite qual o segundo atributo a ser comparado:\n");  
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos turísticos\n");
  printf("5 - Densidade populacional\n");
  printf("6 - PIB per capita\n");
  printf("7 - Super poder\n");
  scanf(" %d", &atributo2);

  if (atributo2 == atributo1) {
    printf("Atributo já selecionado! Escolha outro atributo.\n");
    return 0; // Encerra o programa se o mesmo atributo for escolhido
  }
  // Área para determinar o vencedor com base no primeiro atributo selecionado
  switch (atributo2)
  {
  case 1:
    atributo2 = populacao1 > populacao2 ? 1 : 0;
    printf("Populçação escolhida!\n");
    break;
  case 2:
    atributo2 = area1 > area2 ? 1 : 0;
    printf("Área escolhida!\n");
    break;
  case 3:
    atributo2 = pib1 > pib2 ? 1 : 0;
    printf("PIB escolhido!\n");
    break;
  case 4:
    atributo2 = pontos1 > pontos2 ? 1 : 0;
    printf("Pontos turísticos escolhidos!\n");
    break;
  case 5:
    atributo2 = densidade1 < densidade2 ? 1 : 0; //menor densidade é melhor
    printf("Densidade populacional escolhida!\n");
    break;
  case 6:
    atributo2 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
    printf("PIB per capita escolhido!\n");
    break;
  case 7:
    atributo2 = superpoder1 > superpoder2 ? 1 : 0;
    printf("Super poder escolhido!\n");
    break;
  default:
    printf("Opção inválida!\n");
    break;
  }
  printf("\n-----Campeão-----\n");
      //determinado o vencedor pelos atributuos escolhidos
    if (atributo1 == 1 && atributo2 == 1) {
        printf("\nParabéns: %s\n", cidade1);
    } else if (atributo1 == 0 && atributo2 == 0) {
        printf("\nParabéns: %s\n", cidade2);
    } else {
        printf("\nEmpate nos atributos escolhidos!\n");
    }
    
    printf("\n****Fim do programa****\n");
    
    
    return 0;
}