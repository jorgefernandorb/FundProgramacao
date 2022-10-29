#include <stdio.h>
int somavet (int v[]){
  int soma = 0;
  for(int i = 0; i< sizeof(v); i++){
    soma=soma+v[i];
  }
  return soma;
}
int main(void) {
  int n;
  int vet[100];
  
  printf("Digite o tamanho do vetor\n");
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    printf("Digite o %d° elemento do vetor.\n", i+1);
    scanf("%d", &vet[i]);
  }
  printf("A soma do elementos é: %d\n", somavet(vet));
  return 0;
}