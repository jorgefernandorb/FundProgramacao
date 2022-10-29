#include <stdio.h>

int main(void) {
  int idade;
  printf("Digite a idade da criança.\n");
  scanf("%d", &idade);
  if(idade>=4 && idade<=5){
    printf("Turma A.\n");
  }
  else if (idade>=6 && idade<=8){
    printf("Turma B.\n");
  }
  else if (idade>=9 && idade<=10){
    printf("Turma C.\n");
  }
  else{
    printf("Sem turmas.");
  }
  return 0;
}