#include <stdio.h>
#include <stdlib.h>

// Protótipo da função de comparação
typedef int (*Comparacao)(const void *, const void *);

// Função de comparação para ordenação crescente de inteiros
int comparaInteiros(const void *a, const void *b) {
    const int *intA = (const int *)a;
    const int *intB = (const int *)b;
    return (*intA - *intB);
}

// Função de ordenação personalizada para inteiros
void ordenarInteiros(int *array, int numElementos, Comparacao comp) {
    for (int i = 0; i < numElementos - 1; i++) {
        for (int j = 0; j < numElementos - i - 1; j++) {
            if (comp(&array[j], &array[j + 1]) > 0) {
                // Troca os elementos se estiverem fora de ordem
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int array[] = {5, 2, 9, 1, 6};
    int numElementos = sizeof(array) / sizeof(array[0]);

    // Chama a função de ordenação personalizada passando o array, o número de elementos e a função de comparação
    ordenarInteiros(array, numElementos, comparaInteiros);

    // Imprime o array ordenado
    printf("Array ordenado:\n");
    for (int i = 0; i < numElementos; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

