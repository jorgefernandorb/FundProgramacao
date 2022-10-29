#include <stdio.h>

int main(void) {
  int a, b, c, d=0;
  printf("Digite 3 número que deseje colocar em ordem crescente.\n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  if(a>b){
    d=a;
    a=b;
    b=d;
  }
  if(a>c){
    d=a;
    a=c;
    c=d;
  }
  if(b>c){
    d=b;
    b=c;
    c=d;
  }
  printf("O números em ordem crescente são: %d, %d, %d!\n", a, b, c);
  return 0;
}