#include <stdio.h>
int main(){
    float valconta, ac=0;
    int cont=1;
    char resp[4];

    while (cont=10){
    printf("Valor da Compra: ");
        scanf("%f", &valconta);

            if (valconta>250){   valconta = valconta*0.93;
            }  
        printf("\nCliente %i: %.2f\n\n", cont, valconta);
        ac=ac+valconta;
        printf("Deseja encerrar o dia? Digite sim para sair");
        scanf(" %s", resp);  
            if (resp == "sair"){ break;

                }
    
            

        }
         
        printf("Faturamento do dia: %.2f", ac);
    }
    
