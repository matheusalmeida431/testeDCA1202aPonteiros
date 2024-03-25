#include <stdio.h>
  int main(void){

    int vet[] = {4, 9, 13};
     int i;

    printf("Impressão dos valores que estão contidos em vet:\n");
      for(i=0;i<3;i++){
      printf("%d\n", *(vet+i));
    }

    printf("\nValores referentes ao endereço de memória dos elementos em vet:\n");
  for(i=0;i<3;i++){
  printf("%X\n",vet+i);
  }
    }
