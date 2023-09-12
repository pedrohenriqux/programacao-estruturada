/* Q. 02 - PROGRAMA QUE RECEBE UMA HORA FORMADA POR HORAS E MINUTOS, CALCULA E
   MOSTRA QUANTOS MINUTOS E QUANTOS SEGUNDOS SÃO IGUAIS AQUELA HORA   */

#include <stdio.h>

int main(void) {

  int hora, minutos;

  // Solicita ao usuário que insira a hora no formato 'hh.mm'
  printf("Digite uma hora no formato 'hh mm', separado por um espaço: ");
  scanf(" %d %d", &hora, &minutos);

  // Verifica se os valores inseridos estão dentro dos limites permitidos
  if (hora < 0 || hora > 23 || minutos < 0 || minutos > 59) {
    printf("O valor da hora ou dos minutos está fora dos limites conhecidos e permitidos.\n");
  } else {
      // Calcula o total de minutos
      int totalMin = hora * 60 + minutos;

      // Calcula o total de segundos
      int totalSeg = totalMin * 60;

      // Exibe o resultado
      printf("%d horas e %d minutos equivalem a %d minutos.\n", hora, minutos, totalMin);
      printf("%d horas e %d minutos equivalem a %d segundos.\n", hora, minutos, totalSeg);
  }

  return 0;
}
