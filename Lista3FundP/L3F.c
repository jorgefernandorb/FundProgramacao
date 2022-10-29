#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include<conio.h>
#include "forca.h"

char palavrasecreta[TAMANHO_PALAVRA];
char chutes[26];
int chutesdados = 0;
//modificação 1
int letravalida (char letra){
  int a = letra;
  if(a<'A'||a>'Z'){
    return 0;
  }
  else{
    return 1;
  }
}
//modificação 4
int dificuldade (){
  int a;
  printf("Escolha a dificuldade:\n");
  printf("(1)Facil\n");
  printf("(2)Medio\n");
  printf("(3)Dificil\n");
  scanf("%d", &a);
  if(a==1){
    return 5;
  }
  else if(a==2){
    return 3;
  }
  else{
    return 1;
  }
}
//modificação 6
void rankingJogador(int pontuacao){
  FILE *f;
  char nome[100];
  f = fopen("Ranking.txt", "a");
  printf("Digite o seu nome.\n");
  scanf("%s", &nome);
  if(f==0){
    printf("Banco de dados indisponivel.\n");
    return;
  }
  fprintf(f, "%s pontuação %d", nome, pontuacao);
  fclose(f);
}
int letraexiste(char letra) {

	for(int j = 0; j < strlen(palavrasecreta); j++) {
		if(letra == palavrasecreta[j]) {
			return 1;
		}
	}

	return 0;
}

int chuteserrados() {
	int erros = 0;

	for(int i = 0; i < chutesdados; i++) {
		
		if(!letraexiste(chutes[i])) {
			erros++;
		}
	}

	return erros;
}

int enforcou() {
	return chuteserrados() >= 5;
}

int ganhou() {
	for(int i = 0; i < strlen(palavrasecreta); i++) {
		if(!jachutou(palavrasecreta[i])) {
			return 0;
		}
	}

	return 1;
}


void abertura() {
	printf("/****************/\n");
	printf("/ Jogo de Forca */\n");
	printf("/****************/\n\n");
}

void chuta() {
	char chute;
	printf("Qual letra? ");
	scanf(" %c", &chute);

	if(letraexiste(chute)) {
		printf("VocÃª acertou: a palavra tem a letra %c\n\n", chute);
	} else {
		printf("\nVocÃª errou: a palavra NÃƒO tem a letra %c\n\n", chute);
	}

	chutes[chutesdados] = chute;
	chutesdados++;
}

int jachutou(char letra) {
	int achou = 0;
	for(int j = 0; j < chutesdados; j++) {
		if(chutes[j] == letra) {
			achou = 1;
			break;
		}
	}

	return achou;
}

void desenhaforca() {

	int erros = chuteserrados();

	printf("  _______       \n");
	printf(" |/      |      \n");
	printf(" |      %c%c%c  \n", (erros>=1?'(':' '), (erros>=1?'_':' '), (erros>=1?')':' '));
	printf(" |      %c%c%c  \n", (erros>=3?'\\':' '), (erros>=2?'|':' '), (erros>=3?'/': ' '));
	printf(" |       %c     \n", (erros>=2?'|':' '));
	printf(" |      %c %c   \n", (erros>=4?'/':' '), (erros>=4?'\\':' '));
	printf(" |              \n");
	printf("_|___           \n");
	printf("\n\n");

	for(int i = 0; i < strlen(palavrasecreta); i++) {

		if(jachutou(palavrasecreta[i])) {
			printf("%c ", palavrasecreta[i]);
		} else {
			printf("_ ");
		}

	}
	printf("\n");

}

void escolhepalavra() {
	FILE* f;

	f = fopen("palavras.txt", "r");
	if(f == 0) {
		printf("Banco de dados de palavras nÃ£o disponÃ­vel\n\n");
		exit(1);
	}

	int qtddepalavras;
	fscanf(f, "%d", &qtddepalavras);

	srand(time(0));
	int randomico = rand() % qtddepalavras;

	for(int i = 0; i <= randomico; i++) {
		fscanf(f, "%s", palavrasecreta);
	}

	fclose(f);
}


void adicionapalavra() {
	char quer;

	printf("VocÃª deseja adicionar uma nova palavra no jogo (S/N)?");
	scanf(" %c", &quer);

	if(quer == 'S') {
		char novapalavra[TAMANHO_PALAVRA];

		printf("Digite a nova palavra, em letras maiusculas: ");
		scanf("%s", novapalavra);

		FILE* f;

		f = fopen("palavras.txt", "r+");
		if(f == 0) {
			printf("Banco de dados de palavras não disponivel\n\n");
			exit(1);
		}

		int qtd;
		fscanf(f, "%d", &qtd);
		qtd++;
		fseek(f, 0, SEEK_SET);
		fprintf(f, "%d", qtd);

		fseek(f, 0, SEEK_END);
		fprintf(f, "\n%s", novapalavra);

		fclose(f);

	}

}

int main() {

	abertura();
	escolhepalavra();

	do {

		desenhaforca();
		chuta();

	} while (!ganhou() && !enforcou());

	if(ganhou()) {
		printf("\nParabÃ©ns, vocÃª ganhou!\n\n");

		printf("       ___________      \n");
		printf("      '._==_==_=_.'     \n");
		printf("      .-\\:      /-.    \n");
		printf("     | (|:.     |) |    \n");
		printf("      '-|:.     |-'     \n");
		printf("        \\::.    /      \n");
		printf("         '::. .'        \n");
		printf("           ) (          \n");
		printf("         _.' '._        \n");
		printf("        '-------'       \n\n");

	} else {
		printf("\nPuxa, vocÃª foi enforcado!\n");
		printf("A palavra era **%s**\n\n", palavrasecreta);

		printf("    _______________         \n");
		printf("   /               \\       \n"); 
		printf("  /                 \\      \n");
		printf("//                   \\/\\  \n");
		printf("\\|   XXXX     XXXX   | /   \n");
		printf(" |   XXXX     XXXX   |/     \n");
		printf(" |   XXX       XXX   |      \n");
		printf(" |                   |      \n");
		printf(" \\__      XXX      __/     \n");
		printf("   |\\     XXX     /|       \n");
		printf("   | |           | |        \n");
		printf("   | I I I I I I I |        \n");
		printf("   |  I I I I I I  |        \n");
		printf("   \\_             _/       \n");
		printf("     \\_         _/         \n");
		printf("       \\_______/           \n");
	}

	//adicionapalavra();
  //modificação3
  if(ganhou()){
    adicionapalavra();
  }
 
}