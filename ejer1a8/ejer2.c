/*Calculadora básica usando funciones*/
 #include <stdio.h>

int adicion( int *numero1, int *numero2 );                  /* prototipo de la función */
int sustraccion(int *num1, int *num2);
int multiplicacion(int *num1, int *num2);
double division(int *num1, int *num2);

/* la función main comienza la ejecución del programa */
 int main()
 {
 	
 int numero1;                                                           /* primer entero */
 int numero2;                                                           /* segundo entero */
 int ressuma, resresta, resmulti;                                                          /*almacena el valor de la suma*/
 double resdiv;

 printf( "Introduzca dos enteros: " );
 scanf( "%d%d", &numero1, &numero2 );  
 
 ressuma =  adicion(&numero1, &numero2);  //Se manda la ubicacion de memoria de los 2 numeros
 resresta = sustraccion(&numero1, &numero2); 
 resmulti = multiplicacion(&numero1, &numero2); 
 resdiv = division(&numero1, &numero2); 


 printf( "La suma es: %d\n", ressuma );
 printf( "La resta es: %d\n", resresta );
 printf( "La multiplicacion es: %d\n", resmulti );
 printf( "La division es: %f\n", resdiv );


 return 0;
 } /* fin de main */

 /* Definición de la función adición */

 int adicion( int *numero1, int *numero2 )   //se reciben la memoria de los 2 numeros asignandola a los apuntadores
 {
    int suma;
    suma = *numero1 + *numero2; /* realiza la suma */ //Se utiliza el asterisco para usar los valores 
 } /* fin de la función adición */

 int sustraccion(int *num1, int *num2){
    int resta = (*num1)-(*num2);  //se pueden o no utilizar parentesis, puede evitar confusiones 
    return resta;
 }

 int multiplicacion(int *num1, int *num2){
    int multi = (*num1)*(*num2);
    return multi;
 }

double division(int *num1, int *num2){
    double div = (*num1)/(*num2);
    return div;
 }