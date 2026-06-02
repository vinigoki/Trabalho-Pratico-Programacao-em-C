//Crie um programa que calcule o fatorial de um número informado pelo usuário.

#include <stdio.h> // Inclui a biblioteca padrão para comandos de entrada e saída

int main() {
    int numero, i;
    
    // Usamos 'long long int' porque o resultado do fatorial cresce muito rápido e gera números gigantes.
    // Começamos com 1 porque o 1 é o elemento neutro da multiplicação (se começasse com 0, o resultado seria sempre 0).
    long long int fatorial = 1;

    // --- ENTRADA DE DADOS ---
    printf("Digite un numero inteiro nao-negativo: ");
    scanf("%d", &numero);

    // --- TRATAMENTO DE ERRO ---
    // Matematicamente, não existe fatorial de números negativos
    if (numero < 0) {
        printf("Erro: Nao existe fatorial de numero negativo!\n");
    } 
    else {
        // --- LAÇO DE REPETIÇÃO (FOR) ---
        // O loop começa com 'i' valendo o próprio número digitado (ex: 5);
        // Ele continua repetindo ENQUANTO 'i' for maior ou igual a 1 (i >= 1);
        // A cada repetição, o 'i--' subtrai 1 do valor de 'i' (vai descendo: 5, 4, 3, 2, 1).
        for (i = numero; i >= 1; i--) {
            // Multiplica o valor atual do fatorial pelo contador 'i' e guarda de volta
            fatorial = fatorial * i; 
        }

        // --- EXIBIÇÃO DO RESULTADO ---
        printf("\n --- Resultado --- \n");
        // Usamos %lld para exibir uma variável do tipo 'long long int'
        printf("O fatorial de %d (%d!) eh: %lld\n", numero, numero, fatorial);
    }

    return 0; // Indica ao sistema operacional que o programa rodou perfeitamente
}
