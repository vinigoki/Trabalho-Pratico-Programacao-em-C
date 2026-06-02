//Crie um programa que converta temperatura de Celsius para Fahrenheit.
//Utilize a fórmula:
//𝐹 =9𝐶/5 + 32

#include <stdio.h> // Inclui a biblioteca para comandos de entrada e saída (printf e scanf)

int main() {
    // Declaração das variáveis como float (número real) para aceitar temperaturas com vírgula
    float celsius, fahrenheit;

    // --- ENTRADA DE DADOS ---
    printf("Digite a temperatura em graus Celsius: ");
    // Lê a temperatura em Celsius. Usamos %f porque a variável é do tipo float
    scanf("%f", &celsius);

    // --- CÁLCULO DA CONVERSÃO ---
    // Aplicando a fórmula: F = (9 * C) / 5 + 32
    // Nota: Usamos 9.0 e 5.0 para garantir que o C faça uma divisão real exata
    fahrenheit = (9.0 * celsius) / 5.0 + 32.0;

    // --- EXIBIÇÃO DO RESULTADO ---
    printf("\n --- Resultado --- \n");
    // O %.1f formata o número para exibir apenas 1 casa decimal (ex: 25.5 em vez de 25.500000)
    printf("%.1f C eh igual a %.1f F\n", celsius, fahrenheit);

    return 0; // Indica que o programa terminou corretamente
}
