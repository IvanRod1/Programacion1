#include <stdio.h>
#include <stdlib.h>
void ejercicio (void);
int main()
{


    return 0;
}
void ejercicio(void)
{
int nota;
int contadorAprobados=0;
int contadorDesaprobados=0;
int acumuladorAprobados=0;
int acumuladorDesaprobados=0;
int aprobacionMinima = 6;
int promedioAprobados;
int promedioDesaprobados;

 for (int i=0,i<5,i++){

    printf("Ponga la nota: ");
    scanf("%d",&nota);

    if(nota > aprobacionMinima){
        contadorDesaprobados++;
        acumuladorDesaprobados =acumuladorDesaprobados + nota;

    } else {
       contadorAprobados++;
       acumuladorAprobados = acumuladorAprobados + nota;
    }



 }
 promedioAprobados = acumuladorAprobados/contadorAprobados;
 promedioDesaprobados = acumuladorDesaprobados/contadorDesaprobados;

}



