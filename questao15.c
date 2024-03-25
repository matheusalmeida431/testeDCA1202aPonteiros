#include <stdio.h>
#include <stdlib.h>

// Função para comparar dois floats (necessária para qsort)
int comparaFloats(const void *a, const void *b) {
    const float *floatA = (const float *)a;
    const float *floatB = (const float *)b;
    
    if (*floatA < *floatB) return -1;
    else if (*floatA > *floatB) return 1;
    else return 0;
}

// Função para ler 'n' valores float e apresentá-los em ordem crescente
void lerEOrdenarFloats(int n) {
    float *valores = (float *)malloc(n * sizeof(float)); // Aloca memória para armazenar os valores
    if (valores == NULL) {
        printf("Erro: Falha na alocação de memória.\n");
        return;
    }

    // Leitura dos valores
    printf("Digite %d valores float:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &valores[i]);
    }

    // Ordenação dos valores
    qsort(valores, n, sizeof(float), comparaFloats);

    // Apresentação dos valores em ordem crescente
    printf("Valores em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\n", valores[i]);
    }

    // Libera a memória alocada
    free(valores);
}

int main() {
    int n;
    printf("Quantos valores float deseja inserir? ");
    scanf("%d", &n);
    
    lerEOrdenarFloats(n);

    return 0;
}
