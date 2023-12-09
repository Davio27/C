#include <stdio.h>
int main(){
   float av1, av2, media;
//    receber o valor da av1
printf("Digite a AV1: ");
scanf("%f", &av1);

//    receber o valor da av2
printf("Digite a AV2: ");
scanf("%f", &av2);

media = (av1+av2)/2;

printf("Sua media e = %.2f\n", media);


if (media > 6){printf("Esta aprovado!!! Pode ficar tranquilo");} else if (media == 6){printf("Voce passou por pouco");} else {printf("Voce tera que fazer a AV3");}
 



    
}

// >= maior ou igual

// <= menor ou igual

// == é igual

// != é diferete de

// > é maior

// < é menor