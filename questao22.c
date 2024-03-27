#include <stdio.h>
int main(){
  int a, b;
  int x, y, z;
  scanf("%d %d", &a, &b);
  x = a; y = b; z = a + b;
  while (a) {
  x = x | b;
  y = y ^ a;
  z = z & (a+b);
  a = a >> 1;
  b = b << 1;
  }
  printf ("%d %d %d\n", x, y, z);
  return 0;
}

//  caso o usuário entre com os valores 10 e 1, nessa ordem, qual será, exatamente, o valor da saída do programa?

// A saída do programa será de:
//15 13 0

/ * a = 10 e b = 1.
/ x = 10, y = 1, z = 11.
/ Entra no loop.
/ Na primeira iteração:
/ x = 10 | 1 = 11.
/ y = 1 ^ 10 = 11.
/ z = 11 & (10+1) = 11.
/ a = 10 >> 1 = 5.
/ b = 1 << 1 = 2.
/ Na segunda iteração:
/ x = 11 | 2 = 11.
/ y = 11 ^ 5 = 14.
/ z = 11 & (5+2) = 3.
/ a = 5 >> 1 = 2.
/ b = 2 << 1 = 4.
/ Na terceira iteração:
/ x = 11 | 4 = 15.
/ y = 14 ^ 2 = 12.
/ z = 3 & (2+4) = 2.
/ a = 2 >> 1 = 1.
/ b = 4 << 1 = 8.
/ Na quarta iteração:
/ x = 15 | 8 = 15.
/ y = 12 ^ 1 = 13.
/ z = 2 & (1+8) = 0.
/ a = 1 >> 1 = 0.
/ b = 8 << 1 = 16.
/ Como a agora é 0, o loop termina.
/ Imprime x = 15, y = 13 e z = 0.

