#include <stdio.h>

int main() {
    int i=3, j=5;
    int *p, *q;
    p = &i;
    q = &j;
    printf("%d, %d, %d, %d\n", p==&i, *p - *q, **&p, 3 - *p/(*q) + 7);
    //para p == &i o resultado será 1, porque se p = i ele retorna true e 1 = true
    //para *p - *q ele retornará os valores que estão contidos nas variaveis para fazer a conta, nesse caso é 3 - 5 = -2
    //para ** é o ponteiro do ponteiro ou seja p = &3 e &p = p
    //para 3 - *p/(*q) + 7 ele usa o * que chama os valores declaradas nas variaveis, então aqui ele apenas retornará o resultado da conta

    return 0;
}
