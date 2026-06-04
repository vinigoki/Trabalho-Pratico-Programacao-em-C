//Crie um programa que leia um número inteiro e informe se ele é:
//par;
//ímpar. 

#include <stdio.h> // Biblioteca padrão para comandos de entrada e saída

int main() {
    int numero;

    // --- ENTRADA DE DADOS ---
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero); // Lê o número inteiro e o guarda na variável

    printf("\n --- Resultado --- \n");

    // --- LÓGICA DO PAR OU ÍMPAR ---
    // O operador '%' pega o RESTO da divisão do 'numero' por 2.
    // Se o resto for igual (==) a 0, significa que o número é divisível por 2.
    if (numero % 2 == 0) {
        printf("O numero %d eh PAR.\n", numero);
    } 
    // Se o resto não for 0, só pode ser 1, logo o número é ímpar
    else {
        printf("O numero %d eh IMPAR.\n", numero);
    }

    return 0; // Finaliza o programa corretamente
}
