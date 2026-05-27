#include <stdio.h> // Biblioteca padrao de entrada e saida

int main() {

    // Criacao das variaveis do tipo float
    // float serve para armazenar numeros com casas decimais
    float dinheiroCarteira, precoProduto;

    // Exibe um titulo na tela
    printf("=== CALCULADORA DO MERCADO ===\n");

    // Pede ao usuario quanto dinheiro ele possui
    printf("Quanto dinheiro voce tem na carteira? R$ ");

    // scanf le o valor digitado pelo usuario
    // &dinheiroCarteira guarda o valor dentro da variavel
    scanf("%f", &dinheiroCarteira);

    // Pergunta o preco do produto
    printf("Qual o preco do produto? R$ ");

    // Guarda o preco digitado na variavel precoProduto
    scanf("%f", &precoProduto);

    // Linha para separar visualmente os resultados
    printf("\n===== RESULTADOS =====\n");

    // Soma dos dois valores
    // %.2f mostra o numero com 2 casas decimais
    printf("Soma dos valores: R$ %.2f\n",
           dinheiroCarteira + precoProduto);

    // Subtracao entre os valores
    printf("Diferenca entre os valores: R$ %.2f\n",
           dinheiroCarteira - precoProduto);

    // Multiplicacao dos valores
    printf("Multiplicacao dos valores: %.2f\n",
           dinheiroCarteira * precoProduto);

    // Estrutura condicional IF
    // Verifica se o preco do produto e diferente de zero
    // Isso evita erro na divisao
    if (precoProduto != 0) {

        // Realiza a divisao normalmente
        printf("Divisao dos valores: %.2f\n",
               dinheiroCarteira / precoProduto);

    } else {

        // Executa caso o valor seja zero
        printf("Nao e possivel dividir por zero.\n");
    }

    // return 0 indica que o programa terminou corretamente
    return 0;
}
