#include <stdio.h>

int main(void){
// Vou trata a “array” como “vetor”

  float vet[5] = {1.1,2.2,3.3,4.4,5.5}; // Declaração de vetor float
  
  float *f; // Declaração de ponteiro float
  int i; 
  
  f = vet; // Atribui a primeiro elemento do vetor para o ponteiro

  printf("contador/valor/valor/endereco/endereco\n\n");

  for(i = 0 ; i <= 4 ; i++){

  printf("i = %d",i); // Impressão do índice do vetor

  printf(" vet[%d] = %.1f",i, vet[i]); // Impressão do valor que está no índice “i” do vetor com uma casa decimal.

  printf(" *(f + %d) = %.1f",i, *(f+i)); // Impressão do valor apontado por "f" deslocado por "i" posições de memória.

  printf(" &vet[%d] = %X",i, &vet[i]); // Impressão do endereço de memória do elemento i do vetor

  printf(" (f + %d) = %X",i, f+i); // Impressão do endereço de memória deslocado de "i" posições a partir de "f"
  printf("\n\n");

  }
}
