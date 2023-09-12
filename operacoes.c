/* PROGRAMA QUE SOLICITA UM NÚMERO AO USUÁRIO E REALIZA AS SEGUINTES OPERAÇÕES,
   RESPECTIVAMENTE:

  - o quadrado desse número;
  - o cubo desse número;
  - a raiz quadrada desse número;
  - a raiz cúbica desse número;
  - o resto da divisão desse número por 3;                                */

#include <stdio.h>
#include <math.h>

int main() {
  int numero; //declarando a varíavel que será usada

  // solicitando e armazenando o valor na variável
  printf("Olá, informe um número: ");
  scanf("%d", &numero);

  // verificando se o número é positivo e maior que zero;
  if (numero > 0) {

  // usando algumas funções da biblioteca <math.h> para fazer os cálculos;
  // usando a função pow( ,2) para calcular o quadrado desse número;
  printf("O número %d ao quadrado é %.2lf.", numero, pow(numero, 2));

  // usando a função pow( ,3) para calcular o cubo desse número;
  printf("\nO número %d ao cubo é %.2lf.", numero, pow(numero,3));

  // usando a função sqrt() para calcular a raiz quadrada;
  printf("\nA raiz quadrada de %d é %.2lf.", numero, sqrt(numero));

  // usando a função cbrt() para calcular a raiz cúbica;
  printf("\nA raiz cúbica de %d é %.2lf.", numero, cbrt(numero));

  // usando o operador (%) para mostrar o resto da divisão por 3;
  printf("\nO resto da divisão de %d por 3 é %d.", numero, (numero % 3));
  } else {
    printf("O número digitado não pode ser negativo.");
  }

  return 0;
}
