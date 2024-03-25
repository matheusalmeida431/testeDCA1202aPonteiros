Um ponteiro para uma função é uma variável que armazena o endereço de memória de uma função. Assim como os ponteiros para variáveis, os ponteiros para funções permitem que você passe funções como argumentos para outras funções, retorne funções de outras funções e até mesmo armazene funções em estruturas de dados.


#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída para que possamos usar funções de entrada e saída

// Definição de duas funções simples, uma para somar dois números e outra para subtrair.

int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int main() {
    // Declaração de um ponteiro para função que aceita dois inteiros e retorna um inteiro
    int (*operacao)(int, int);

    // Atribuindo o endereço da função 'soma' ao ponteiro 'operacao'
    operacao = soma;

    // Usando o ponteiro para chamar a função 'soma'
    int resultado = operacao(5, 3);
    printf("Resultado da soma: %d\n", resultado);

    // Atribuindo o endereço da função 'subtracao' ao ponteiro 'operacao'
    operacao = subtracao;

    // Usando o ponteiro para chamar a função 'subtracao'
    resultado = operacao(5, 3);
    printf("Resultado da subtracao: %d\n", resultado);

    return 0;
}
