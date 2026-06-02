//Crie uma matriz 3x3 e exiba:
//todos os elementos da diagonal principal. 

#include <stdio.h> // Inclui a biblioteca padrão para comandos de entrada e saída (printf e scanf)

int main() {
    // DECLARAÇÃO DE VARIÁVEIS
    // Criamos uma matriz (tabela) de inteiros com 3 linhas e 3 colunas (total de 9 elementos)
    int matriz[3][3];
    
    // Variáveis que vão servir como contadores para navegar pelas linhas e colunas
    int linha, coluna;

    // --- ENTRADA DE DADOS ---
    printf("Digite os elementos da matriz 3x3:\n");
    
    // O primeiro 'for' escolhe a LINHA atual (vai da linha 0 até a 2)
    for (linha = 0; linha < 3; linha++) {
        
        // O segundo 'for' passa por cada COLUNA daquela linha (vai da coluna 0 até a 2)
        for (coluna = 0; coluna < 3; coluna++) {
            
            // Exibe a posição exata na tela para guiar o usuário (Ex: Elemento [0][0]:)
            printf("Elemento [%d][%d]: ", linha, coluna);
            
            // Salva o valor digitado no cruzamento exato da linha com a coluna atual
            scanf("%d", &matriz[linha][coluna]); 
        }
    }

    // --- EXIBIÇÃO DA MATRIZ EM FORMATO DE TABELA ---
    printf("\n --- Matriz Digitada --- \n");
    
    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            // O '\t' (Tab) serve para dar um espaçamento fixo e deixar as colunas alinhadas
            printf("%d\t", matriz[linha][coluna]); 
        }
        // Sempre que o loop interno terminar uma linha inteira, pulamos para a próxima linha na tela (\n)
        printf("\n"); 
    }

    // --- EXIBIÇÃO DA DIAGONAL PRINCIPAL ---
    printf("\n --- Elementos da Diagonal Principal --- \n");
    
    // TRUQUE LÓGICO: Na diagonal principal, o número da linha é igual ao número da coluna ([0][0], [1][1], [2][2]).
    // Por isso, precisamos de apenas UM laço 'for'. Usamos a variável 'linha' tanto para a linha quanto para a coluna!
    for (linha = 0; linha < 3; linha++) {
        // Exibe o número da diagonal seguido por um espaço em branco
        printf("%d ", matriz[linha][linha]); 
    }
    printf("\n"); // Pula uma linha no final de tudo

    return 0; // Indica ao sistema operacional que o programa rodou com sucesso
}
