#include<stdio.h>
#define N 6
void shell(int array[], int size);

int main (int argc, char * const argv[]) {
 int numeros[] = {8, 3, 8, 7, 14, 6};
 /* Se muestra el arreglo original */
 printf("Imprimiendo arreglo antes de ordenar...\n");
 for (int i = 0; i < N; ++i) {
  printf("%d ",numeros[i]);
 }

 printf("\n");

 shell(numeros, N);
 /* Se muestra el arreglo ordenado */
 for (int i = 0; i < N; ++i){
  printf("%d ",numeros[i]);
 }
 printf("\n");
}

void shell(int array[], int size)
{

 int i, j, intervalo, temp;
 intervalo = size/2;

 while (intervalo > 0) {
 for (i=intervalo; i < size; i++) {
 j = i;
 temp = array[i];

 while ((j >= intervalo) && (array[j - intervalo] > temp)) {
 array[j] = array[j - intervalo];
 j = j - intervalo;
 }
 array[j] = temp;
 }
 intervalo /= 2;
 }

}
