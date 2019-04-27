typedef struct
{
    int id;
    char descripcion[30];

}eLocalidad;

typedef struct
{
    int id;
    char nombre[20];
    char apellido[20];
    int edad;
    int idLocalidad;
    int estado;

}ePersona;

int cargarLocalidades(eLocalidad listado[],int tam);
void mostrarLocalidad(eLocalidad localidad);
void mostrarListadoLocalidad(eLocalidad listado[],int tam);
void inicializarListado(ePersona listadoPersona[],int tam);
int buscarLugar(ePersona listadoPersona[],int tam);
int cargarPersona(ePersona listadoPersona[],int tam);
int borrarPersona (ePersona listadoPersona[],ePersona persona,int tam);
