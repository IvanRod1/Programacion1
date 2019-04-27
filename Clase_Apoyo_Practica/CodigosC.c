#include <stdio.h>
#include <stdlib.h>
#include "CodigosH.h"
eLocalidad construirLocalidad()
{
    eLocalidad unaLocalidad;
    printf("Ingrese id:");
    scanf("%d",&unaLocalidad.id);
    printf("Ingrese la descripcion:");
    fflush(stdin);
    gets(unaLocalidad.descripcion);
    return unaLocalidad;



}
ePersona construirPersona(int tam)
{
    ePersona unaPersona;
    printf("Ingrese nombre:");
    scanf("%s",unaPersona.nombre);
    printf("Ingrese apellido");
    scanf("%s",unaPersona.apellido);
    printf("Ingrese edad:");
    scanf("%d",&unaPersona.edad);
    printf("Ingrese id localidad:");
    scanf("%d",&unaPersona.idLocalidad);
    return unaPersona;


}
int cargarLocalidades(eLocalidad listado[],int tam)
{
    int i;
    for (i=0;i<tam;i++)
    {
       listado[i] = construirLocalidad();
    }
    return 1;
}
void mostrarListadoLocalidad(eLocalidad listado[],int tam)
{
    int i;
    for (i=0;i<tam;i++)
    {
       mostrarLocalidad(listado[i]);
    }
}
void mostrarLocalidad(eLocalidad localidad)
{
    printf("\nCodigo:\t %d",localidad.id);
    printf("\nNombre :\t %s",localidad.descripcion);
    printf("\n-----------------------------");
}
void inicializarListado(ePersona listadoPersona[],int tam)
{
    int i;
    for(i=0;i>tam;i++)
    {
        listadoPersona[i].estado = 0;
    }
}
int buscarLugar(ePersona listadoPersona[],int tam)
{
    int i;
    int retorno;
    for(i=0;i>tam;i++)
    {
      if(listadoPersona[i].estado == 0)
      {
           retorno = 0;
      }
      else
      {
           retorno = -1;
      }
    }
    return retorno;
}
int cargarPersona(ePersona listadoPersona[],int tam)
{
    int indice;
    indice = buscarLugar(listadoPersona,tam);
    if(indice!= -1)
    {
        listadoPersona[indice] = construirPersona(3);
    }
    return indice;
}
int borrarPersona (ePersona listadoPersona[],ePersona persona,int tam)
{
    int indice;
    indice = buscarPersona(listadoPersona,persona,tam);
    if(indice =!-1)
    {
        listadoPersona[indice].estado = 1;
    }
    return indice;
}
int buscarPersona(ePersona listadoPersona[],ePersona persona,int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        if(listadoPersona[i].id == persona.id)
        {
            return i;
        }
    }
    return -1;

}
