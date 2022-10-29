// incluindo as bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// definindo as constantes
#define NUMERO_DE_TENTATIVAS 3
//modificação 2 lista 2
#define FACIL 20;
#define MEDIO 15;
#define DIFICIL 6;

int main() {

	// imprimindo cabecalho bonito do jogo
	printf("\n\n");
	printf("          P  /_\\  P                              \n");
	printf("         /_\\_|_|_/_\\                            \n");
	printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
	printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n");
	printf("    |\" \"  |  |_|  |\"  \" |                     \n");
	printf("    |_____| ' _ ' |_____|                         \n");
	printf("          \\__|_|__/                              \n");
	printf("\n\n");

	// declarando variaveis que serao usadas mais a frente
	int chute;
	int acertou;
	int nivel;
	int totaldetentativas;
  int i=1;
  int lInf, lSup;
  int nAnterior=-1;
	// definindo a quantidade de pontos inicial
	double pontos = 1000;
	//modificação 3 lista 2
  int jNovamente = 0;


	// escolhendo o nivel de dificuldade
  do{
  	printf("Qual o nivel de dificuldade?\n");
  	printf("(1) Facil (2) Medio (3) Dificil\n\n");
  	printf("Escolha: ");
  	scanf("%d", &nivel);
   //modificação 1 lista 
    printf("Qual o limite inferior dos números?\n");
    scanf("%d", &lInf);
    printf("Qual o limite superior dos números?\n"); 
    scanf("%d", &lSup);
    // gerando um numero secreto aleatorio
  	srand(time(0));
  	int numerosecreto = lInf + (rand() % (lSup-lInf));
  
  	switch(nivel) {
  		case 1: 
  			totaldetentativas = FACIL;
  			break;
  		case 2:
  			totaldetentativas = MEDIO;
  			break;
  		default:
  			totaldetentativas = DIFICIL;
  			break;
  	}
  
  	// loop principal do jogo
  	do {
      
  		printf("-> Tentativa %d de %d\n", i, totaldetentativas);
      //modificação 4 lista 2
      do{
    		printf("Chute um número: ");
    		scanf("%d", &chute);
        if(nAnterior==chute){
          printf("Número invalido, igual ao anterior!!!\n");
        }
      }while(nAnterior==chute);
      nAnterior= chute;
  		// tratando chute de numero negativo
  		if(chute < 0) {
  			printf("Você não pode chutar números negativos\n");
  			i--;
  			continue;
  		}
  
  		// verifica se acertou, foi maior ou menor
  		acertou = chute == numerosecreto;
  
  		if(acertou) {
  			break;
  		} else if(chute > numerosecreto) {
  			printf("\nSeu chute foi maior do que o número secreto!\n\n");
  		} else {
  			printf("\nSeu chute foi menor do que o número secreto!\n\n");
  		}
  
  		// calcula a quantidade de pontos
  		double pontosperdidos = abs(chute - numerosecreto) / 2.0;
  		pontos = pontos - pontosperdidos;
      i++;
  	}while(i<=totaldetentativas);
    printf("O número secreto é: %d!!!\n", numerosecreto);
  	// imprimindo mensagem de vitoria ou derrota
  	printf("\n");
  	if(acertou) {
  		printf("             OOOOOOOOOOO               \n");
  		printf("         OOOOOOOOOOOOOOOOOOO           \n");
  		printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
  		printf("    OOOOOO      OOOOO      OOOOOO      \n");
  		printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
  		printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
  		printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
  		printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
  		printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
  		printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
  		printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
  		printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
  		printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
  		printf("         OOOOOO         OOOOOO         \n");
  		printf("             OOOOOOOOOOOO              \n");
  		printf("\nParabens! Você acertou!\n");
  		printf("Você fez %.2f pontos. Até a próxima!\n\n", pontos);
  	} else {
  
          printf("       \\|/ ____ \\|/    \n");   
          printf("        @~/ ,. \\~@      \n");   
          printf("       /_( \\__/ )_\\    \n");   
          printf("          \\__U_/        \n");
  
  		printf("\nVocê perdeu! Tente novamente!\n\n");
  	}

    printf("Gostaria de jogar novamente?\n");
    printf("(1)Sim:\n");
    printf("(0)Não:\n");
    scanf("%d", &jNovamente);
  }while (jNovamente==1);

}