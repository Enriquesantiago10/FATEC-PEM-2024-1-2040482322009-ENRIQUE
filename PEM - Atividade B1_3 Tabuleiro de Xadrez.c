#include <stdio.h>
#include <string.h>

int main() {
    int i;
    int j;

    char matriz[8][40];

    // Update matriz to contain strings
    strcpy(matriz[0], "TP1 CP1 BP1 DP  RP  BP2 CP2 TP2 ");
    strcpy(matriz[1], "PP1 PP2 PP3 PP4 PP5 PP6 PP7 PP8 ");
    strcpy(matriz[2], "                                ");
    strcpy(matriz[3], "                                ");
    strcpy(matriz[4], "                                ");
    strcpy(matriz[5], "                                ");
    strcpy(matriz[6], "PB1 PB2 PB3 PB4 PB5 PB6 PB7 PB8 ");
    strcpy(matriz[7], "TB1 CB1 BB1 DB  RB  BB2 CB2 TB2 ");

    // Accessing and displaying elements of the array
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 32; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}