#include <stdio.h>

int main(void) {
  int a, b, soma=0;
  printf("Digite n e uma sequencia de n números.\n");
  scanf("%d", &a);
  for(int i=0; i<a; i++){
    scanf("%d", &b);
    if(b%2==0){
      soma=soma+b;
    }
  }
  printf("A soma do valores par da sequência é: %d!", soma);
  return 0;
}