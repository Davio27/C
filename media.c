//Receber a media do aluno e mostra se ele foi aprovado ou reprovado. Média = 5,0//
#include <stdio.h>
int main(){
    float media;
    printf("Qual a media do aluno?");
    scanf("%f", &media);
    if (media>=5){
        printf("Aprovado!!!");
    }
    if (media<5){
        printf("Reprovado, volte ano que vem!!!");
    }
    printf("A a sua media e: %.1f", media);
}
