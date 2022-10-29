#include <stdio.h>

int main(void) {
  int a, c= 0;
  printf("Digite um númeor inteiro.\n");
  scanf("%d", &a);
  if(a % 10 == 0){
    printf("É divisivel por 10.\n");
    c=1;
  }
  if(a % 5 == 0){
    printf("É divisivel por 5.\n");
    c=1;
  }
  if(a % 2 == 0){
    printf("É divisivel por 2.\n");
    c=1;
  }
  if(c != 1){
    printf("Não é divisivel por 10, 5 ou 2.\n");
  }
  return 0;
}