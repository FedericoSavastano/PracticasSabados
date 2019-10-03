
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define CANTIDAD 3

typedef struct
{
    int dia;
    int mes;
    int anio;

} eFecha;

typedef struct
{
    int idPropietario;
    char nombre[51];
    eFecha fechaNacimiento;

} ePropietario;





typedef struct
{
    char patente[50];
    eFecha fechaIngreso;
    int horaIngreso;
    int horaSalida;
    int idPropietario;

} eVehiculo;



ePropietario ingresarPropietario ();
int validarNombre(char nombreAux[]);
int incrementarID(int * numeroid);
eFecha ingresarFecha();
int validarNumero(char numeroAux[]);
void mostrarMenu();
int elegirOpcion();
void mostrarPropietarios(ePropietario listaPropietarios[]);
void inicializarPropietarios (ePropietario listaPropietarios[]);
