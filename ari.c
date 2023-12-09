// Desenvolva um algoritmo em c para ler uma sequência de
// números inteiros com FLAG = 0, calcular e imprimir a
// média aritmética dos números lidos. media = soma/cont


#include <stdio.h>

int main() {
    int num, soma = 0, cont = 0;

printf("Digite um número inteiro (ou 0 para encerrar): ");
scanf("%d", &num);

while (num != 0) {
    soma += num;
    cont++;

    printf("Digite um número inteiro (ou 0 para encerrar): ");
    scanf("%d", &num);
}

if (cont > 0) {
    float media = (float) soma / cont;
    printf("A média dos números digitados é: %.2f\n", media);
} else {
    printf("Nenhum número foi digitado.\n");
}

}