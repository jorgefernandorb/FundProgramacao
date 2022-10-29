#include <stdio.h>
int potencia (int x, int y){
  int z=x;
  if(y==0){
    return 1;
  }
  for(int i=1; i<y; i++){
    z=z*x;
  }
  return z;
}
int main(void) {
  int a, b, c;
  printf("Digite dois números inteiros.\n");
  scanf("%d", &a);
  scanf("%d", &b);
  printf("O resultado de %d elevado a %d, é: %d!", a, b, potencia(a, b));
  return 0;
}