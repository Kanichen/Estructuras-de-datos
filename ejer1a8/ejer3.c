 #include <stdio.h>

int fibonacci_simple(int n);

int main()
{
    int numero;

    /* Generamos Fibonaccis */
    for (numero=0; numero<=10; numero++)
      printf("%u\n", fibonacci_simple(numero));

    return 0;
}

int fibonacci_simple(int n)
{
  /* La función normal, recursiva */
  if (n>2)
    return fibonacci_simple(n-1) + fibonacci_simple(n-2);
  /* Este es el caso más común,  */
  else if (n==2)        /* Ponemos esto para agilizar un poco el proceso */
    return 1;
  else if (n==1)       
    return 1;
  else if (n==0)
    return 0;
  else
    return -1;          /* Error */
}