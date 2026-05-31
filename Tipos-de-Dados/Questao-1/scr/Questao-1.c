// Crie um programa que declare variáveis dos tipos
//inteiro;
//float;
//char;
// O programa deve armazenar:
//idade;
//altura;
//inicial do nome;
// Ao final, exiba os valores na tela.
//--------------------------------------------------------------------------------------------------//
#include <stdio.h> // Biblioteca padrão de entrada e saída (printf, scanf, fgets)

int main() {

    // Declaração das variáveis
    int idade;          // Guarda a idade do usuário (número inteiro)
    float altura;       // Guarda a altura do usuário (número decimal)
    char nome[50];      // Vetor de caracteres para armazenar o nome

    // Exibe uma mensagem pedindo o nome
    printf("Digite seu nome: ");

    // Lê o nome digitado pelo usuário
    // fgets lê textos com espaço e evita problemas de segurança
    fgets(nome, sizeof(nome), stdin);

    // Pede a idade do usuário
    printf("Digite sua idade: ");

    // Lê um número inteiro e salva na variável idade
    scanf("%d", &idade);

    // Pede a altura do usuário
    printf("Digite sua altura: ");

    // Lê um número decimal e salva na variável altura
    scanf("%f", &altura);

    // Exibe o nome digitado
    printf("Nome: %s", nome);

    // Exibe a idade
    printf("Idade: %d\n", idade);

    // Exibe a altura com 2 casas decimais
    printf("Altura: %.2f\n", altura);

    // Indica que o programa terminou corretamente
    return 0;
}
