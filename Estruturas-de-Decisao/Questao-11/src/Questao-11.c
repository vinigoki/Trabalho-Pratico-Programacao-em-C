//Crie um programa que leia duas notas e informe:
  //aprovado;
  //recuperação;
  //reprovado;
//Considere:
  //média ≥ 7 → aprovado;
  //média entre 5 e 6,9 → recuperação;
  //média < 5 → reprovado;

//------------------------------------------------------------------------------------//
#include <stdio.h> // Biblioteca para usar printf e scanf

int main() {

    float nota1, nota2, media; // Variáveis para armazenar as notas e a média

    printf("=== Processo Seletivo de Estagiarios ===\n"); // Exibe o título do programa

    printf("Digite a nota da primeira avaliacao: "); // Solicita a primeira nota
    scanf("%f", &nota1); // Lê a primeira nota digitada

    printf("Digite a nota da segunda avaliacao: "); // Solicita a segunda nota
    scanf("%f", &nota2); // Lê a segunda nota digitada

    media = (nota1 + nota2) / 2; // Calcula a média das duas notas

    printf("\nMedia final: %.1f\n", media); // Mostra a média com 1 casa decimal

    if (media >= 7) { // Verifica se a média é maior ou igual a 7

        printf("Resultado: APROVADO!\n"); // Exibe aprovado

    } else if (media >= 5) { // Verifica se a média está entre 5 e 6,9

        printf("Resultado: RECUPERACAO!\n"); // Exibe recuperação

    } else { // Executa caso a média seja menor que 5

        printf("Resultado: REPROVADO!\n"); // Exibe reprovado

    }

    return 0; // Finaliza o programa informando que tudo ocorreu corretamente
}
