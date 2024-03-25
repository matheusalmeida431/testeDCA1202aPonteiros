// Um memory leak ocorre quando um programa de computador aloca memória dinamicamente durante sua execução, mas não libera essa memória quando não é mais necessária. Isso pode resultar em um consumo progressivo de memória à medida que o programa é executado, eventualmente levando a uma falha no sistema devido à falta de memória disponível.

// exemplos de códigos:

// Exemplo 1: Alocação de memória dinâmica sem liberação


#include <stdlib.h>

int main() {
    while (1) {
        int *ptr = (int *)malloc(sizeof(int));
        // Lógica do programa...
    }
    return 0;
}




// Exemplo 2: Memory Leak em um Programa com Loop Infinito:

#include <stdlib.h>

int main() {
    while (1) {
        char *str = (char *)malloc(100 * sizeof(char));
        // Lógica do programa...
    }
    return 0;
}


// Exemplo 3: Memory Leak em uma Função Recursiva:

#include <stdlib.h>
void recursiveFunction(int n) {
    if (n <= 0) {
        return;
    }
    char *buffer = (char *)malloc(100 * sizeof(char));
    if (buffer == NULL) {
        return; // Tratamento de erro de alocação de memória
    }
    // Processamento com buffer...
    recursiveFunction(n - 1);
    // Liberar buffer (faltando esta parte no exemplo)
}

int main() {
    recursiveFunction(100);
    return 0;
}
