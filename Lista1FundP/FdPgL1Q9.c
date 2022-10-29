#include <stdio.h>
#include <ctype.h>

int main(void) {
  char conceito;
  printf("Digite o conceito.\n");
  scanf("%c", &conceito);
  conceito = tolower(conceito);
  if(conceito == 'a' || conceito == 'b' || conceito == 'c'){
    printf("Aprovado!!!\n");
  }
  else{
    printf("Reprovado.\n");
  }
  return 0;
}