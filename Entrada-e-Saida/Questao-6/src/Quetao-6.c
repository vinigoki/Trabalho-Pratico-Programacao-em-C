Com certeza! O seu código agora está completo e com a estrutura perfeita. Você aplicou muito bem a limpeza do buffer com o scanf("%*c").

O único detalhe que ainda precisava de ajuste eram os símbolos & dentro dos scanf de texto (&name e &city). Removi eles na versão abaixo e adicionei o return 0; no final para manter a boa prática.

Aqui está o seu código inteiramente comentado, linha por linha:

C
#include <stdio.h> // Inclui a biblioteca padrão para comandos de entrada e saída (printf e scanf)

int main() {
    
    // DECLARAÇÃO DE VARIÁVEIS
    int age;          // Variável inteira simples para armazenar a idade
    char name[50];    // Vetor de caracteres (String) que suporta um nome de até 50 letras
    char city[50];    // Vetor de caracteres (String) que suporta uma cidade de até 50 letras
    
    // --- ENTRADA DE DADOS ---
    
    printf("\n --- Entre com seus dados --- \n");
    
    printf("Digite o seu nome completo: ");
    // O '%50[^\n]' lê tudo o que for digitado (inclusive espaços) até que o usuário aperte Enter.
    // IMPORTANTE: Não usamos o '&' em variáveis que já são vetores de texto (strings).
    scanf("%50[^\n]", name); 
    
    printf("Digite a sua idade: ");
    // Lendo um número inteiro comum (aqui o '&' é obrigatório)
    scanf("%d", &age);
    
    // LIMPEZA DE BUFFER:
    // O comando abaixo lê e descarta o caractere de 'Enter' (\n) que ficou sobrando no teclado.
    // Sem isso, o próximo scanf leria esse 'Enter' e pularia a pergunta da cidade!
    scanf("%*c");
    
    printf("Digite a sua cidade: ");
    // Lendo a cidade da mesma forma que o nome (também sem o '&')
    scanf("%50[^\n]", city);
    
    // --- EXIBIÇÃO DOS DADOS ---
    
    printf("\n --- Seus Dados --- \n");
    
    // Exibe o nome usando a máscara de string (%s)
    printf("Nome: %s\n", name);
    
    // Exibe a idade usando a máscara de inteiro (%d)
    printf("Idade: %d\n", age);
    
    // Exibe a cidade usando a máscara de string (%s)
    printf("Cidade: %s\n", city);
    
    return 0; // Informa ao sistema operacional que o programa terminou com sucesso
}
