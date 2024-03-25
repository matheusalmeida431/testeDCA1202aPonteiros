#include <stdio.h>

int main(void){
  int mat[4], *p, x;
  
  p = mat + 1; // Correto, pois assim "p" recebe o segundo elemento de mat
  p = mat; // Correto, pois assim "p" recebe o primeiro elemento de mat
  p = mat; // Correto, pois assim "p" recebe o primeiro elemento de mat
  x = (*mat); // Está incorreto pois está tratando a array como um ponteiro
}
