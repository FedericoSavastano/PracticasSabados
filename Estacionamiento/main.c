#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "labibliopa.h"

int main()
{
    sPersona ListadoDePersonas[4];
    hardcodePersonas(ListadoDePersonas,4);
    mostrarPersonas(ListadoDePersonas,4);

    sVehiculo ListadoDeVehiculos[4];
    hardcodeoAutos(ListadoDeVehiculos,4);

    mostrarPersonasConSusAutos(ListadoDePersonas,4,ListadoDeVehiculos,4);
    printf("\n Estacionamiento!\n");
    return 0;
}

