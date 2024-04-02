#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função de comparação para qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Função para ordenar sem qsort
void Ordenar_manual(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    clock_t start, end;
    double cpu_time_used;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);

    int *arr1 = (int*)malloc(n * sizeof(int));
    int *arr2 = (int*)malloc(n * sizeof(int));

    // Preenche o array com números aleatórios
    srand(time(NULL));
    for (i = 0; i < n; i++) {
        arr1[i] = rand() % 1000; // Números aleatórios entre 0 e 999 (você pode ajustar conforme necessário)
        arr2[i] = arr1[i];
    }

    // Ordenação com qsort
    start = clock();
    qsort(arr1, n, sizeof(int), compare);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Tempo usando qsort: %f segundos\n", cpu_time_used);

    // Ordenação sem qsort (Bubble Sort)
    start = clock();
    Ordenar_manual(arr2, n);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Tempo sem qsort: %f segundos\n", cpu_time_used);

    // Liberar memória alocada
    free(arr1);
    free(arr2);

    return 0;
}

/*

Para arrays pequenos ou em alguns casos específicos, a maneira manual pode parecer ser mais rápido, 
devido à sua simplicidade e menor sobrecarga em comparação com o qsort. 
No entanto, para arrays grandes, a maneira manual se torna drasticamente mais lento 
em comparação com algoritmos mais eficientes, como o qsort.

*/
