#include <stdio.h>

int main(void) {
  int tAnimal;
  printf("Digite o tipo de animal de extimação possui?\n");
  printf("1-Gato\n");
  printf("2-Papagaio\n");
  printf("3-Cão\n");
  printf("4-Nenhum.\n");
  scanf("%d",&tAnimal);

  switch (tAnimal){
    case 1:
    printf("Valor do condominio: R$%.2f\n", 350.0+30.0);
    break;
    case 2:
    printf("Valor do condominio: R$%.2f\n", 350.0+12.0);
    break;
    case 3:
    printf("Valor do condominio: R$%.2f\n", 350.0+50.0);
    break;
    case 4:
    printf("Valor do condominio: R$%.2f\n", 350.0-20.0);
    break;
    default :
    printf("Tipo invalido!\n");
  }
  return 0;
}