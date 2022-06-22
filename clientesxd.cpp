#include <stdio.h>
//#include <stdlib.h>

struct cliente{ //esta wea es una variable con varias variables
	char nombre[50];
	int numUnidades;
	float precio;
	char estado;
};

void LeerCliente(struct cliente *a); //estas weas son las funciones valor retorno, nombre, parametro
void MostrarCliente(struct cliente *a);
void Morosos(struct cliente a[], int n);
void Pagados(struct cliente b[], int n, float lim);

main()
{
	int n= 1; //esta wea es para no cambiar los for uno por uno
	int i;
	
	struct cliente ListaClientes[n];
	struct cliente cte;
	struct cliente *a; 
	
	a = &cte;
	
	
	for(i = 0; i < n; i++) //se agregan los for necesarios
	{
		printf("Introduce los datos del cliente: \n");
		LeerCliente(&cte);
		ListaClientes[i] = cte;
	
	}
	
	printf("\n\n");
	
	for(i = 0; i < n; i++)
	{
		cte = ListaClientes[i];
		MostrarCliente(&cte);
	}	
	
	printf("\n\n");	
	
	printf("Los morosos son: \n");
	Morosos(ListaClientes, n);
	
	
	printf("\n\n");	
	
	float lim = 500;
	printf("Los clientes con estatus pagado con facturacion mayor a 500 son; \n");
	Pagados(ListaClientes, n, lim);
	
}

void LeerCliente(struct cliente *a)
{
	fflush(stdin);
	printf("Introduce el nombre:  ");
	gets(a->nombre);
	
	printf("Introduce las unidades:  ");
	scanf("%d", &a->numUnidades);
	
	printf("Introduce el precio:  ");
	scanf("%f",&a->precio);
	
	fflush(stdin);
	
	printf("Introduce el estado m/a/p:  ");
	scanf("%c",&a->estado);	
}

void MostrarCliente(struct cliente *a)
{
	
	printf("El cliente : %s \n", a->nombre);
	
	printf("compro: %d \n", a->numUnidades);
	
	printf("cuyo precio es de: %f \n",a->precio);
	
	printf("su estado es: %c \n",a->estado);
		
}

void Morosos(struct cliente b[], int n)
{
	int i=0, j = 0;
	
	for(i=0;i<n;i++)
	{
		if(b[i].estado =='m')
		{
			printf("%s \n", b[i].nombre);
			j++;
		}
	}
	if(j == 0)
			printf("No hay morosos\n");	
}

void Pagados(struct cliente b[], int n, float lim)
{
	int i, j= 0;
	
	for(i=0;i<n;i++)
	{
		if(b[i].estado =='p')
			if(b[i].precio * b[i].numUnidades > lim)
			{
				printf("%s \n", b[i].nombre);
				j++;
			}
				
	}
	if (j == 0)
		printf("No hay clientes en estatus pagado con facturacion mayor a 500\n");
}	
