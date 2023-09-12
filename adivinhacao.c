/* JOGO DA ADIVINHAÇÃO DE UM NÚMERO */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int chute, numGrande, num, segundos;
  int chances = 12;
  int pontos = 1000; // Pontuação inicial do jogador

  printf("                    =================                    \n");
  printf("                    | GUESSING GAME |                    \n");
  printf("              =============================              \n");
  printf("              | Seja bem-vindo(a) ao Jogo |              \n");
  printf("              =============================              \n");

  char ch = '\0';
  int sair = 0;

  while(!sair)
  {
    /* Gerando um número randômico */
    segundos = time(0);
    srand(segundos);
    numGrande = rand();
    num = numGrande % 100;

    for(int c = 1; c <= chances; ++c)
    {
      printf("\nTentativa %d de %d.\n", c, chances);
      printf("Chute um numero!\n");
      scanf("%d", &chute);
      printf("Voce digitou o numero %d.\n", chute);

      if (chute < 0)
      {
        printf("Chute nao pode ser negativo!\n");
        /* Repõe a tentativa */
        --c;
        continue;
      }

      if (chute == num)
      {
        printf("Parabens! Voce acertou!\n");
        break;
      }
      else if (chute > num)
      {
        printf("Voce errou! Chutou ALTO\n");
      }
      else
      {
        printf("Voce errou! Chutou BAIXO\n");
      }

      int pontosDescontados = abs(num - chute) / 2;
      pontos -= pontosDescontados; // Subtrai os pontos calculados
    }

    printf("Pontuação final: %d\n", pontos); // Mostra a pontuação final
    printf("Partida terminada!\n\n");
    printf("Deseja jogar novamente (S/N)? ");
    setbuf(stdin, NULL);
    ch = getchar();
    sair = (ch == 'S' || ch == 's') ? 0 : 1;
  }

  return 0;
}
