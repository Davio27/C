#include <stdio.h>
#include <string.h>
int main(){

char frase[100];
int i, cont_vogal;
gets(frase);
for ( i = 0; i < strlen(frase); i++)
{
    if (frase[i]=='a' || 
        frase[i]=='e' ||
        frase[i]=='i' ||
        frase[i]=='o' ||
        frase[i]=='u')   
    {
       cont_vogal++;
    }
}
  printf("qtd de vogais = %i", cont_vogal);
}