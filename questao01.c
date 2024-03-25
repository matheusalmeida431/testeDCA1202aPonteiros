#include <stdio.h>

int main(void){
  
  int i=3,j=5;
  int *p, *q;
  
  p = &i;
  q = &j;

printf("O resultado vai ser igual a '%d' pois os dois valores têm o mesmo endereço de memória, e 1 quer dizer verdadeiro\n\n", p == &i);

  printf("O Resultado deu '%d', já que *p aponta para i=2 e *q aponta para j=5\n\n", *p - *q);
  
  printf("Usando a expressão **& vamos está obtendo o ponteiro do ponteiro e esse endereço do valor de i = %d\n\n", **&p);
 
  printf("A expressão na verdade ficaria 3 - 0 + 7 pois a divisão de dois inteiros retorna apenas a parte inteira por isso o resultado e %d\n\n", 3 - *p/(*q) + 7);

  return 0;
}
