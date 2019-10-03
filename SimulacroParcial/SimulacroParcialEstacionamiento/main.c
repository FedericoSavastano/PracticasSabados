#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"
#define CANTIDAD 3

/**INICIALIZAR LOS ID CON CERO, QUE BUSQUE AL PRIMERO QUE SEA CERO Y LO CARGA */


int main()
{
    int idnumber=0;
    int opcion=0;
    ePropietario propietariosLista[CANTIDAD];
    inicializarPropietarios(propietariosLista);

    mostrarMenu();
    printf("Ingrese opcion : ");
    scanf("%d",&opcion);

    int i;

    while(opcion!=8)
    {
        switch(opcion)
        {
            case 1:
            for(i=0;i<CANTIDAD;i++)
            {
               if(propietariosLista[i].idPropietario==0)
                {
                    propietariosLista[i]=ingresarPropietario();
                    propietariosLista[i].idPropietario=incrementarID(&idnumber);
                    break;
                }

            }
            break;

            case 2:
            for(i=0;i<CANTIDAD;i++)
            {

                    mostrarPropietarios(propietariosLista);

                break;
            }
    /**     (para el examen tener la funcion de
            case 3:(mostrar)
                borrar un usuario. ingresar la id. que eso me de el indice. cuando lo tengo, a ese
                ponerle la id en cero. y con eso lo borro.
            case 4:
                en el de modificacion de datos de un usuario, hacer un swithc con los posibles datos
                y de ahi elegir, supongo.
            case 5:
                ingresar el vehiculo la misma historia que con el usuario
**/
    }//switch
    mostrarMenu();
    printf("Ingrese opcion : ");
    scanf("%d",&opcion);
    }//while

    return 0;
}
