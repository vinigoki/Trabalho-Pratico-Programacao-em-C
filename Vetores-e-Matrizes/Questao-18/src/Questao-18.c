//Crie um programa que leia 10 números em um vetor e informe:
//maior valor;
//posição do maior valor. 

#include <stdio.h> // Inclui a biblioteca padrão para comandos de entrada e saída (printf e scanf)

int main() {
    // DECLARAÇÃO DE VARIÁVEIS
    // Criamos um vetor (array) de inteiros com 10 posições (índices de 0 a 9)
    int numeros[10];
    
    // Variável 'i' servirá como o contador dos nossos laços de repetição (loops)
    int i;
    
    // Variáveis auxiliares para registrar o maior número encontrado e a sua respectiva posição
    int maior_valor, posicao_maior;

    // --- ENTRADA DE DADOS ---
    printf("Digite 10 numeros inteiros:\n");
    
    // Este primeiro laço serve para abrir cada uma das 10 'gavetas' do vetor e guardar o valor digitado
    // O loop começa em 0 e vai até 9 (enquanto i < 10)
    for (i = 0; i < 10; i++) {
        // Exibe "Numero 1: ", "Numero 2: " ... apenas para ficar amigável na tela (i + 1)
        printf("Numero %d: ", i + 1); 
        
        // Lê o número e o salva especificamente na posição 'i' do nosso vetor
        scanf("%d", &numeros[i]);      
    }

    // --- LÓGICA DE BUSCA DO MAIOR VALOR ---
    
    // PASSO 1: De forma inicial, assumimos que o primeiro número digitado (posição 0) é o maior de todos.
    maior_valor = numeros[0];
    
    // Registramos que, por enquanto, a posição do maior elemento também é a 0.
    posicao_maior = 0; 

    // PASSO 2: Criamos um novo laço para percorrer as gavetas restantes (do índice 1 até o 9)
    for (i = 1; i < 10; i++) {
        
        // SE o número que está na gaveta atual [i] for MAIOR do que o nosso recorde atual ('maior_valor')...
        if (numeros[i] > maior_valor) {
            
            // ...o recorde é quebrado! Atualizamos a variável com este novo número maior...
            maior_valor = numeros[i];  
            
            // ...e salvamos o número da gaveta atual ('i') onde esse novo campeão foi encontrado.
            posicao_maior = i;         
        }
    }

    // --- EXIBIÇÃO DOS RESULTADOS ---
    printf("\n --- Resultado --- \n");
    
    // Imprime o maior número que ficou guardado após a varredura completa
    printf("Maior valor encontrado: %d\n", maior_valor);
    
    // Mostramos o índice real do sistema (base 0) e a contagem humana (base 1) para melhor entendimento
    printf("Posicao no vetor (indice): %d (Ou a %dª posicao digitada)\n", posicao_maior, posicao_maior + 1);

    return 0; // Finaliza o programa indicando sucesso ao sistema operacional
}
