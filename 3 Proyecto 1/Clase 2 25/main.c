#include <stdio.h>
#include <stdlib.h>
void sumar(int,int);
int main()
{
    int numeroUno;
    int numeroDos;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d",&numeroUno);
    printf("Ingrese otro numero: ");
    scanf("%d",&numeroDos);

    resultado =sumar(int,int);
    printf("El resultado es: %d",resultado);
    return 0;
}
void sumar(int unNumero,int otroNumero)
{
    int respuesta;
    respuesta = unNumero + otroNumero;

}
