/** 
usando o struct: entrada de dados: nome, nota e situacao(aprovado ou reprovado)
nome em ordem crescente
nota: se maior e igual a 6,0, aprovado, se menor, reprovado

*/
#include <stdio.h>
#include <string.h>

// Definicao da struct
struct Pessoa {
    char nome[50];
    float nota;
};

int main() {
    int a;
    int quantMaxDeAlunos = 50;
    char temp[100];
    char exibir;

    // Declaracao de um array de variaveis do tipo Pessoa
    struct Pessoa alunos[quantMaxDeAlunos];


    // Loop para perguntar nome e nota, e suas respectivas condicoes
    for (a = 0; a < quantMaxDeAlunos; a++) {
        printf("\ndigite seu nome: ");
        scanf("%s", alunos[a].nome);

        // sair pra terminar o programa
        if (strcmp(alunos[a].nome, "sair") == 0) {
            return 0;
        }

        printf("sua nota: ");
        scanf("%f", &alunos[a].nota);

        if (alunos[a].nota >= 6.0) {
            printf("aprovado\n");
        } else {
            printf("reprovado\n");
        }

        //0rdena os nomes
       for (int i = 0; i < (quantMaxDeAlunos - 1); i++) {
        int j_min = i;
          for (int j = i + 1; j < quantMaxDeAlunos; j++) {

            if (strcmp(alunos[j].nome, alunos[j_min].nome) < 0) {
                j_min = j;
            }
        }

        if (j_min != i) {
            struct Pessoa temp_pessoa = alunos[i];
            alunos[i] = alunos[j_min];
            alunos[j_min] = temp_pessoa;
        }
    }  
        //exibe os nomes em ordem alfabetica
    for (int i = 0; i < quantMaxDeAlunos; i++) {
        printf("\n%s\n", alunos[i].nome);
        printf("%.2f\n", alunos[i].nota);

    }


    }

    return 0;
}
