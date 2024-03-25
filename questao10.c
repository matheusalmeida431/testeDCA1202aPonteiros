/* O erro esta em tentar modificar um valor em uma variável constante, 
já que depois de inicializar não tem como alterar mais por ser uma const. */

printf("%d", ++(*x));
