#include <stdio.h>
#define t 2

int main( )
{
	int i, j;
	struct alumno{
	char nombre[20];
	char apellido[20];
	int edad;
	int semestre;
	int nota[4];
	float promedio;
	} reg[t];
    int aux;
	for (i=0; i<t; i++)
		{
			reg[i].promedio = 0;
			printf (" Informacion del Alumno Nº %d\n\n", i+1);
			printf ("Ingrese el Nombre del alumno (menor a 20 letras)..... : ");
			scanf ("%s",&reg[i].nombre[0]);
			printf ("Ingrese el Apellido del alumno (menor a 20 letras)... : ");
			scanf ("%s",&reg[i].apellido[0]);
			printf ("Ingrese la Edad del alumno........................... : ");
			scanf ("%d",&reg[i].edad);
			printf ("Ingrese el Semestre que cursa el alumno................... : ");
			scanf ("%d",&reg[i].semestre);
			for (j=0; j<4; j++)
			{
				

                do
                {
                    printf ("Ingrese la nota Nº %d de este alumno.................. : ", j+1);
                    scanf("%d",&aux);
                    if (aux >= 0 && aux <= 10)
                    {
                        reg[i].nota[j] = aux ;
                        break;
                    }
                    printf("Por favor ingrese una calificacion valida (valor entre 0 y 10)\n");

                } while (1);

			}
			for (j=0; j<4; j++)
				reg[i].promedio = reg[i].promedio + reg[i].nota[j];
			reg[i].promedio = reg[i].promedio / 4;
	}
	for (i=0; i<t; i++)
	{
		printf ("\n\nEl alumno \"%s %s\" ", reg[i].nombre, reg[i].apellido);
		printf ("tiene %d años y cursa el año %d,\n", reg[i].edad, reg[i].semestre);
		printf ("tiene promedio %.2f, por tener las notas: ", reg[i].promedio);
		printf ("'%d' '%d' ", reg[i].nota[0], reg[i].nota[1]);
		printf ("'%d' '%d' \n\n", reg[i].nota[2], reg[i].nota[3]);
	}
	return 0;
}
