#include <stdio.h>
#include <stdlib.h>
float sacarPromedio(int,int);
int main()
{
 float promedio;
 promedio = sacarPromedio(15,2);
 return promedio;
}
float sacarPromedio(int suma, int cantidad)
{
 float promedio;
 promedio = suma / cantidad;
 return promedio;
}
