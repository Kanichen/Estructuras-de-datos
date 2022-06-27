 /*Calculadora básica usando funciones*/
 
#include <stdio.h>

int adicion( int x, int y );      /* prototipo de la función */
int sustraccion(int x, int y);
int multiplicacion(int x, int y);
double division(int x, int y);

int main(){                            /* la función main comienza la ejecución del programa */

    int numero1;                                              /* primer número entero */
    int numero2;                                               /* segundo número entero */
    int resultadosuma, resresta, resmulti;                                               /*almacena el valor de la suma*/
    double resdivi;

    printf( "Introduzca dos enteros: " );
    scanf( "%d%d", &numero1, &numero2 );   /*almacena los valores ingresados en numero1 y numero2*/

    resultadosuma = adicion( numero1, numero2 ); /* numero1 y numero2 son argumentos para la llamada a la función 
                                                                       adición */
    resresta = sustraccion(numero1, numero2);
    resmulti = multiplicacion(numero1, numero2);
    resdivi = division(numero1, numero2);
    printf( "La suma es: %d\n", resultadosuma );
    printf("La resta es: %d\n", resresta);
    printf("La multiplicacion es: %d\n", resmulti);
    printf("La division es: %f\n", resdivi);

    return 0;                                                      /* indica terminación exitosa */

}                                                                  /* fin de main */

 /* Definición de la función adición */
int adicion( int x, int y ){                                /* x, y son parámetros */
    int suma = x + y;                                        /* realiza la suma */

    return suma;                                              /* retorna el valor de la suma */

}                                                                 /* fin de la función adición */

int sustraccion(int x, int y){
    int resta=x-y;

    return resta;
}

int multiplicacion(int x, int y){
    int multi=x*y;

    return multi;
}

double division(int x, int y){
    double divi=x/y;
    

    return divi;
}
