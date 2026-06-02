//Crie um programa que leia:
//dois números;
//uma operação matemática (+, -, *, /).
//Utilize switch para realizar a operação escolhida

#include <stdio.h> // Inclui a biblioteca padrão para comandos de entrada e saída (printf e scanf)

int main() {
    // Declaração de variáveis do tipo float (número real) para permitir contas com vírgula
    float num1, num2, resultado;
    
    // Declaração de uma variável do tipo char (caractere) para armazenar o símbolo da operação (+, -, *, /)
    char operacao;

    // --- ENTRADA DE DADOS ---
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1); // Lê o primeiro número real

    printf("Digite o segundo numero: ");
    scanf("%f", &num2); // Lê o segundo número real

    // LIMPEZA DE BUFFER:
    // O comando abaixo limpa o 'Enter' (\n) deixado pelo scanf anterior no teclado.
    // Sem isso, o próximo scanf leria o 'Enter' achando que é o símbolo da operação.
    scanf("%*c"); 

    printf("Escolha a operacao (+, -, *, /): ");
    scanf("%c", &operacao); // Lê o caractere correspondente à operação desejada

    printf("\n --- Resultado --- \n");

    // --- ESTRUTURA CONDICIONAL SWITCH ---
    // O switch analisa o conteúdo da variável 'operacao' e pula direto para o 'case' correspondente.
    switch (operacao) {
        
        // CASO o usuário tenha digitado o símbolo '+'
        case '+':
            resultado = num1 + num2; // Realiza a soma
            printf("%.2f + %.2f = %.2f\n", num1, num2, resultado); // Exibe com 2 casas decimais
            break; // O 'break' interrompe o switch e sai dele. Se não colocar, ele executa os cases de baixo!
            
        // CASO o usuário tenha digitado o símbolo '-'
        case '-':
            resultado = num1 - num2; // Realiza a subtração
            printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
            
        // CASO o usuário tenha digitado o símbolo '*'
        case '*':
            resultado = num1 * num2; // Realiza a multiplicação
            printf("%.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;
            
        // CASO o usuário tenha digitado o símbolo '/'
        case '/':
            // Proteção matemática: verifica se o segundo número NÃO É IGUAL (!=) a zero
            if (num2 != 0) {
                resultado = num1 / num2; // Realiza a divisão com segurança
                printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
            } else {
                // Se o num2 for zero, exibe uma mensagem de erro em vez de travar o programa
                printf("Erro: Nao eh possivel dividir por zero!\n");
            }
            break;
            
        // PADRÃO (SENÃO): Funciona caso o usuário digite qualquer coisa que não seja +, -, * ou /
        default:
            printf("Operacao invalida! Use apenas +, -, * ou /.\n");
            break; // O break no default é opcional, mas é uma boa prática colocá-lo
    }

    return 0; // Indica ao sistema operacional que o programa rodou perfeitamente
}
