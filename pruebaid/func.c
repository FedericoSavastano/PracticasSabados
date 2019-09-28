#include <stdio.h>
#include <stdlib.h>
#include "func.h"

ePersona ingresardatos()
{
    ePersona persona;

    printf("Ingrese el nombre : ");
    fflush(stdin);
    gets(persona.nombre);

    printf("Ingrese el apellido : ");
    fflush(stdin);
    gets(persona.apellido);

    return persona;
}


void mostrarPersonas (ePersona lista[])
{
    int i;
    printf("ID -- NOMBRE -- APELLIDO\n");
        for(i=0;i<3;i++)
      {

        printf("\n%d -- %s -- %s\n",lista[i].id,lista[i].nombre,lista[i].apellido);
        }

}


int incrementarID(int * numeroid)
{
    *numeroid=*numeroid+1;
    return *numeroid;
}
