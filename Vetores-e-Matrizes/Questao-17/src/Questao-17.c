// Crie um vetor de 5 posições, leia os valores e exiba todos os elementos.

//-----------------------------------------------------------------------------//

#include <stdio.h> // Biblioteca necessária para usar printf() e scanf()

int main() { // Início da função principal

    int numeros[5]; // Cria um vetor de inteiros com 5 posições
    int i; // Variável que controlará os laços for

    printf("=== Cadastro de Numeros ===\n\n"); // Exibe o título do programa

    for (i = 0; i < 5; i++) { // Repete 5 vezes (para as posições 0, 1, 2, 3 e 4)

        printf("Digite o valor da posicao %d: ", i); // Solicita um valor para a posição atual

        scanf("%d", &numeros[i]); // Lê o valor digitado e o armazena na posição i do vetor

    } // Fim do primeiro for

    printf("\nValores armazenados:\n"); // Exibe uma mensagem antes de mostrar os valores

    for (i = 0; i < 5; i++) { // Percorre novamente todas as posições do vetor

        printf("Posicao %d = %d\n", i, numeros[i]); // Mostra a posição e o valor armazenado nela

    } // Fim do segundo for

    return 0; // Encerra o programa indicando que não houve erros

} // Fim da função main
