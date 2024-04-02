#include <stdio.h>
#include <stdlib.h>

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

    // Algoritmo para ordenar os valores em ordem crescente
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (valores[j] > valores[j + 1]) {
                // Troca os valores
                float temp = valores[j];
                valores[j] = valores[j + 1];
                valores[j + 1] = temp;
            }
        }
    }

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
