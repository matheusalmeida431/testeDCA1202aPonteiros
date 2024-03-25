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
/*
     p = &i; Correto pois “p” e o ponteiro e “&” serve para pegar o endereço de “i” e colocar no ponteiro.
     *q = &j; Invalido já que “*q” e o endereço do ponteiro e vai servir para guardar o'que está apontando.
     p = &*&i; Correto “&i” retorna o endereço de memória da variável “i” e “&*&i” retorna o endereço de memória do valor armazenado na variável i, que é o mesmo que o endereço de memória da variável i.
     i = (*&)j; Invalido pois existe um erro de sintaxe, o correto seria “  = (*(&j)); ”
     i = *&j; Correto pois está acessando e atribuindo o valor no endereço de memória de j;
     i = *&*&j; Correto pois “ *&*&j ” retorna o endereço de memória do valor de j, que é o mesmo que “&j”.
     q = *p; Incorreto pois a atribuição não está sendo feita corretamente, o correto seria “ q = p ”.
     i = (*p)++ + *q; Correto já que nesse caso o “*p” e “*q” são os valores no qual estão apontando, portanto servem como variáveis normais
*/
    printf("Valor de i: %d\n", i);  // Imprime o valor de i
    printf("Valor de j: %d\n", j);  // Imprime o valor de j
    printf("Valor apontado por p: %d\n", *p); // Imprime o valor apontado por p

    return 0;
}
