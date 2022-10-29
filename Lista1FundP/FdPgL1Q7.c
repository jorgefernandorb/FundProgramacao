#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  float salario;
  char funcao[20];
  printf("Digite o salário e a função do funcionário.\n");
  scanf("%f", &salario);
  scanf("%s", funcao);
 for(int i = 0; i < strlen(funcao) ; i++){
   funcao[i] = tolower(funcao[i]);
 }
 if (!strcmp(funcao, "técnico")){
   salario = salario + salario*0.5;
 }
 else if (!strcmp(funcao, "gerente")){
   salario = salario + salario*0.3;
 }
 else{
   salario = salario + salario*0.2;
 }
  printf("Novo salário é: %.2f\n", salario);
  return 0;
}