#include <stdio.h>
#include <stdlib.h>

// Função para comparar dois floats (necessária para qsort)
int comparaFloats(const void *a, const void *b) {
    // Convertendo os ponteiros genéricos para ponteiros de floats
    const float *floatA = (const float *)a;
    const float *floatB = (const float *)b;
    
    // Comparando os valores dos floats
    if (*floatA < *floatB) return -1; // Se floatA é menor que floatB, retorna -1
    else if (*floatA > *floatB) return 1; // Se floatA é maior que floatB, retorna 1
    else return 0; // Se floatA é igual a floatB, retorna 0
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
        scanf("%f", &valores[i]); // Lê cada valor float e armazena no array 'valores'
    }

    // Ordenação dos valores usando a função qsort e a função de comparação comparaFloats
    qsort(valores, n, sizeof(float), comparaFloats);

    // Apresentação dos valores em ordem crescente
    printf("Valores em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f\n", valores[i]); // Imprime cada valor float com 2 casas decimais
    }

    // Libera a memória alocada para 'valores'
    free(valores);
}

int main() {
    int n;
    printf("Quantos valores float deseja inserir? ");
    scanf("%d", &n); // Lê o número de valores float a serem inseridos pelo usuário
    
    // Chama a função lerEOrdenarFloats para ler e ordenar os valores float
    lerEOrdenarFloats(n);

    return 0;
}
