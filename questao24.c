#include <stdio.h>

#define LINHAS 8
#define COLUNAS 8

// Função para enviar o estado via porta serial
void send(unsigned long estado) {
    // Implementação da função send
    printf("Estado enviado via porta serial: %llu\n", estado);
}

int main() {
    // Definição da matriz de leds
    unsigned char m[LINHAS][COLUNAS] = {
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1}
    };

    // Variável para armazenar o estado codificado
    unsigned long estado = 0;

    // Codificação da matriz na variável de 64 bits
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            // Atribui o estado do led à posição correspondente na variável
            estado |= ((unsigned long)m[i][j] << (i * COLUNAS + j));
        }
    }

    // Envio do estado via porta serial
    send(estado);

    return 0;
}


// Explicações:

// Definimos a matriz de leds m com dimensões 8x8.
// Criamos uma variável estado do tipo unsigned long para armazenar o estado codificado.
// Iteramos sobre cada elemento da matriz m e atribuímos o estado do LED à posição correspondente na variável estado.
// Para cada elemento da matriz m, utilizamos o operador de deslocamento à esquerda (<<) para calcular a posição correta do bit na variável estado. A posição é calculada com base no índice da linha e da coluna.
// Utilizamos o operador de OU bit a bit (|=) para realizar a operação de atribuição com OU bit a bit, garantindo que os bits anteriores não sejam perdidos.
// Por fim, chamamos a função send para enviar o estado codificado via porta serial.
