#include <stdio.h>
#include <ctype.h>

int main(void) {
  char tApartamento;
  int nDiarias;
  float vConsumo, vDiaria, vTDiarias, tServico, sTotal, total;
  printf("Digite o tipo do apartamento.\n");
  scanf("%c", &tApartamento);
  tApartamento = toupper(tApartamento);
  printf("Digite o número de diárias.\n");
  scanf("%d", &nDiarias);
  printf("Digite o valor de consumo interno do hóspede.\n");
  scanf("%f", &vConsumo);
  if(tApartamento == 'A'){
    vDiaria = 150;
    vTDiarias = nDiarias * 150;
  }
  else if (tApartamento == 'B'){
    vDiaria = 100;
    vTDiarias = nDiarias * 100;
  }
  else if (tApartamento == 'C'){
    vDiaria = 75;
    vTDiarias = nDiarias * 75;
  }
  else{
    vDiaria = 175;
    vTDiarias = nDiarias * 175;
  }
  sTotal = vTDiarias + vConsumo;
  tServico = sTotal*0.1;
  total = sTotal + tServico;

  printf("Conta final:\nTipo do apartamento %c; \nNúmero de diárias %d; \nValor unitário da diária R$:%.2f; \nValor total diárias R$:%.2f; \nValor consumo interno R$:%.2f; \nSubtotal R$:%.2f; \nValor taxa de serviços R$%.2f e \nTotal R$%.2f", tApartamento, nDiarias, vDiaria, vTDiarias, vConsumo, sTotal, tServico, total);
  return 0;
}