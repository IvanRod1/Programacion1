#include <stdio.h>
#include <stdlib.h>
//lo que da y recibe la funcion
//tipo_de_dato identificador ([parametros]);
//(int,float,char,etc) nombre del indentificacion

//int sumarNumeros(int unNumero, int otroNumero);
int sumarNumeros(int , int);
int main()
{
    int numeroUno;
    int numeroDos;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d",&numeroUno);
    printf("Ingrese otro numero: ");
    scanf("%d",&numeroDos);

    resultado = sumarNumeros(numeroUno,numeroDos);
    printf("El resultado es : %d",resultado);
    return 0;
}
int sumarNumeros(int unNumero, int otroNumero) //los enteros ya deberian estar declarados
{
    int resultado;
    resultado = unNumero + otroNumero;



    return resultado;

}
