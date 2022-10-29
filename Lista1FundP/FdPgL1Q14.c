#include <stdio.h>

int main(void) {
  int a, b, c;
  char operador;
  printf("Digite dois números inteiros.\n");
  scanf("%d", &a);
  scanf("%d", &b);
  printf("Digite o operador.\n");
  scanf("%c", &operador);
  scanf("%c", &operador);
  switch (operador){
    case '+':
      c=a+b;
      printf("O resultado da soma é: %d\n", c);
      break;
    case '-':
      c=a-b;
      printf("O resultado da subtração é: %d\n", c);
      break;
    case '*':
      c=a*b;
      printf("O resultado da multiplicação é: %d\n", c);
      break;
    case '/':
      c=a/b;
      printf("O resultado da divisão é: %d\n", c);
      break;
    default :
      printf("Operador invalido");
  }

  return 0;
}