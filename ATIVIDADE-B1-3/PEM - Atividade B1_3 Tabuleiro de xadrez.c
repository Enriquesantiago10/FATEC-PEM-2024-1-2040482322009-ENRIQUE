#include <stdio.h>
#include <string.h>
//define é a mesma coisa que uma constante
#define LINHAS 8
#define COLUNAS 8

int main() {
//a função de "char*" é para armazenar uma sequencia de caratecteres, uma string 
    char* matriz[LINHAS][COLUNAS] = {
      {"PT1", "PC1", "PB1", "PD", " PR", " PB2", "PC2", "PT2"},
      {"PP1", "PP2", "PP3", "PP4", "PP5", "PP6", "PP7", "PP8"},
      {" x ", " x ", " x ", " x ", " x ", " x ", " x ", " x "},
      {" x ", " x ", " x ", " x ", " x ", " x ", " x ", " x "},
      {" x ", " x ", " x ", " x ", " x ", " x ", " x ", " x "},
      {" x ", " x ", " x ", " x ", " x ", " x ", " x ", " x "},
      {"BP1", "BP2", "BP3", "BP4", "BP5", "BP6", "BP7", "BP8"},
      {"BT1", "BC1", "BB1", "BD", " BR", " BB2", "BC2", "BT2"}
  };

     

    for (int i = LINHAS - 1; i >= 0; i--) {
        printf("%d ", i + 1);

        for (int j = 0; j < COLUNAS; j++) {
            printf("%s ", matriz[i][j]);
        }
        printf("\n");
    }
      printf("   a   b   c   d   e   f   g   h\n");
    return 0;
}