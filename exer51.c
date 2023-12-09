#include <stdio.h>
#include <string.h>
#define qtdalunos 5
#define qtdturmas 3
int main(){
    float notas[3][30], soma;
    int t, a;

    for (t = 0; t < qtdturmas; t++)
    {
        soma=0;

      for ( a = 0; a < qtdalunos; a++)
      {
        printf("\nTurmas %i - Alunos %i : \n", t+1, a+1);
        scanf("%f", &notas[t][a]);
        soma=soma+notas[t][a];
      }
      printf("Media turma %i: %.1f", t+1, soma/qtdalunos);
    }
    
    
}lllll