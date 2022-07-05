/* Oda :3
    En comparacion a tu otro codigo creaste auxiliares inecesarios, pudienso solo pasar las direcciones de memoria como lo explico abajo.
    Tambien asignaste valores que nunca usaste como los apuntadores a y b xD
    No comente la de burbuja porque esa ya la tienes comentada en los otros programas uwu
    Cualquier otra duda me dices uwu <3
*/

#include <stdio.h>

struct alumno{ //aqui ta la estructura
	char nombre[50];
	int matricula;
};

void IngresarDatos(struct alumno *a); //aqui las funciones usadas
void Imprimir(struct alumno *a);
void Burbuja(struct alumno *b, int n);

void main()
{
	int n= 2;
	int i;
	
	struct alumno ListaAlumnos[n];//creas el arreglo de estructuras
	struct alumno alum;//se crea una estructura auxiliar
	
	
	for(i = 0; i < n; i++)
	{
		printf("Introduce los datos del alumno: \n");
		IngresarDatos(&ListaAlumnos[i]);//mandamos la direccion de memoria donde queremos que se guarden los valores indicando la posicion del arreglo
	}
	
	
	
	printf("\n\n");
	Burbuja(ListaAlumnos,n);//realizamos el ordemaniento por metodo burbuja
	
	for(i = 0; i < n; i++)
	{
		Imprimir(&ListaAlumnos[i]);//mandamos la direccion de memoria de los alumnos uno a uno indicando el indice del arreglo
	}		
}

void IngresarDatos(struct alumno *a)//se pide un dato de tipo apuntador para poder asignar valores por direccion de memoria
{
	fflush(stdin);
	printf("Introduce el nombre:  ");
	gets(a->nombre);//Guardas el nombre en la estructura usando la direccion de memoria
	
	printf("Introduce matricula:  ");
	scanf("%d", &a->matricula);//lo mismo pero con la matricula
}

void Imprimir(struct alumno *a) //se pide un dato de tipo apuntador para poder asignar valores por direccion de memoria
{
	printf("El alumno : %s \n", a->nombre);//accedes a la direccion de memoria donde esta la estructura y muestras los datos
	
	printf("tiene matricula: %d \n", a->matricula);
}

void Burbuja(struct alumno *b, int n) //se pide un dato de tipo apuntador para poder asignar valores por direccion de memoria
{
 int i,j;
 struct alumno aux;

 for(i = 0; i < n-1; i++)
 	for(j = 0; j < n-1-i; j++)
 		if(b[j].matricula > b[j+1].matricula)
 		{
 			aux = b[j];
 			b[j] = b[j +1];
 			b[j +1] = aux;
		 }
}