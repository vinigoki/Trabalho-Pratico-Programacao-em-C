// Crie um programa que utilize operadores lógicos (&&, ||, !) para verificar se um aluno foi aprovado Condições:
// Média maior ou igual a 7;
// Frequência maior ou igual a 75%.

#include <stdio.h>

int main() {

    // Variáveis que irão armazenar a nota final
    // e a porcentagem de presença do participante.
    float notaFinal, presenca;

    // Solicita ao usuário a nota final obtida no curso.
    printf("=== Curso de Guitarra Rock Academy ===\n");
    printf("Digite a nota final do participante: ");
    scanf("%f", &notaFinal);

    // Solicita a porcentagem de presença nas aulas.
    printf("Digite a porcentagem de presenca do participante: ");
    scanf("%f", &presenca);

    // O operador && (E) exige que as duas condições
    // sejam verdadeiras ao mesmo tempo:
    // 1. Nota maior ou igual a 7.
    // 2. Presença maior ou igual a 75%.
    if (notaFinal >= 7 && presenca >= 75) {

        // Se as duas condições forem verdadeiras,
        // o participante recebe o certificado.
        printf("\nResultado: CERTIFICADO APROVADO!\n");

    } else {

        // Caso uma ou ambas as condições sejam falsas,
        // o participante não recebe o certificado.
        printf("\nResultado: CERTIFICADO NEGADO!\n");
    }

    printf("\n--- Verificacao das Condicoes ---\n");

    // Demonstração do operador &&
    // Retorna 1 (verdadeiro) se as duas condições forem verdadeiras.
    printf("Nota >= 7 E Presenca >= 75: %d\n",
           notaFinal >= 7 && presenca >= 75);

    // Demonstração do operador ||
    // Retorna 1 se pelo menos uma das condições for verdadeira.
    printf("Nota >= 7 OU Presenca >= 75: %d\n",
           notaFinal >= 7 || presenca >= 75);

    // Demonstração do operador !
    // Inverte o resultado da condição.
    // Se nota >= 7 for verdadeiro, o resultado será 0.
    // Se nota >= 7 for falso, o resultado será 1.
    printf("NAO (Nota >= 7): %d\n",
           !(notaFinal >= 7));

    // Encerra o programa indicando que tudo ocorreu corretamente.
    return 0;
}
