#include <stdio.h>
#include <stdlib.h>
#include "CodigosH.h"
#define TAM 3

int main()
{
eLocalidad localidades[TAM];
ePersona personas[TAM];
cargarLocalidades(localidades,TAM);
mostrarListadoLocalidad(localidades,TAM);
cargarPersona(personas,TAM);



return 0;
}
