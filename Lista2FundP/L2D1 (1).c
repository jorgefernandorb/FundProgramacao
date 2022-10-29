#include <stdio.h>

int main(void) {
  printf("Número pares entre 2 e 50\n");
  for(int i=3;i<50;i++){
    if(i%2==0){
      printf("%d;\n", i);
    }
  }
  return 0;
}