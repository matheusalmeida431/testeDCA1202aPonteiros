#include <stdio.h>

int main() {
    int i=5, *p;
  p = &i;
  printf("%p %p %d %d %d %d\n", p, p+1, *p+2, **&p, 3**p, **&p+4);
    //R: 0x7ffd8ba2c1dc 0x7ffd8ba2c1e0 7 5 15 9
    // ele retornou primeiro o endereço de memooria de i
    // ele retorna depois o endereço e i + 2 bytes do numero inteiro
    // o *p chama o valor guardado na variavel, no caso como esta igual a i, chamará o valor 5 + 2 = 7
    // o p é referenciado e depois referenciado novamente com o valor da variavel i = 5
    // o p é referenciado com o valor de i, depois é multiplicado por 3 = 15
    // o p é referenciado e depois referenciado novamente com o valor da variavel i, depois é somado 4 = 9

    return 0;
}
