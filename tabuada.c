#include <stdio.h>

int main() {
    int tab, num, i = 1;

    printf("Digite um número inteiro para a tabuada: ");
    scanf("%d", &tab);

    printf("Digite um número inteiro para o limite superior: ");
    scanf("%d", &num);

    while (i <+ num)
    {   i++;
        printf("%d x %d = %d\n", tab, i, tab * i);
        
    }
    

    // for (i = 1; i <= num; i++) {
    //     printf("%d x %d = %d\n", tab, i, tab * i);
    // }

}
