#include <stdio.h>
void burbuja(int arreglo[], int longitud);
void intercambiar(int *a, int *b);

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
  // Un salto de línea
  printf("\n");

  /*
  Invocar al método de la burbuja indicando todo el arreglo, desde 0 hasta el
  índice final
  */
  burbuja(arreglo, longitud);
  /*
  Imprimirlo después de ordenarlo
  */
  printf("Imprimiendo arreglo despues de ordenar...\n");
  for (int x = 0; x < longitud; x++)
    printf("%d ", arreglo[x]);
  
  return 0;
}

void burbuja(int arreglo[], int longitud) {
  for (int x = 0; x < longitud; x++) {
    // Recuerda que el -1 es porque no queremos llegar al final ya que hacemos
    // un indiceActual + 1 y si fuéramos hasta el final, intentaríamos acceder a un valor fuera de los límites
    // del arreglo
    for (int indiceActual = 0; indiceActual < longitud - 1;
         indiceActual++) {
      int indiceSiguienteElemento = indiceActual + 1;
      // Si el actual es mayor que el que le sigue a la derecha...
      if (arreglo[indiceActual] > arreglo[indiceSiguienteElemento]) {
        // ...intercambiarlos, es decir, mover el actual a la derecha y el de la derecha al actual
        intercambiar(&arreglo[indiceActual], &arreglo[indiceSiguienteElemento]);
      }
    }
  }
}

void intercambiar(int *a, int *b) {
  int temporal = *a;
  *a = *b;
  *b = temporal;
}