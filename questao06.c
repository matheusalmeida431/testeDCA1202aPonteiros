/* *(pulo + 2) acessar o  valor  armazenado no endereço de memória 
inicial da array e soma duas posições, array começa com o índice 0 
então o terceiro elemento tem o índice 2, sendo assim 0+2 = 2 que é o terceiro elemento. Exemplo: */

#include <stdio.h>

int main(void){
int pulo [5] = {23,34,56,54,23};
printf("O terceiro elemento de 'pulo' é igual á %d", *(pulo + 2)); 
  
}
