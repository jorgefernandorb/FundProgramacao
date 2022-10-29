#include <stdio.h>
void primo (int x){
  if(x==1){
    printf("Não é primo!!!\n");
    return;
  }
  else{
    for (int i=2; i<x; i++){
    if(x%i==0){
      printf("Não é primo!!!\n");
      return;
    }
  }
  printf("É primo!!!\n");
  return;
  
  }
}
int main(void) {
  int n;
  printf("Digite um número\n");
  scanf("%d", &n);
  primo(n);
  return 0;
}