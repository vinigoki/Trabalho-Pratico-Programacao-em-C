#include <stdio.h> // Inclui a biblioteca padrão para comandos de entrada e saída (printf e scanf)

int main() {
    
    // Declaração de duas variáveis do tipo inteiro para guardar os números informados pelo usuário
    int num1, num2;
    
    // --- ENTRADA DE DADOS ---
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1); // Lê o valor digitado e o armazena na variável num1
    
    printf("Digite o segundo numero: ");
    scanf("%d", &num2); // Lê o valor digitado e o armazena na variável num2
    
    // --- EXIBIÇÃO DO RESULTADO ---
    
    printf("\n ---Resultados--- \n"); // Exibe uma linha divisória para organizar a tela
    
    // --- ESTRUTURA CONDICIONAL (TOMADA DE DECISÃO) ---
    
    // Condição 1: Verifica se num1 é igual a num2.
    // Nota: Em C, usamos '==' para comparar igualdade, pois um único '=' serve para atribuir valor.
    if(num1 == num2) {
        printf("Os numeros sao iguais"); // Executado se a condição 1 for VERDADEIRA
    }
    
    // Condição 2: Se não forem iguais, entra aqui e testa se num1 é maior que num2.
    else if(num1 > num2) {
        // Executado se a condição 1 for FALSA e a condição 2 for VERDADEIRA
        printf("O numero: %d eh maior que o numero: %d", num1, num2);
    }
    
    // Caminho padrão (Senão): Se os números não forem iguais E o num1 não for maior,
    // a única possibilidade matemática restante é o num1 ser menor que num2.
    else {
        // Executado se TODAS as condições anteriores forem FALSAS
        printf("o numero: %d eh menor que o numero: %d", num1, num2);
    }
    
    return 0; // Indica ao sistema operacional que o programa terminou com sucesso
}
