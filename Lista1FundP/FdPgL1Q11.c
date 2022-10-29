#include <stdio.h>

int main(void) {
  float vAVista, vParcelado, vPacelas;
  int nParcelas;
  printf("Digite o valor à vista do produto e o número de parcelas desejadas (1, 2 ou 3), respectivamente.\n");
  scanf("%f", &vAVista);
  scanf("%d", &nParcelas);
  if(nParcelas <=1){
    vParcelado = vAVista;
    nParcelas = 1;
    printf("Compra à vista, uma parcela.\n");
  }
  else if (nParcelas == 2){
    vParcelado = vAVista + vAVista*0.1;
    printf("Duas parcelas.\n");
  }
  else{
    vParcelado = vAVista + vAVista*0.2;
    nParcelas = 3;
    printf("Três parcelas.\n");
  }
  vPacelas = vParcelado/nParcelas;
  printf("Valor total a ser pago: R$:%.2f, em %d X de R$:%.2f", vParcelado, nParcelas, vPacelas);
  return 0;
}