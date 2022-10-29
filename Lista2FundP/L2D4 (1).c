#include <stdio.h>

int main(void) {
  int op;
  double a, b;
  printf("Digite dois números a e b.\n");
  scanf("%lf", &a);
  scanf("%lf", &b);
  do{
    printf("Digite um número para operação de 1 a 4.\n");
    scanf("%d", &op);
  }while(op<1 || op>4);
  switch(op){
    case 1:
      printf("A soma: %.1f + %.1f = %.1f!\n", a, b, a+b);
    break;
    case 2:
      printf("A subtração: %.1f - %.1f = %.1f!\n", a, b, a-b);
    break;
    case 3:
      printf("A multiplicação: %.1f * %.1f = %.1f!\n", a, b, a*b);
    break;
    case 4:
      printf("A divisão: %.1f / %.1f = %.1f!\n", a, b, a/b);
    break;
  }
  return 0;
}