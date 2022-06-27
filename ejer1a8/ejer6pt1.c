#include <stdio.h>
void intercambiar(int *a, int *b);
void seleccion(int arreglo[], int longitud);

//intercambia dos variables por referencia.
void intercambiar(int *a, int *b) {
  int temporal = *a;
  *a = *b;
  *b = temporal;
}

void seleccion(int arreglo[], int longitud) {
  for (int i = 0; i < longitud - 1; i++) {
    for (int j = i + 1; j < longitud; j++) {
     
      if (arreglo[i] > arreglo[j]) {
        // ...intercambiarlos, es decir, mover el actual a la derecha y el de la derecha al actual
        intercambiar(&arreglo[i], &arreglo[j]);
      }
    }
  }
}

int main(void) {
  // El arreglo
  int arreglo[] = {8, 3, 8, 7, 14, 6};
  
  int longitud = 6;
  /*
  Imprimirlo antes de ordenarlo
  */
  printf("Imprimiendo arreglo antes de ordenar...\n");
  for (int x = 0; x < longitud; x++) {
    printf("%d ", arreglo[x]);
  }

  printf("\n");


	seleccion(arreglo, longitud);
	/*
  Imprimirlo después de ordenarlo
  */
  printf("Imprimiendo arreglo despues de ordenar...\n");
  for (int x = 0; x < longitud; x++)
    printf("%d ", arreglo[x]);
  return 0;
}