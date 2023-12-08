#include <stdio.h>

int main() {
  int codigoItem;
  int quantidade;
  float precoUnitario;

  printf("Digite o código do item (100 a 104): \n");
  scanf("%d", &codigoItem);

  switch (codigoItem) {
  case 100:
    precoUnitario = 10.10;
    break;

  case 101:
    precoUnitario = 8.30;
    break;

  case 102:
    precoUnitario = 8.50;
    break;

  case 103:
    precoUnitario = 12.50;
    break;

  case 104:
    precoUnitario = 13.25;
    break;

  default:
    printf("\n Codigo de item invalido \n");
    return 1;
  }

  printf("\n Digite a quantidade desejada: \n");
  scanf("%d", &quantidade);

  float valorTotal = precoUnitario * quantidade;
  printf("\n Valor a ser pago: R$%.2f \n", valorTotal);

  return 0;
}
