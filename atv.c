#include<stdio.h>
 int main(){

  char  nome[30];
   float qht, vht, va, vt, vr, sal, qhx, saldo, vhx;

    printf("Nome do funcionario:");
     scanf("%s", nome);
      
      printf("Quantidades de horas trabalhadas:");
       scanf("%f", &qht);

        printf("Valor da hora trabalhada:");
         scanf("%f", &vht);

          printf("Valor do Vale Alimentacao:");
           scanf("%f", &va);

            printf("Valor do Vale Refeicao:");
             scanf("%f", &vr);
              
              printf("Valor do Vale Transporte:");
               scanf("%f", &vt);
              
                printf("Quantidade de hora extra:");
                 scanf("%f", &qhx);
                  
              vhx=qhx*vht;
              sal=qht*vht+va+vr+vt;
              saldo=vhx+sal;
               
               printf("%s tem salario equivalente a %.2f", nome, saldo);

 }