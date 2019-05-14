#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int* x =NULL;//declaro al puntero a x que no tiene valores;
    int v = 10;
    x = &v;//igualo x a la direccion de memoria de v;
    printf("%d\n",v);//mostrar el valor de v;
    printf("%p\n",&v);//mostrar la direccion de memoria de v;
    printf("%p\n",&x);//mostrar la direccion de memoria de x;
    printf("%p\n",x);//mostrar el valor de x. x vale la direccion de memoria de v;
    printf("%d\n",*x);//mostrar el valor que tiene la direccion de memoria de x;*/



    /*char puntero;
    char* pPuntero = NULL;//declaro el pPuntero con NULL
    pPuntero = &puntero;//igualo al char* pPuntero a la direccion de memoria de puntero
    printf("Ingrese letra o caracter: ");//pido la letra o caracter al usuario
    fflush(stdin);//limpio buffer
    scanf("%c",pPuntero);//obtengo lo que escribio el usuario y lo guardo en el puntero pPuntero
    if (pPuntero !=NULL)
    {
       printf("Caracter %c",*pPuntero);//muestro lo que tiene la direccion de memoria de pPuntero con *

    }
    else
    {
        printf("Es nulo");//si el puntero es nulo, tira este mensaje. Metodo para que no crashee el programa
    }*/

    int p;
    int* q;
    int* r;

    p=10;
    q=&p;
    r=q;

    printf("%p",q);//muestro la direccion de memoria de q
    printf("\n%p",r);//muestro la direccion de memoria de r
    printf("\n%d",*q);//muestro lo que hay dentro de la direccion de memoria de q
    printf("\n%d",*r);//muestro lo que hay dentro de la direccion de memoria de r




    return 0;
}
