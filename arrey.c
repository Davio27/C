// #include <stdio.h>

// int main() {
//     int numeros[100],x = 75;
//   printf("%i\xb2\n", x);
//     for (int i = 0; i < 100; i++) {
//         printf("Digite o %i numero: ", i+1);
//         scanf("%i", &numeros[i]);
//     }

//     printf("\nQuadrados dos numeros digitados:\n");

//     for (int i = 0; i < 100; i++) {
//         int quadrado = numeros[i] * numeros[i];
//         printf("%i ao quadrado = %i\n", numeros[i], quadrado);
//     }
// }

// 2) Fa?a um algoritmo que leia o nome, o sexo e o estado civil de uma pessoa. Caso sexo seja "F e e
// estado civil seja "CASADA", solicitar o tempo de casada (anos)

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Olá meu mundão");
    int tempoCasada;
    char nome[50];
    char sexo[10];
    char estadoCivil[20];

    // Solicita o nome da pessoa
    printf("Digite seu nome: ");
    gets(nome);

    // Solicita o sexo da pessoa
    printf("Digite seu sexo (M ou F): ");
    gets(sexo);

    // Solicita o estado civil da pessoa
    printf("Digite seu estado civil: ");
    gets(estadoCivil);

    // Remove o caractere de nova linha das strings lidas com fgets
    // nome[strcspn(nome, "\n")] = 0;
    // sexo[strcspn(sexo, "\n")] = 0;
    estadoCivil[strcspn(estadoCivil, "\n")] = 0;

    // Verifica se a pessoa ? do sexo feminino e casada
    if (sexo == 'F' && (strcmp(estadoCivil, "CASADA") == 0)) {

        // Solicita o tempo de casamento em anos
        printf("Digite o tempo de casamento em anos: ");
        scanf("%i", &tempoCasada);

        // Imprime o nome da pessoa e o tempo de casamento
        printf("%s e do sexo %s, casada ha %i anos.\n", nome, sexo, tempoCasada);
    } 
    else {
        // Imprime o nome, o sexo e o estado civil da pessoa
        printf("%s e do sexo %s e o estado civil e %s.\n", nome, sexo, estadoCivil);
    }

}
