#include <stdio.h>
 struct teste{
   int x = 3;
   char nome[] = "jose";
 };
 main(){
   struct teste *s;   
   printf("%d", s->x);  
   printf("%s", s->name); 
}
 /* Esse código não rodará, primeiro, que não tem como aplicar 
    valores para os membros de uma struct em sua definição; segundo, 
    que não foi alocado uma um malloc para o ponteiro “s” o que fará 
    com que ele aponte para um memória não definida, fazendo com que haja de 
    forma indefinida; terceiro, que no final do código vemos que o print 
    chama uma variável chamada “name”, porém não foi declarada nenhuma variável com esse nome. */
