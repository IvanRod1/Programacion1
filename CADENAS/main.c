#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palabra[1024]="hola";//,otraPalabra[100]="programacion";
    //int len;
    int comp;
    strupr(palabra);
    comp = stricmp(palabra,"hOla");//comparar
    //strncpy(palabra,otraPalabra,4);
    /*printf("Ingrese su nombre y apelldio: ");
    //scanf("%[^\n]",palabra);
    fgets(palabra,1024,stdin);
    //gets(palabra); //windows
    len = strlen(palabra);
    palabra[len]='\0';*/
    printf("%s\nCantidad: %d",palabra,comp);
    return 0;
}
