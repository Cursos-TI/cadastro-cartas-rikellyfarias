#include <stdio.h>

int main() {
  
  int carta1 = 1;
  char estado1[10] = "Alagoas";
  char codigo1[5] = "A01";
  char cidade1[10] = "Arapiraca";
  int populaçao1;
  float area1;
  float pib1;
  int turismo1;

  printf("Carta: %d\nEstado: %s\nCódigo: %s\nCidade: %s\n", carta1, estado1, codigo1, cidade1);
  //printf irá imprimir as váriaveis

  printf("Digite a População da Cidade: ");
  scanf("%d", &populaçao1);

  printf("Digire a Área: ");
  scanf("%f", &area1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);

  printf("Digite o Número de Pontos Turísticos: ");
  scanf("%d", &turismo1);

  printf("\nCarta: %d\nEstado: %s\nCódigo da Carta: %s\nCidade: %s\n", carta1, estado1, codigo1, cidade1);
  printf("População: %d\nÁrea: %f km²\nPIB: %f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", populaçao1, area1, pib1, turismo1);
  //printf irá imprimir as variaveis e as informações que o usúario adicionou no scanf na carta 1

  int carta2 = 2;
  char estado2[10] = "Bahia";
  char codigo2[5] = "A02";
  char cidade2[10] = "Salvador";
  int populaçao2;
  float area2;
  float pib2;
  int turismo2;

  printf("Carta: %d\nEstado: %s\nCódigo: %s\nCidade: %s\n", carta2, estado2, codigo2, cidade2);
  //printf irá imprimir as váriaveis

  printf("Digite a População da Cidade: ");
  scanf("%d", &populaçao2);

  printf("Digire a Área: ");
  scanf("%f", &area2);

  printf("Digite o PIB: ");
  scanf("%f", &pib2);

  printf("Digite o Número de Pontos Turísticos: ");
  scanf("%d", &turismo2);

  printf("\nCarta: %d\nEstado: %s\nCódigo da Carta: %s\nCidade: %s\n", carta2, estado2, codigo2, cidade2);
  printf("População: %d\nÁrea: %f km²\nPIB: %f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", populaçao2, area2, pib2, turismo2);

return 0;
} 
