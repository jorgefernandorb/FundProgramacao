#include <stdio.h>

int main(void) {
  float salario, dINSS;
  printf("Digite o salário.\n");
  scanf("%f", &salario);
  if(salario <= 600){
    printf("Isento.\n");
  }
  else if(salario > 600 && salario <= 1200){
    dINSS = salario*0.2;
    printf("O desconto do INSS é: %.2f.\n", dINSS);
  }
  else if(salario > 1200 && salario <= 2000){
    dINSS = salario*0.25;
    printf("O desconto do INSS é: %.2f.\n", dINSS);
  }
  else{
    dINSS = salario*0.3;
    printf("O desconto do INSS é: %.2f.\n", dINSS);
  }
  return 0;
}