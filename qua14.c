//Receber a media do aluno e mostra se ele foi aprovado ou reprovado. Média = 5,0//
#include <stdio.h>
int main(){
    float av1, av2, avd, media;

    printf("Digite a nota da av1: ");
    scanf("%f", &av1);
    printf("Digite a nota da av2: ");
    scanf("%f", &av2);
    printf("Digite a nota da avd: ");
    scanf("%f", &avd);
    media=(av1 + av2 + avd)/3;

    printf("A sua media e: %.1f", media);

    if (media>=6)
    {
        printf("Aprovado!!!");
    }
    else
        if (media>=4)
        { printf("Faca a avaliacao novamente.");
        } 
    else{
        printf("Reprovado.");
    }

}