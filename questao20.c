#include <stdio.h>
#include <stdlib.h>

void multiplica_matrizes(int *A, int *B, int *C, int linhasA, int colunasA, int colunasB) {
       for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            *(C + i * colunasB + j) = 0;
            for (int k = 0; k < colunasA; k++) {
                *(C + i * colunasB + j) += *(A + i * colunasA + k) * *(B + k * colunasB + j);
            }
        }
    }
}

void imprimir_matrix(int *matrix, int lins, int cols) {
    int i, j;

    for (i = 0; i < lins; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", *(matrix + i * cols + j));
        }
        printf("\n");
    }
}

void input_matrix(int *matrix, int lins, int cols) {
    int i, j;

    printf("Insira os valores da matriz (%d x %d):\n", lins, cols);
    for (i = 0; i < lins; i++) {
        for (j = 0; j < cols; j++) {
            printf("Valor para a posição [%d][%d]: ", i, j);
            scanf("%d", matrix + i * cols + j);
        }
    }
}

int main() {
    int linhasA, colunasA, linhasB, colunasB;

    printf("Insira o número de linhas da matriz A: ");
    scanf("%d", &linhasA);
    printf("Insira o número de colunas da matriz A: ");
    scanf("%d", &colunasA);
    printf("Insira o número de linhas da matriz B: ");
    scanf("%d", &linhasB);
    printf("Insira o número de colunas da matriz B: ");
    scanf("%d", &colunasB);

    if (colunasA != linhasB) {
        printf("Erro: O número de colunas da matriz A deve ser igual ao número de linhas da matriz B.\n");
        return 1;
    }

    int *A = (int *)malloc(linhasA * colunasA * sizeof(int));
    int *B = (int *)malloc(linhasB * colunasB * sizeof(int));
    int *C = (int *)malloc(linhasA * colunasB * sizeof(int));

    input_matrix(A, linhasA, colunasA);
    input_matrix(B, linhasB, colunasB);

    multiplica_matrizes(A, B, C, linhasA, colunasA, colunasB);

    printf("\nMatriz A:\n");
    imprimir_matrix(A, linhasA, colunasA);

    printf("\nMatriz B:\n");
    imprimir_matrix(B, linhasB, colunasB);

    printf("\nMatriz C (Resultado da multiplicação AxB):\n");
    imprimir_matrix(C, linhasA, colunasB);

    free(A);
    free(B);
    free(C);

    return 0;
}
