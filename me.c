/*barra e asterisco é para fazer texto sem limite*/
// é para texto de uma linha//
#include <stdio.h>
 int main(){
  int v1, v2, soma;
  char nome[30];
   printf("digite seu nome, maluco: ");
   scanf("%s", nome);
   printf("digite o valor do bagulho: ");
   scanf("%i", &v1);
   printf("digite o valor do outro bagulho: ");
   scanf("%i", &v2);
    soma=v1+v2;
  //printf("%i", soma);
  //printf(" a soma eh %i", soma);
     printf("%s falou que %i + %i e = %i", nome, v1, v2, soma);
 }