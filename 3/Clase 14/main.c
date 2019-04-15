#include <stdio.h>
#include <stdlib.h>
#define T 5
typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
}eEmpleado;
void mostrarEmpleado(eEmpleado);
int main()
{
    eEmpleado unEmpleado;
   // eEmpleado otroEmpleado;
    eEmpleado lista[T];
    int i;
    for(i=0;i<T;i++)
    {

        printf("Ingrese legajo: ");
        scanf("%d",&lista[i].legajo);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(lista[i].nombre);
        printf("Ingrese sexo:");
        fflush(stdin);
        scanf("%c",&lista[i].sexo);
        printf("Ingrese sueldo bruto: ");
        fflush(stdin);
        scanf("%f",&lista[i].sueldoBruto);
        printf("Ingrese sueldo neto: ");
        fflush(stdin);
        scanf("%f",&lista[i].sueldoNeto);


    }
    mostrarEmpleado(unEmpleado);
    return 0;
}
void mostrarEmpleado(eEmpleado unEmpleado)
{
    printf("%d-%s-%c-%f-%f\n",eEmpleado.legajo,eEmpleado.nombre,eEmpleado.sexo,eEmpleado.sueldoBruto,eEmpleado.sueldoNeto);
}
