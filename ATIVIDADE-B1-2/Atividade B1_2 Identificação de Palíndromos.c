#include <stdio.h>
#include <string.h>

int main()
{
    int i, j;

    char *ArtPreps[] = {" o ", " os ", " a ", " as ", " um ", " uma ", " uns ", " umas ", " de ", " da ", " do ", " das ", " dos ", " em ", " no ", " na ", " nos ", " nas ", " por ", " para ", " ante ", " após ", " até ", " com ", " contra ", " desde ", " entre ", " per ", " sem ", " sob ", " sobre ", " trás "};

    char fraseDoUsuario[1000];
    printf("digite uma frase: ");
    fgets(fraseDoUsuario, sizeof(fraseDoUsuario), stdin);

    for (int i = 0; i < sizeof(ArtPreps) / sizeof(ArtPreps[0]); i++) {
        while (strstr(fraseDoUsuario, ArtPreps[i]) != NULL) {
            printf("Tem a preposição/artigo '%s'\n", ArtPreps[i]);
            int removerArtPrep = strstr(fraseDoUsuario, ArtPreps[i]) - fraseDoUsuario;
            for (int j = removerArtPrep; j < removerArtPrep + strlen(ArtPreps[i]); j++) {
                fraseDoUsuario[j] = ' ';
            }
        }
    }

    printf("Texto sem artigos e preposicoes: %s\n", fraseDoUsuario);

    return 0;
}
