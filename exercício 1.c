#include <stdio.h>

int main() {
  int ddd;

  printf("Digite o número de DDD: ");
  scanf("%d", &ddd);

  switch (ddd) {
  case 61:
    printf("\n Brasilia");
    break;
  case 71:
    printf("\n Salvador");
    break;
  case 11:
    printf("\n Sao Paulo \n");
    break;
  case 21:
    printf("\n Rio de Janeiro \n");
    break;
  case 32:
    printf("\n Juiz de Fora");
    break;
  case 19:
    printf("\n Campinas");
    break;
  case 27:
    printf("Vitória\n");
    break;
  case 31:
    printf("Belo Horizonte\n");
    break;
  default:
    printf("\n Uma cidade no Brasil sem identificacao \n");
  }

  return 0;

}
