//o branco deve começar. As jogadas a serem feitas estão na tabela do professor. No final, o branco deve dar xeque mate no preto 
//os elementos devem ocupar as determinadas posições
//o tabuleiro deverá ser printado a cada jogada
//não há necessidade de pedir ao usuário inserir a posição 
//informar quem vai jogar e qual jogada fará
//DESAFIO: a cada jogada, fazer o "traço/caminho" das peças
//criar variável para cada posição

#include <stdio.h>
#include <string.h>
//define é a mesma coisa que uma constante
#define LINHAS 8
#define COLUNAS 8

//a função de "char*" é para armazenar uma sequencia de caratecteres, uma string 
  char* matriz[LINHAS][COLUNAS] = {
      {"TB1", "CB2", "BB3", "DB4", "RB5", "BB6", "CB7", "TB8"},
      {"PB1", "PB2", "PB3", "PB4", "PB5", "PB6", "PB7", "PB8"},
      {" x ", " x ", " x ", " x ", " x ", " x ", " x ", " x "},
      {" x ", " x ", " x ", " x ", " x ", " x ", " x ", " x "},
      {" x ", " x ", " x ", " x ", " x ", " x ", " x ", " x "},
      {" x ", " x ", " x ", " x ", " x ", " x ", " x ", " x "},
      {"PP1", "PP2", "PP3", "PP4", "PP5", "PP6", "PP7", "PP8"},
      {"TP1", "CP2", "BP3", "DP4", "RP5", "BP6", "CP7", "TP8"}
  };

//index é usado para  localizar um elemento dentro um vetor
int LINHAS_index;
int COLUNAS_index;

void exibirTabuleiroInicial(){

//Loop de exibição do tabuleiro  
      for (int i = LINHAS - 1; i >= 0; i--) {
          printf("%d ", i + 1);

          for (int j = 0; j < COLUNAS; j++) {
              printf("%s ", matriz[i][j]);
          }
          printf("\n");
    }
     printf("   a   b   c   d   e   f   g   h\n");

//verificador do valor/elemento de cada linha e coluna 
//um valor para linhas e colunas foram atribuidos anteriormente, serve para localizar os pontos da matriz
    printf("\nelemento[%d][%d]: %s\n\n", LINHAS_index, COLUNAS_index, matriz[LINHAS_index][COLUNAS_index]);
    printf("________________________________________\n\n");

  }

void jogadaBranca1(){
  //1º jogada branca: PB5 ocupando a posição e4
  LINHAS_index = 3;
  COLUNAS_index = 4;
  int varLinhaBranca1 = LINHAS_index;
  int varColuBranca1 = COLUNAS_index;

  printf("1º jogada branca: PB5 ocupando a posição e4\n");
  printf("\n\n");
  matriz[varLinhaBranca1][varColuBranca1] = "PB5";
  matriz[varLinhaBranca1-2][varColuBranca1] = "...";

    for (int i = LINHAS - 1; i >= 0; i--) {
      printf("%d ", i + 1);

    for (int j = 0; j < COLUNAS; j++) {
        printf("%s ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("   a   b   c   d   e   f   g   h\n");

  printf("\nelemento[%d][%d]: %s\n\n", LINHAS_index, COLUNAS_index, matriz[LINHAS_index][COLUNAS_index]);
  printf("________________________________________\n\n");
}

void jogadaPreta1(){
  //1º jogada preta: PP5 ocupando a posição e5
    LINHAS_index = 4;
    COLUNAS_index = 4;
    int varLinhaPreta1 = LINHAS_index;
    int varColuPreta1 = COLUNAS_index; 

    printf("1º jogada preta: PP5 ocupando a posição e5\n");
    printf("\n\n");
    matriz[varLinhaPreta1][varColuPreta1] = "PP5";
    matriz[varLinhaPreta1+2][varColuPreta1] = "...";

      for (int i = LINHAS - 1; i >= 0; i--) {
        printf("%d ", i + 1);

      for (int j = 0; j < COLUNAS; j++) {
          printf("%s ", matriz[i][j]);
      }
      printf("\n");
    }

    printf("   a   b   c   d   e   f   g   h\n");

    printf("\nelemento[%d][%d]: %s\n\n", LINHAS_index, COLUNAS_index, matriz[LINHAS_index][COLUNAS_index]);
  printf("________________________________________\n\n");
}

void jogadaBranca2(){
  //2º jogada branca: BB6 ocupando a posição c4
    LINHAS_index = 3;
    COLUNAS_index = 2;
    int varLinhaBranca2 = LINHAS_index;
    int varColuBranca2 = COLUNAS_index; 

    printf("2º jogada branca: BB6 ocupando a posição c4\n");
    printf("\n\n");
    matriz[varLinhaBranca2][varColuBranca2] = "BB6";
    matriz[varLinhaBranca2-3][varColuBranca2+3] = "...";

      for (int i = LINHAS - 1; i >= 0; i--) {
        printf("%d ", i + 1);

      for (int j = 0; j < COLUNAS; j++) {
          printf("%s ", matriz[i][j]);
      }
      printf("\n");
    }

    printf("   a   b   c   d   e   f   g   h\n");

    printf("\nelemento[%d][%d]: %s\n\n", LINHAS_index, COLUNAS_index, matriz[LINHAS_index][COLUNAS_index]);
  printf("________________________________________\n\n");
}

void jogadaPreta2(){
  //2º jogada preta: CP2 ocupando a posição c6
  LINHAS_index = 5;
  COLUNAS_index = 2;
  int varLinhaPreta2 = LINHAS_index;
  int varColuPreta2 = COLUNAS_index; 

  printf("2º jogada preta: CP2 ocupando a posição c6\n");
  printf("\n\n");
  matriz[varLinhaPreta2][varColuPreta2] = "CP2";
  matriz[varLinhaPreta2+2][varColuPreta2-1] = "...";

    for (int i = LINHAS - 1; i >= 0; i--) {
      printf("%d ", i + 1);

    for (int j = 0; j < COLUNAS; j++) {
        printf("%s ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("   a   b   c   d   e   f   g   h\n");

  printf("\nelemento[%d][%d]: %s\n\n", LINHAS_index, COLUNAS_index, matriz[LINHAS_index][COLUNAS_index]);
  printf("________________________________________\n\n");
}

void jogadaBranca3(){
  //3º jogada branca: DB4 ocupando a posição h5
  LINHAS_index = 4;
  COLUNAS_index = 7;
  int varLinhaBranca3 = LINHAS_index;
  int varColuBranca3 = COLUNAS_index; 

  printf("3º jogada branca: DB4 ocupando a posição h5\n");
  printf("\n\n");
  matriz[varLinhaBranca3][varColuBranca3] = "DB4";
  matriz[varLinhaBranca3-4][varColuBranca3-4] = "...";

    for (int i = LINHAS - 1; i >= 0; i--) {
      printf("%d ", i + 1);

    for (int j = 0; j < COLUNAS; j++) {
        printf("%s ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("   a   b   c   d   e   f   g   h\n");

  printf("\nelemento[%d][%d]: %s\n\n", LINHAS_index, COLUNAS_index, matriz[LINHAS_index][COLUNAS_index]);
  printf("________________________________________\n\n");
}

void joagadaPreta3(){
  //3º jogada preta: CP7 ocupando a posição f6
  LINHAS_index = 5;
  COLUNAS_index = 5;
  int varLinhaPreta3 = LINHAS_index;
  int varColuPreta3 = COLUNAS_index; 

  printf("3º jogada preta: CP7 ocupando a posição f6\n");
  printf("\n\n");
  matriz[varLinhaPreta3][varColuPreta3] = "CP7";
  matriz[varLinhaPreta3+2][varColuPreta3+1] = "...";

    for (int i = LINHAS - 1; i >= 0; i--) {
      printf("%d ", i + 1);

    for (int j = 0; j < COLUNAS; j++) {
        printf("%s ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("   a   b   c   d   e   f   g   h\n");

  printf("\nelemento[%d][%d]: %s\n\n", LINHAS_index, COLUNAS_index, matriz[LINHAS_index][COLUNAS_index]);
  printf("________________________________________\n\n");
}

void joagadaBranca4(){
  //4º jogada branca: xeque mate em f7
  LINHAS_index = 6;
  COLUNAS_index = 5;
  int varLinhaBranca4 = LINHAS_index;
  int varColuBranca4 = COLUNAS_index; 

  printf("4º jogada branca: xeque mate em f7\n");
  printf("\n\n");
  matriz[varLinhaBranca4][varColuBranca4] = "DB4";
  matriz[varLinhaBranca4-2][+2] = "...";

    for (int i = LINHAS - 1; i >= 0; i--) {
      printf("%d ", i + 1);

    for (int j = 0; j < COLUNAS; j++) {
        printf("%s ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("   a   b   c   d   e   f   g   h\n");

  printf("\nelemento[%d][%d]: %s\n\n", LINHAS_index, COLUNAS_index, matriz[LINHAS_index][COLUNAS_index]);
  printf("________________________________________\n\n");
}


int main(){ 
  exibirTabuleiroInicial();
  jogadaBranca1();
  jogadaPreta1();
  jogadaBranca2();
  jogadaPreta2();
  jogadaBranca3();
  joagadaPreta3();
  joagadaBranca4();
  return 0;
}