#include <stdio.h>

int main() {
    char x_char[4];
    int x_int[4];
    float x_float[4];
    double x_double[4];

    printf("Tamanho de char: %lu byte(s)\n", sizeof(char));
    printf("Tamanho de int: %lu byte(s)\n", sizeof(int));
    printf("Tamanho de float: %lu byte(s)\n", sizeof(float));
    printf("Tamanho de double: %lu byte(s)\n", sizeof(double));
    
    printf("\nEndereço inicial de x_char: %p\n", (void*)x_char);
    printf("Endereço inicial de x_int: %p\n", (void*)x_int);
    printf("Endereço inicial de x_float: %p\n", (void*)x_float);
    printf("Endereço inicial de x_double: %p\n\n", (void*)x_double);

    printf("Endereço de x_char+1: %p\n", (void*)(x_char + 1));
    printf("Endereço de x_char+2: %p\n", (void*)(x_char + 2));
    printf("Endereço de x_char+3: %p\n\n", (void*)(x_char + 3));

    printf("Endereço de x_int+1: %p\n", (void*)(x_int + 1));
    printf("Endereço de x_int+2: %p\n", (void*)(x_int + 2));
    printf("Endereço de x_int+3: %p\n\n", (void*)(x_int + 3));

    printf("Endereço de x_float+1: %p\n", (void*)(x_float + 1));
    printf("Endereço de x_float+2: %p\n", (void*)(x_float + 2));
    printf("Endereço de x_float+3: %p\n\n", (void*)(x_float + 3));

    printf("Endereço de x_double+1: %p\n", (void*)(x_double + 1));
    printf("Endereço de x_double+2: %p\n", (void*)(x_double + 2));
    printf("Endereço de x_double+3: %p\n", (void*)(x_double + 3));

    return 0;
}
// Se x for declarado como char, cada elemento ocupará 1 byte na memória.
//Se x for declarado como int, cada elemento ocupará 2 bytes na memória.
//Se x for declarado como float, cada elemento ocupará 4 bytes na memória.
//Se x for declarado como double, cada elemento ocupará 8 bytes na memória.
