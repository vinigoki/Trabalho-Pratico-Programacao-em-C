//Crie um programa que exiba a tabuada de um número informado pelo usuário.

#include <stdio.h> // Inclui a biblioteca padrão para comandos de entrada e saída

int main() {
    // Declaração das variáveis
    // 'numero' guardará a tabuada escolhida e 'i' será o nosso contador do loop
    int numero, i;

    // --- ENTRADA DE DADOS ---
    printf("Digite um numero para ver a sua tabuada: ");
    scanf("%d", &numero); // Lê o número inteiro informado pelo usuário

    // --- EXIBIÇÃO DO RESULTADO ---
    printf("\n --- Tabuada do %d --- \n", numero);

    // --- LAÇO DE REPETIÇÃO (FOR) ---
    // O loop começa com i = 1; 
    // Ele vai continuar repetindo ENQUANTO 'i' for menor ou igual a 10 (i <= 10);
    // A cada repetição, o 'i++' soma +1 ao valor de 'i' (1, depois 2, depois 3...)
    for (i = 1; i <= 10; i++) {
        
        // Calcula a multiplicação atual (o número fixo vezes o contador 'i')
        int resultado = numero * i;
        
        // Exibe a linha da tabuada formatada (Ex: 5 x 1 = 5)
        printf("%d x %d = %d\n", numero, i, resultado);
    }

    return 0; // Indica ao sistema operacional que o programa terminou com sucesso
}
