//Crie um programa que leia dois números inteiros e exiba:
//soma; 
//divisão inteira;
//divisão real utilizando casting. 

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída (necessária para usar printf e scanf)

int main() {
    // Declaração de duas variáveis do tipo inteiro para armazenar os números que o usuário vai digitar
    int num1, num2;

    // --- LEITURA DOS DADOS ---
    
    // Exibe uma mensagem na tela pedindo o primeiro número
    printf("Digite o primeiro numero inteiro: ");
    // Lê o número inteiro digitado pelo usuário (%d) e o salva no endereço de memória da variável num1 (&num1)
    scanf("%d", &num1);
    
    // Exibe uma mensagem na tela pedindo o segundo número
    printf("Digite o segundo numero inteiro: ");
    // Lê o segundo número inteiro e o salva na variável num2
    scanf("%d", &num2);

    // --- OPERAÇÕES MATEMÁTICAS ---

    // Realiza a soma de dois inteiros e armazena o resultado em uma nova variável inteira chamada 'Soma'
    int Soma = num1 + num2;

    // Realiza a divisão inteira. Como 'num1' e 'num2' são inteiros, o C descarta qualquer número após a vírgula
    int Div_inte = num1 / num2;

    // Realiza a divisão real. O '(float)' antes de 'num1' faz o CASTING (conversão temporária).
    // O computador transforma 'num1' em um número real para o cálculo, garantindo que o resultado tenha casas decimais.
    float Div_real = (float)num1 / num2;

    // --- EXIBIÇÃO DOS RESULTADOS ---

    // Imprime um cabeçalho na tela. O '\n' serve para pular uma linha antes e depois do texto
    printf("\n ---Resultados--- \n");
    
    // Exibe o resultado da soma como um número inteiro (%d)
    printf("Soma: %d\n", Soma);
    
    // Exibe o resultado da divisão inteira (%d)
    printf("Divisao Inteira: %d\n", Div_inte);
    
    // Exibe o resultado da divisão real. O '%.2f' diz ao C para mostrar um número real (float) com apenas 2 casas decimais
    printf("Divisao Real (com casting): %.2f\n", Div_real); 

    // Indica ao sistema operacional que o programa terminou com sucesso (0 significa "sem erros")
    return 0;
}
