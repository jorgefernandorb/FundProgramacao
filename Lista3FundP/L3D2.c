#include <stdio.h>

int main(void) {
  int n;
  FILE *f;
  f = fopen("tabuada.txt", "a");
  printf("Digite um número.\n");
  scanf("%d", &n);
  if(f==0){
    printf("Banco de dados indisponivel.\n");
    return 1;
  }
  for(int i= 1; i<21; i++){
    fprintf(f, "%d x %d = %d\n", n, i, n*i);
  }
  fclose(f);
  return 0;
}