#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros;
    //int cantidadNumerosTotales = 0;
    //int cantidadPares = 0;
    //int sumaPositivos = 0;
    //int maximo;
    //int minimo;
    //int negMax;
    //int posMin;
    //int entreNumeros;
    //int promedio;
    char pregunta;

    do {
        printf("Ingrese un numero:");
        scanf("%d",&numeros);
        printf("Quiere seguir? Y/N:");
        fflush(stdin); //solucion
        scanf("%c",&pregunta);

    }while (pregunta == 'y');

    return 0;
}
