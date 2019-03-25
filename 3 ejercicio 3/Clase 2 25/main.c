#include <stdio.h>
#include <stdlib.h>
int aprobarMateria (int ,int);
int main()
{
    int valorUno;
    int valorDos;
    valorUno = aprobarMateria(6,2);
    valorDos = aprobarMateria(6,8);

}
int aprobarMateria(int notaMin,int nota)
{
 if (nota<notaMin){
    return 0;
 } else {
   return 1;
 }

}
