#include <stdio.h>
#include <ctype.h>

int main(void) {
  float altura, peso, iMC;
  char sexo;
  printf("Digite o sexo, M para masculino e F para feminino.\n");
  scanf("%c", &sexo);
  sexo = toupper(sexo);
  printf("Digitea a altura.\n");
  scanf("%f", &altura);
  printf("Digite o peso.\n");
  scanf("%f", &peso);
  iMC = peso / (altura*2);
  printf("Seu IMC é: %.2f e sua atual condição.\n", iMC);
  if( sexo == 'M'){
    if(iMC < 19.1){
      printf("Abaixo do peso.\n");
    }
    else if(iMC >= 19.1 && iMC < 25.8){
      printf("Peso normal.\n");
    }
    else if(iMC >= 25.8 && iMC < 27.3){
      printf("Marginalmente acima do peso.\n");
    }
    else if(iMC >= 27.3 && iMC <= 32.3){
      printf("Acima do peso ideal.\n");
    }
    else{
      printf("Obeso.\n");
    }
  }
  else {
    if(iMC < 20.7){
      printf("Abaixo do peso.\n");
    }
    else if(iMC >= 20.7 && iMC < 26.4){
      printf("Peso normal.\n");
    }
    else if(iMC >= 26.4 && iMC < 27.8){
      printf("Marginalmente acima do peso.\n");
    }
    else if(iMC >= 27.8 && iMC <= 31.1){
      printf("Acima do peso ideal.\n");
    }
    else{
      printf("Obeso.\n");
    }
  }
  return 0;
}