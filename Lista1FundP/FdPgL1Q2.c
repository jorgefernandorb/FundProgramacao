#include <stdio.h>

int main(void) {
  float salario, sConjuge, vFinanciamento;

  printf("Digite o valor do salário.\n");
  scanf("%f", &salario);
  printf("Digite o valor de um financiamento pretendido.\n");
  scanf("%f", &vFinanciamento);
  if (vFinanciamento <= 5*salario){
    printf("Financiamento concedido\n");
  }
  else{
    printf("Digite o salário do cônjuge.\n");
    scanf("%f", &sConjuge);
    if(vFinanciamento <= 5*(salario + sConjuge)){
      printf("Financiamento concedido.\n");
    }
    else{
      printf("Financiamento negado.\n");
    }
  }
  printf("Obrigado por nos consultar.\n");
  return 0;
}