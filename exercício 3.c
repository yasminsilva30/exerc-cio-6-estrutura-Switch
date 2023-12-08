#include <stdio.h>

int main() {
  int escolhaPrato, escolhaSobremesa, escolhaBebida;
  float caloriasPrato, caloriasSobremesa, caloriasBebida;

  printf("Escolha o prato: ");
  scanf("%d", &escolhaPrato);

  printf("Escolha a sobremesa: ");
  scanf("%d", &escolhaSobremesa);

  printf("Escolha a bebida: ");
  scanf("%d", &escolhaBebida);

  switch (escolhaPrato) {
  case 1:
    caloriasPrato = 180;
  break;

  case 2:
    caloriasPrato = 230;
  break;

  case 3:
    caloriasPrato = 250;
  break;

  case 4:
    caloriasPrato = 350;
  break;

  default:
    printf("\n Escolha de prato invalida \n");
    return 1;
  }

  switch (escolhaSobremesa) {
  case 1:
    caloriasSobremesa = 75;
  break;

  case 2:
    caloriasSobremesa = 110;
  break;

  case 3:
    caloriasSobremesa = 170;
  break;

  case 4:
    caloriasSobremesa = 200;
  break;

  default:
    printf("\n Escolha de sobremesa invalida \n");
  return 1;
  }

  switch (escolhaBebida) {
  case 1:
    caloriasBebida = 20;
  break;

  case 2:
    caloriasBebida = 70;
  break;

  case 3:
    caloriasBebida = 100;
  break;

  case 4:
    caloriasBebida = 65;
  break;

  default:
    printf("\n Escolha de bebida invalida \n");
  return 1;
  }

  float totalCalorias = caloriasPrato + caloriasSobremesa + caloriasBebida;
  printf("\n A quantidade total de calorias da refeição eh: %.2f cal", totalCalorias);

  return 0;

}
