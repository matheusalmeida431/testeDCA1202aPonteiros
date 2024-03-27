// LETRA C

int f(char *data){
  void *s;
  s = malloc(50);
  int size = strlen(data);
  if (size > 50) // Se ocorrer do valor de size ser maior que 50
  return(-1); // Vai retornar -1 e não vai liberar a memoria que foi alocada
  free(s); // Causando então Memory leak
  return 0;
}
