#include <stdio.h>

int main(void) {
  float vCompra, vVenda;
  printf("Digite o valor de compra do produto.\n");
  scanf("%f", &vCompra);
  if(vCompra < 20.0){
    vVenda = vCompra + vCompra*0.45;
  }
  else{
    vVenda = vCompra + vCompra*0.3;
  }
  printf("O valor de venda é: R$%.2f.\n", vVenda);
  return 0;
}