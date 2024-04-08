#include <stdio.h>

int main() {
    // Definindo arrays para armazenar os valores em cada etapa
    float valores[6];
    float somaTotal = 0;

    // Processo 1 - 5 valores
    printf("Etapa 1: Digite 5 valores:\n");

    // Pedindo ao usuário para inserir os valores
    for (int i = 0; i < 5; ++i) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &valores[i]);

        // Verificando se o valor está no intervalo permitido
        while (valores[i] < 0.0 || valores[i] > 10.0) {
            printf("Digite um valor: ");
            scanf("%f", &valores[i]);
        }
    }

    // Encontrando a maior e a menor nota
    float menor = valores[0], maior = valores[0];
    for (int i = 1; i < 5; ++i) {
        if (valores[i] < menor) {
            menor = valores[i];
        } else if (valores[i] > maior) {
            maior = valores[i];
        }
    }

    // Calculando a nota final excluindo a maior e a menor nota
    float soma = 0;
    for (int i = 0; i < 5; ++i) {
        if (valores[i] != menor && valores[i] != maior) {
            soma += valores[i];
        }
    }

    // Adicionando à soma total
    somaTotal += soma;

    // Exibindo a nota final da etapa 1
    printf("Nota final de classificação (Etapa 1): %.2f\n", soma);

    // Processo 2 - 4 valores duas vezes
    for (int etapa = 2; etapa <= 3; ++etapa) {
        printf("\nEtapa %d: Digite 4 valores:\n", etapa);

        // Pedindo ao usuário para inserir os valores
        for (int i = 0; i < 4; ++i) {
            printf("Valor %d: ", i + 1);
            scanf("%f", &valores[i]);

            // Verificando se o valor está no intervalo permitido
            while (valores[i] < 0.0 || valores[i] > 10.0) {
                printf("Digite um valor: ");
                scanf("%f", &valores[i]);
            }
        }

        // Resetando a variável soma
        soma = 0;

        // Encontrando a maior e a menor nota
        menor = valores[0], maior = valores[0];
        for (int i = 1; i < 4; ++i) {
            if (valores[i] < menor) {
                menor = valores[i];
            } else if (valores[i] > maior) {
                maior = valores[i];
            }
        }

        // Calculando a nota final excluindo a maior e a menor nota
        for (int i = 0; i < 4; ++i) {
            if (valores[i] != menor && valores[i] != maior) {
                soma += valores[i];
            }
        }

        // Adicionando à soma total
        somaTotal += soma;

        // Exibindo a nota final da etapa
        printf("Nota final de classificação (Etapa %d): %.2f\n", etapa, soma);
    }

    // Processo 4 - 6 valores
    printf("\nEtapa 4: Digite 6 valores:\n");

    // Pedindo ao usuário para inserir os valores
    for (int i = 0; i < 6; ++i) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &valores[i]);

        // Verificando se o valor está no intervalo permitido
        while (valores[i] < 0.0 || valores[i] > 10.0) {
            printf("Digite um valor: ");
            scanf("%f", &valores[i]);
        }
    }

    // Resetando a variável soma
    soma = 0;

    // Encontrando a maior e a menor nota
    menor = valores[0], maior = valores[0];
    for (int i = 1; i < 6; ++i) {
        if (valores[i] < menor) {
            menor = valores[i];
        } else if (valores[i] > maior) {
            maior = valores[i];
        }
    }

    // Calculando a nota final excluindo a maior e a menor nota
    for (int i = 0; i < 6; ++i) {
        if (valores[i] != menor && valores[i] != maior) {
            soma += valores[i];
        }
    }

    // Adicionando à soma total
    somaTotal += soma;

    // Exibindo a nota final da etapa 4
    printf("Nota final de classificação (Etapa 4): %.2f\n", soma);

    // Exibindo a soma total
    printf("\nSoma total das notas finais: %.2f\n", somaTotal);

    return 0;
}
