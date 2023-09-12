/* PROGRAMA QUE RECEBE 3 NÚMEROS E PEDE PARA O USUÁRIO ESCOLHER
   ENTRE AS OPÇÕES:

     1 - mostrar em ordem crescente;
     2 - mostrar em ordem decrescente;
     3 - mostrar o menor número;                             */

// bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// função para a ordem crescente
void seqCrescente (int a, int b, int c, int *menor, int *meio, int *maior) {
  // primeiro parâmetro
  if (a <= b && a <= c) {
    *menor = a;
    if (b <= c) {
      *meio = b;
      *maior = c;
    } else {
        *meio = c;
        *maior = b;
    }
    // segundo parâmetro
  } else if (b <= a && b <= c) {
      *menor = b;
      if (a <= c) {
        *meio = a;
        *maior = c;
      } else {
          *meio = c;
          *maior = a;
      }
  } else {
      *menor = c;
      if (a <= b) {
        *meio = a;
        *maior = b;
      } else {
          *meio = b;
          *maior = a;
      }
  }
}

// função para ordem decrescente
void seqDecrescente (int a, int b, int c, int *menor, int *meio, int *maior) {
  // primeiro parâmetro
  if (a >= b && a >= c) {
    *maior = a;
    if (b >= c) {
      *meio = b;
      *menor = c;
    } else {
        *meio = c;
        *menor = b;
    }
    // segundo parâmetro
  } else if (b >= a && b >= c) {
      *maior = b;
      if (a >= c) {
        *meio = a;
        *menor = c;
      } else {
          *meio = c;
          *menor = a;
      }
  } else {
      *maior = c;
      if (a >= b) {
        *meio = a;
        *menor = b;
      } else {
          *meio = b;
          *menor = a;
      }
  }
}

int main(void) {

  int a, b, c;
  int menor, meio, maior;
  char ch;

  // entrada dos números
  printf("\nOlá, digite três números separados por espaços: ");
  scanf("%d %d %d", &a, &b, &c);

  // menu para seleção da escolha
  printf("\nAgora, escolha entre uma das opções abaixo para realizar as seguintes operações: ");
  printf("\n  -  'c': mostra os números em ordem crescente;");
  printf("\n  -  'd': mostra os números em ordem decrescente;");
  printf("\n  -  'm': mostra o menor número, ao centro;");
  printf("\nSua escolha: ");
  scanf(" %c", &ch); // retém a escolha do usuário
  setbuf(stdin, NULL); // limpa o buffer do teclado

  // comparações
  if (ch == 'c' || ch == 'C') {
    // função crescente recebe os parâmetros e faz os cálculos
    seqCrescente(a, b, c, &menor, &meio, &maior);
    printf("\nVocê escolheu colocar os número em ordem crescente ( %d - %d - %d )", menor, meio, maior);
  } else if (ch == 'd' || ch == 'D') {
      // função decrescente recebe os parâmetros e faz os cálculos
      seqDecrescente (a, b, c, &menor, &meio, &maior);
      printf("\nVocê escolheu colocar os números em ordem decrescente ( %d - %d - %d )", maior, meio, menor);
  } else if (ch == 'm' || ch == 'M') {
      // mesma função crescente para receber os parâmetros, mas com mudança na saída
      seqCrescente(a, b, c, &menor, &meio, &maior);
      printf("\nVocê escolheu colocar o menor número ao centro ( %d - %d - %d )", meio, menor, maior);
      printf("\nOu, se preferir, ficando dessa forma ( %d - %d - %d )", maior, menor, meio);
  } else {
      printf("Selecione uma opção válida.");
  }

   return 0;
}
