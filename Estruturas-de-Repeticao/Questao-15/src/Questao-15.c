// Crie um programa que leia 5 números e exiba a soma total.

//--------------------------------------------------------------------------//

#include <stdio.h> // Biblioteca para entrada e saída de dados

int main() {

    int numero; // Armazena cada número digitado
    int soma = 0; // Acumula a soma dos números
    int i; // Controla o laço de repetição

    printf("=== Calculadora de Pontos ===\n\n"); // Título do programa

    // Repete 5 vezes para ler 5 números
    for (i = 1; i <= 5; i++) {

        printf("Digite o %d numero: ", i); // Solicita um número
        scanf("%d", &numero); // Lê o número digitado

        soma = soma + numero; // Adiciona o número à soma total

    }

    printf("\nSoma total: %d\n", soma); // Exibe o resultado final

    return 0; // Encerra o programa
}
