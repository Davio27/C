#include <stdio.h>
int main()
{
    int conta=1, cont1=1, tab1, tab2, tab3, tab4, tab5, tab6, res;
    printf("digite o 1 valor da tabuada que deseja: ");
    scanf("%i", &tab1);
    printf("digite o 2 valor da tabuada que deseja: ");
    scanf("%i", &tab2);
    printf("digite o 3 valor da tabuada que deseja: ");
    scanf("%i", &tab3);
     printf("digite o 4 valor da tabuada que deseja: ");
    scanf("%i", &tab4);
    printf("digite o 5 valor da tabuada que deseja: ");
    scanf("%i", &tab5);
    printf("digite o 6 valor da tabuada que deseja: ");
    scanf("%i", &tab6);

   
    printf("----------=----------=----------=----------=----------=----------=\n");
    while (conta <= 9)
    {
        res = tab1 * conta;
        res = tab2 * conta;
        res = tab3 * conta;
        printf("| %i x %i = %.2i || %i x %i = %.2i || %i x %i = %.2i |\n", tab1, conta, res, tab2, conta, res, tab3, conta, res);
        
       conta = conta + 1;
    }
   
    printf("----------=----------=----------=----------=----------=----------=\n");
   
    while (cont1 <= 9)
    {
        res = tab4 * cont1;
        res = tab5 * cont1;
        res = tab6 * cont1;
        printf("| %i x %i = %.2i || %i x %i = %.2i || %i x %i = %.2i |\n", tab4, cont1, res, tab5, cont1, res, tab6, cont1, res);
       cont1 = cont1 + 1;
    }
   
     printf("----------=----------=----------=----------=----------=----------=\n");

}