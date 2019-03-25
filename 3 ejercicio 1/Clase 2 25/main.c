#include <stdio.h>
#include <stdlib.h>
int pedirNota(void);
int main()
{
    int valor;
    valor = pedirNota();
    printf("%d",valor);

    return valor;
}
int pedirNota()
{
    int nota;
 do{

    printf("Nota :");
    scanf("%d",&nota);



 }while (nota < 0 || nota > 10);
   return nota;
}
