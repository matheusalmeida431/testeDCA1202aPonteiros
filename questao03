#include <stdio.h>

int main() {
    int i, j;
    int *p, *q;

    p = &i;          // Legal: atribuindo o endereço de i a p
    // *q = &j;      // Ilegal: tentativa de atribuir o endereço de j a um valor inteiro
    p = &*&i;        // Legal: atribuindo o endereço de i a p novamente
    // i = (*&)j;    // Ilegal: operação inválida em C
    i = *&j;         // Legal: atribuindo o valor de j a i
    i = *&*&j;       // Legal: atribuindo o valor de j a i novamente
    // q = *p;       // Ilegal: tentativa de atribuir um valor inteiro a um ponteiro
    // i = (*p)++ + *q; // Ilegal: comportamento indefinido, p não está inicializado corretamente e q é um ponteiro não inicializado

    printf("Valor de i: %d\n", i);  // Imprime o valor de i
    printf("Valor de j: %d\n", j);  // Imprime o valor de j
    printf("Valor apontado por p: %d\n", *p); // Imprime o valor apontado por p

    return 0;
}
