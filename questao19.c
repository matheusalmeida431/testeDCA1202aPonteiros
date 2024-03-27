#include <stdio.h>
#include <stdlib.h>

void soma_vetores(int *vet1, int *vet2, int *resultado, int n){
  for(int i = 0; i < n; i++){
    resultado[i] = vet1[i] + vet2[i];
  }
}

void leitura_vetor(int *vetor,int n){
  for(int i = 0; i<n; i++){
    scanf("%d", &vetor[i]);
  }
  printf("\n");
}

void imprime_vetor(int *vetor, int n){
  for(int i = 0; i<n; i++){
    printf("%d ", vetor[i]);
  }
}

  
int main() {
  int n = 1;  
  int *vet1 = (int *)malloc(n * sizeof(int));
  int *vet2 = (int *)malloc(n * sizeof(int));
  int *resultado = (int *)malloc(n * sizeof(int));
  printf("Selecione o tamanho dos vetores: \n");
  scanf("%d", &n);
  

  printf("Digite os valores para o primeiro vetor: \n");
  leitura_vetor(vet1,n);

  printf("Digite os valores para o segundo vetor: \n");
  leitura_vetor(vet2,n);
  
  printf("Vetor 1: ");
  imprime_vetor(vet1, n);
  printf("\n");

  printf("Vetor 2: ");
  imprime_vetor(vet2, n);
  printf("\n");
  
soma_vetores(vet1, vet2, resultado, n);
printf("Resultado do vetor 1 + vetor 2: ");
imprime_vetor(resultado,n);
  
  free(vet1);
  free(vet2);
  free(resultado);
}
