#include <stdio.h>

int main() {
  int valor;
  int *p1;
  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;
  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor);
  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp);
  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("%c \n", aux);
  /* (d) */
  p3 = &nome[4];
  aux = *p3;
  printf("%c \n", aux);
  /* (e) */
  p3 = nome;
  printf("%c \n", *p3);
  /* (f) */
    p3 = p3 + 4;
  printf("%c \n", *p3);
  /* (g) */
  p3--;
 printf("%c \n", *p3);
  /* (h) */
  vetor[0]= 31;
  vetor[1]= 45;
  vetor[2]= 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade);
  /* (i) */
  p5 = p4 + 1;
  idade = *p5;
  printf("%d \n", idade);
  /* (j) */
  p4 = p5 + 1;
  idade = *p4;
  printf("%d \n", idade);
  /* (l) */
  p4 = p4 - 2;
  idade = *p4;
  printf("%d \n", idade);
  /* (m) */
  p5 = &vetor[2] - 1;
  printf("%d \n", *p5);
  /* (n) */
   p5++;
  printf("%d \n", *p5);
  return(0);
}
//Respostas:
// O valor inicial de valor é 10. Em seguida, é criado um ponteiro p1 apontando para valor, e então o valor de valor é alterado para 20 através do ponteiro p1. Portanto, o resultado impresso será 20
// Similarmente ao anterior, o valor inicial de temp é 26.5. Um ponteiro p2 é criado apontando para temp, e então o valor de temp é alterado para 29.0 através do ponteiro p2. Portanto, o resultado impresso será 29.0
// Um ponteiro p3 é criado apontando para o primeiro caractere da string "Ponteiros". O primeiro caractere é 'P', então o resultado impresso será P
// Aqui, p3 é alterado para apontar para o quinto caractere da string "Ponteiros", que é 'e'. Portanto, o resultado impresso será e
// p3 é apenas reatribuído para apontar para o início da string novamente, então o resultado será P
// p3 é movido para apontar para o quinto caractere da string, então o resultado será e
// p3 é decrementado, então agora aponta para o quarto caractere da string, que é 't'. Portanto, o resultado impresso será t
// p4 é inicializado para apontar para o primeiro elemento do vetor vetor. O valor do primeiro elemento é 31, então o resultado impresso será 31
// p5 é alterado para apontar para o segundo elemento do vetor vetor, e o valor deste elemento é 45, então o resultado impresso será 45
// p4 é alterado para apontar para o terceiro elemento do vetor vetor, e o valor deste elemento é 27, então o resultado impresso será 27
// p4 é alterado para apontar para o primeiro elemento do vetor vetor, então o resultado será 31 novamente
// p5 é alterado para apontar para o penúltimo elemento do vetor vetor, que é 45, então o resultado impresso será 45 
// p5 é incrementado para apontar para o último elemento do vetor vetor, que é 27, então o resultado impresso será 27
