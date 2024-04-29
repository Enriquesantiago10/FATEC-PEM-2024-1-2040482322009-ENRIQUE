//o usuario deve escolher entre as operções, a entrada será deita por caracteres
//criar variaveis 

#include <stdio.h>

int variavelDeRepeticao = 1;
float operando1, operando2, S;
char entradaDoOperador[100];

int main(void) {
  char operadores[] = {'+', '-', '*', '/'};

  while(variavelDeRepeticao == 1){
    printf("\nSelecione um operador: ");
    fgets(entradaDoOperador, 100, stdin);

    

    //condição se o operador for +
      if(*entradaDoOperador == '+'){
        printf("\nDigite o primeiro operando: ");
        scanf("%f", &operando1);
        printf("\nDigite o segundo operando: ");
        scanf("%f", &operando2);
        S = operando1 + operando2;
        printf("\nresultado = %f", S);
      }

    //condição se o operador for -
      if(*entradaDoOperador == '-'){
        printf("Digite o primeiro operando: ");
        scanf("%f", &operando1);
        printf("\nDigite o segundo operando: ");
        scanf("%f", &operando2);
        S = operando1 - operando2;
        printf("\nresultado = %f", S);
      } 

    //condição se o operador for *
      if(*entradaDoOperador == '*'){
        printf("Digite o primeiro operando: ");
        scanf("%f", &operando1);
        printf("\nDigite o segundo operando: ");
        scanf("%f", &operando2);
        S = operando1 * operando2;
        printf("\nresultado = %f", S);
      } 

    //condição se o operador for /
      if(*entradaDoOperador == '/'){
        printf("Digite o primeiro operando: ");
        scanf("%f", &operando1);
        printf("\nDigite o segundo operando: ");
        scanf("%f", &operando2);
        S = operando1 / operando2;
        printf("\nresultado = %f", S);
      } 

  }

}