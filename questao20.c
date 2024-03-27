#include <stdio.h>
#include <stdlib.h>

void multiplica_matriz(int **A,int **B,int **C,int l_a,int A_B,int c_b){
  for (int i = 0; i < l_a; i++) {
      for (int j = 0; j < A_B; j++) {
          C[i][j] = 0; // Inicializa cada elemento de C como 0
          for (int k = 0; k < c_b; k++) {
              C[i][j] += A[i][k] * B[k][j];
          }
      }
  }
}

void imprimir_matriz(int **matriz,int l_a,int lin_col){
  for(int i=0;i<l_a;i++){
    for(int j=0;j<lin_col;j++){
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
  
}

void ler_matriz(int **matriz,int lin,int col){
  for(int i=0;i<lin;i++){
    matriz[i] = (int *)malloc(col * sizeof(int));
    for(int j=0;j<col;j++){
      scanf("%d", &matriz[i][j]);
      
    }
  }

}

  

int main(void) {
  int l_a, A_B, c_b, x = 1;
int **A = (int**)malloc(l_a*sizeof(int*));
int **B = (int**)malloc(A_B*sizeof(int*));
int **C = (int**)malloc(l_a*sizeof(int*));

  if (A == NULL || B == NULL || C == NULL) {
      printf("Erro de alocação de memória.");
      return 1;
  }

printf("Qual vai ser o tamanho da matriz A? \n");
  scanf("%d\n %d", &l_a ,&A_B);
   
printf("Qual vai ser o tamanho da matriz B?\n");
 scanf("%d\n %d", &x,&c_b);
  
printf("Selecione os valores para a matriz A:\n");
  ler_matriz(A,l_a,A_B);

printf("Selecione os valores para a matriz B:\n");
 ler_matriz(B,A_B,c_b);
  

  multiplica_matriz(A, B, C, l_a, A_B, c_b);
  imprimir_matriz(C, l_a, c_b);

  for (int i = 0; i < l_a; i++) {
    free(A[i]);
    free(C[i]);
  }
  for (int i = 0; i < A_B; i++) {
    free(B[i]);
  }
  free(A);
  free(B);
  free(C);

   
  
}
