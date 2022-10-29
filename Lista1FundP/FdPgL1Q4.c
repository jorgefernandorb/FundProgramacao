#include <stdio.h>

int main(void) {
  int a, b, c;
  printf("Digite dois números inteiros.\n");
  scanf("%d", &a);
  scanf("%d", &b);
  if (a == b){
    c = a + b;
  }
  else{
    c = a * b;
  }
  printf("O valor de c é: %d", c);
  return 0;
}