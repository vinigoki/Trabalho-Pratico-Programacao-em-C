//Crie um programa que verifique se um número é:
//positivo;
//negativo;
//ou zero;

//--------------------------------------------------------------------------------//

#include <stdio.h>

int main() {

    // Variável que armazenará a temperatura informada pelo usuário.
    int temperatura;

    // Título do programa.
    printf("=== Analise de Temperatura ===\n");

    // Solicita ao usuário uma temperatura.
    printf("Digite uma temperatura inteira: ");
    scanf("%d", &temperatura);

    // Verifica se a temperatura é maior que zero.
    if (temperatura > 0) {

        // Executa este bloco se a condição for verdadeira.
        printf("A temperatura e POSITIVA.\n");

    }
    // Verifica se a temperatura é menor que zero.
    else if (temperatura < 0) {

        // Executa este bloco se a primeira condição for falsa
        // e esta condição for verdadeira.
        printf("A temperatura e NEGATIVA.\n");

    }
    else {

        // Este bloco é executado quando nenhuma das condições
        // anteriores é verdadeira, ou seja, quando o valor é zero.
        printf("A temperatura e ZERO.\n");

    }

    // Finaliza o programa.
    return 0;
}
