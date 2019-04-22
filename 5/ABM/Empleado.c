
#include "Empleado.h"


void cargarEmpleado(eEmpleado lista[], int tam)
{
    int i;

    i = buscarLibre(lista, tam);
    if(i!=-1)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &lista[i].legajo);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(lista[i].nombre);
        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c", &lista[i].sexo);
        printf("Ingrese sueldo bruto: ");
        scanf("%f", &lista[i].sueldoBruto);

        lista[i].sueldoNeto =lista[i].sueldoBruto*0.85;

        lista[i].estado = OCUPADO;

    }
    else
    {
        printf("No hay espacio");
    }



}

void mostrarListaEmpleados(eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=LIBRE)
        {
            mostrarEmpleado(lista[i]);
        }

    }
}
void mostrarEmpleado(eEmpleado unEmpleado)
{
    printf("%d-%s-%c-%f-%f\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto);

}
int buscarLibre(eEmpleado lista[], int tam)
{
    int i;
    int index=-1;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}
void inicializarEmpleados(eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista[i].estado = LIBRE;
    }
}

void hardcodearDatosEmpleados(eEmpleado lista[], int tam)
{
    int i;
    int legajos[]={1,8,9,7,2,4};
    char nombres[][50]={"Carlos","Maria","Carlos","Pedro","Carlos","Mateo"};
    char sexo[]={'M','F','M','M','M','M'};
    float sueldosBruto[]={22000,22000,15000,4000,21000,6000};

    for(i=0; i<tam; i++)
    {
        lista[i].legajo = legajos[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].sexo = sexo[i];
        lista[i].sueldoBruto = sueldosBruto[i];
        lista[i].sueldoNeto = sueldosBruto[i] * 0.85;
        lista[i].estado = OCUPADO;

    }

    }


void modificarSueldo(eEmpleado emp[],int tam)
{
    int i;
    int lega;
    int flag = 0;
    printf("ingrese el legajo\n");   /////cambiar por
    scanf("%d", &lega);               ////una funcion buscar entero

    for(i=0;i<tam;i++)
    {
        if(lega == emp[i].legajo)
        {
            flag =1;
            mostrarEmpleado(emp[i]);
            printf("ingrese el nuevo sueldo\n");
            scanf("%f", &emp[i].sueldoBruto);         //llamar a la funcion pedirFlotante
            emp[i].sueldoNeto = emp[i].sueldoBruto * 0.85;
            break;
        }
    }
    if(flag == 0)
    {
        printf("el legajo es invalido");
    }
}

//int buscarLegajo(eEmpleado emp[], int tam, int legajo)
//{

//}

void borrarEmpleado(eEmpleado emp[],int tam)
{
    int i;
    int lega;
    int flag = 0;
    printf("ingrese el legajo\n");   /////cambiar por
    scanf("%d", &lega);               ////una funcion buscar entero

    for(i=0;i<tam;i++)
    {
        if(lega == emp[i].legajo)
        {
            flag =1;
            mostrarEmpleado(emp[i]);
            emp[i].estado = -1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("el legajo es invalido");
    }
}
float importeMaximo(eEmpleado lista[])
{
    int i;
    int j;
    for(i=0;i<4;i++)
    {
        for(j=0;i<5;j++)
        {
            if(lista[i].sueldoBruto>lista[j].sueldoBruto);
            {
                return lista[i].sueldoBruto;
            }
        }
    }
}

