/* Q. 04 - PROGRAMA QUE RECEBE UM NÚMERO E CALCULA O SEU FATORIAL, ATÉ QUE O USUÁRIO DIGITE O VALOR 0 */

#include <stdio.h>

// função para realizar o cálculo do fatorial de um número
int calcFatorial (int numero) {
  int fatorial = 1;
  for (int i = 1; i <= numero; i++) {
      fatorial *= i;
  }
  return fatorial; // retorna o resultado com base nos parâmetros informados
}

int main(void) {

  int fatorial, num;

  printf("*****************************\n");
  printf("*   C A L C U L A D O R A   *\n");
  printf("*            D E            *\n"); // menu de interação com o usuário
  printf("*      F A T O R I A L      *\n");
  printf("*****************************\n");

  // loop 'do while', assim, funciona uma vez e checa a próxima condição ao final
  do {
     printf("\nInforme um número positivo qualquer, ou 0 para terminar: ");
     scanf("%d", &num); // retém o número informado

     // verifica se o número informado é maior que 0, e só depois executa o resto
     if (num > 0) {
         fatorial = calcFatorial(num); // chamada da função para o cálculo
         printf("\nO fatorial do número %d é %d", num, fatorial);
     } else {
           printf("Programa finalizado.\n");
       }
  } while (num > 0); // condição para que o loop permaneça ativo

  return 0;
}
