#include <stdio.h>
#include <stdlib.h>

// Função para alocar uma matriz tridimensional de inteiros
int ***alocarMatrizTridimensional(int altura, int largura, int profundidade) {
    int ***matriz;
    int i, j;

    // Alocar o array de ponteiros para os planos (alturas)
    matriz = (int ***)malloc(altura * sizeof(int **));
    if (matriz == NULL) {
        printf("Erro ao alocar memória para as alturas da matriz.\n");
        exit(EXIT_FAILURE);
    }

    // Alocar os planos (alturas)
    for (i = 0; i < altura; i++) {
        matriz[i] = (int **)malloc(largura * sizeof(int *));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar memória para as larguras da matriz.\n");
            exit(EXIT_FAILURE);
        }
        // Alocar as colunas (larguras)
        for (j = 0; j < largura; j++) {
            matriz[i][j] = (int *)malloc(profundidade * sizeof(int));
            if (matriz[i][j] == NULL) {
                printf("Erro ao alocar memória para as profundidades da matriz.\n");
                exit(EXIT_FAILURE);
            }
        }
    }

    return matriz;
}

// Função para liberar a memória alocada para a matriz tridimensional
void liberarMatrizTridimensional(int ***matriz, int altura, int largura) {
    int i, j;

    // Liberar as colunas (larguras)
    for (i = 0; i < altura; i++) {
        for (j = 0; j < largura; j++) {
            free(matriz[i][j]);
        }
        free(matriz[i]);
    }

    // Liberar o array de ponteiros para os planos (alturas)
    free(matriz);
}

// Função para imprimir um dos planos da matriz tridimensional
void imprimirPlano(int ***matriz, int altura, int largura, int profundidade, int plano) {
    printf("Plano %d:\n", plano);
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            printf("%d ", matriz[i][j][plano]);
        }
        printf("\n");
    }
}

// Função para modificar o estado de um elemento da matriz tridimensional
void modificarElemento(int ***matriz, int altura, int largura, int profundidade, int x, int y, int z, int estado) {
    if (x >= 0 && x < altura && y >= 0 && y < largura && z >= 0 && z < profundidade) {
        matriz[x][y][z] = estado;
    } else {
        printf("Coordenadas fora dos limites da matriz.\n");
    }
}

int main() {
    int altura, largura, profundidade;
    int ***matriz;

    // Solicitar as dimensões da matriz tridimensional
    printf("Digite a altura da matriz: ");
    scanf("%d", &altura);
    printf("Digite a largura da matriz: ");
    scanf("%d", &largura);
    printf("Digite a profundidade da matriz: ");
    scanf("%d", &profundidade);

    // Alocar a matriz tridimensional
    matriz = alocarMatrizTridimensional(altura, largura, profundidade);

    // Exemplo: preencher a matriz com valores 1
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            for (int k = 0; k < profundidade; k++) {
                matriz[i][j][k] = 1;
            }
        }
    }

    // Exemplo: imprimir um plano da matriz
    imprimirPlano(matriz, altura, largura, profundidade, 0);

    // Exemplo: modificar o estado de um elemento da matriz
    modificarElemento(matriz, altura, largura, profundidade, 1, 1, 1, 0);

    // Exemplo: imprimir novamente o plano modificado
    imprimirPlano(matriz, altura, largura, profundidade, 0);

    // Liberar a memória alocada para a matriz tridimensional
    liberarMatrizTridimensional(matriz, altura, largura);

    return 0;
}
