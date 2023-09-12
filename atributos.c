/* Q. 05 - PROGRAMA QUE RECEBE A IDADE, PESO E ALTURA DE 10 PESSOAS E CALCULA:
     01. a média de idade das 10 pessoas;
     02. a quantidade de pessoas com peso superior a 80Kg e altura
         inferior a 1,50m;
     03. % de pessoas com idade entre 10 e 30 anos, entre as pessoas
         que medem mais de 1,90m;                                     */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char nome[30];
  int idade[10];
  double altura[10];
  double peso[10]; // atribuição de variáveis, algumas utilizando vetores
  int soma_idade = 0;
  int contagem = 0;
  int contador = 0;

  // início do loop 'for', já que é sabido o início e o fim
  for(int i = 0; i < 10; i++) {
    printf("\nOlá, digite o nome da pessoa %d: ", i + 1);
    scanf(" %[^\n]s", nome); // apenas para interação com o usuário
    setbuf(stdin, NULL);

    printf("Por favor, digite a idade da pessoa %d: ", i + 1);
    scanf(" %d", &idade[i]);
    soma_idade += idade[i]; // guardando a soma das idades para gerar a média futuramente

    printf("Agora, digite a altura (em cm) da pessoa %d: ", i + 1);
    scanf(" %lf", &altura[i]);

    printf("Por fim, digite o peso (em Kg) da pessoa %d: ", i + 1);
    scanf(" %lf", &peso[i]);
    // checando as condições para o andamento do programa, sempre fazendo alusão ao número atual do vetor
    if (altura[i] < 0 || idade[i] < 0 || peso[i] < 0) {
      printf("Informe valores válidos para altura, idade e peso.\n");
      --i; // repõe o vetor com informações que foram inseridas de maneira não compatível
      continue;
    }

    if (altura[i] < 150 && peso[i] > 80) {
      contagem++; // a variável aumenta a cada vez que a condição se torna verdadeira, irá ser usado no futuro
    }

    if (altura[i] > 190 && idade[i] >= 10 && idade[i] <= 30) {
      contador++; // a variável aumenta a cada vez que a condição se torna verdadeira, irá ser usado no futuro
    }
  } // chave para sinalizar o fim do loop

  double media_idade = (double)soma_idade / 10; // calcula a média de idade
  double porcentagem = ((double)contador / 10) * 100; // calcula a porcentagem para a 3° condição

  printf("\nA média de idade entre as 10 pessoas é de %.2lf anos.", media_idade);
  printf("\nO número de pessoas com altura inferior a 1,50m e peso superior a 80Kg é de %d.", contagem);
  printf("\nA porcentagem de pessoas com mais de 1,90m e que tem entre 10 e 30 anos é de %.2lf%%.", porcentagem);

  return 0;
}
