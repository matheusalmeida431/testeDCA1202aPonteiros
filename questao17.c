
#include <stdio.h>
#include <stdlib.h>

// Função de comparação para ordenação crescente de inteiros
int comparaInteiros(const void *a, const void *b) {
    const int *intA = (const int *)a;
    const int *intB = (const int *)b;
    return (*intA - *intB);
}

int main() {
    int array[] = {5, 2, 9, 1, 6};
    int numElementos = sizeof(array) / sizeof(array[0]);

  // Imprime o array ordenado
  printf("Array desordenada:\n");
  for (int i = 0; i < numElementos; i++) {
      printf("%d ", array[i]);
  }
  printf("\n");
  
    // Usa a função qsort para ordenar o array
    qsort(array, numElementos, sizeof(int), comparaInteiros);

    // Imprime o array ordenado
    printf("Array ordenado:\n");
    for (int i = 0; i < numElementos; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}





