#include <stdio.h>

int main(void) {
  float vCompra, idade, aNasc, nSorte;
  printf("Digite o valor da compra.\n");
  scanf("%f", &vCompra);
  printf("Digite o ano de nascimento.\n");
  scanf("%f", &aNasc);
  idade = 2022 - aNasc;
  printf("%f\n", idade);
  if (vCompra < 500){
    nSorte = 5000 - vCompra*idade;
  }
  else if (vCompra > 500){
    nSorte = 50000 - vCompra*idade;
  }
  else{
    nSorte = vCompra*idade;
  }

  printf("Seu numero da sorte é: %.2f\n", nSorte);
  return 0;
}