#include <stdio.h>

int main(void) {
  int n, m;
  printf("Digite um número.\n");
  scanf("%d", &n);
  m=n;
  for(int i=n-1; i>0; i--){
    n = n*i;
  }
  printf("O fatorial de %d é: %d!\n", m, n);
  return 0;
}