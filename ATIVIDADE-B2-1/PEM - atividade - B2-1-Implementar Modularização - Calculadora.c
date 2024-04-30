//o usuario deve escolher entre as operacoes

#include <stdio.h>

int variavelDeRepeticao = 1;
float operando1, operando2, S;
char entradaDoOperador[2];

int main(void) {
  char operadores[] = {'+', '-', '*', '/'};

  while(variavelDeRepeticao == 1){
    printf("\nSelecione um operador: ");
    fgets(entradaDoOperador, 2, stdin);

    // verifica o operador
    if (*entradaDoOperador != '+' && *entradaDoOperador != '-' && *entradaDoOperador != '*' && *entradaDoOperador != '/') {
      return 0;
    } 
    
    //condição se o operador for +
      if(*entradaDoOperador == '+'){
        printf("\nDigite o primeiro operando: ");
        scanf("%f", &operando1);
        printf("\nDigite o segundo operando: ");
        scanf("%f", &operando2);
        S = operando1 + operando2;
        printf("\nresultado = %.2f", S);
      }

    //condição se o operador for -
      if(*entradaDoOperador == '-'){
        printf("Digite o primeiro operando: ");
        scanf("%f", &operando1);
        printf("\nDigite o segundo operando: ");
        scanf("%f", &operando2);
        S = operando1 - operando2;
        printf("\nresultado = %.2f", S);
      } 

    //condição se o operador for *
      if(*entradaDoOperador == '*'){
        printf("Digite o primeiro operando: ");
        scanf("%f", &operando1);
        printf("\nDigite o segundo operando: ");
        scanf("%f", &operando2);
        S = operando1 * operando2;
        printf("\nresultado = %.2f", S);
      } 

    //condição se o operador for /
      if(*entradaDoOperador == '/'){
        printf("Digite o primeiro operando: ");
        scanf("%f", &operando1);
        printf("\nDigite o segundo operando: ");
        scanf("%f", &operando2);
        S = operando1 / operando2;
        printf("\nresultado = %.2f", S);
      } 

      printf("\nSelecione um operador: ");
      fgets(entradaDoOperador, 2, stdin);
  }
}