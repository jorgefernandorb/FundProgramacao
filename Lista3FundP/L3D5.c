#include <stdio.h>
int primo (int x){
  if(x==1){
    return 0;
  }
  else{
    for (int i=2; i<x; i++){
      if(x%i==0){
        return 0;
      }
    }
    return x;
  }
}

int somaprimo (int x, int y){
  int soma=0;
  for (int i=x; i<=y; i++){
    soma = soma + primo(i);
  }
  return soma;
  
}

int main(void) {
  int a, b, c;
  printf("Digite um intervalos de números.\n");
  scanf("%d", &a);
  scanf("%d", &b);
  c = somaprimo (a, b);
  printf("A soma dos primos nesse interval é: %d", c);
  return 0;
}