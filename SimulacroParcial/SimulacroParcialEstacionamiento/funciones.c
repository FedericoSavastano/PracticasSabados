#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"
#define CANTIDAD 3

int incrementarID(int * numeroid)
{
    *numeroid=*numeroid+1;
    return *numeroid;
}

ePropietario ingresarPropietario ()
{
    ePropietario unPropietario;
    char nombreAux[51];
    int diaAux;
    int diaValidado;
    int mesAux;
    int mesValidado;
    int anioAux;
    int anioValidado;

    printf("Ingrese el nombre : ");
    fflush(stdin);
    gets(nombreAux);
    validarNombre(nombreAux);
    if(validarNombre(nombreAux)==0)
        strcpy(unPropietario.nombre,nombreAux);


    /**fecha**/
    printf("Ingrese el dia : ");
    fflush(stdin);
    scanf("%d",&diaAux);
    while(diaValidado!=1)
     {
        if(diaAux<1 || diaAux>32)
        {
            printf("Ese numero no es valido ");
            diaValidado=0;
            printf("Ingrese el dia : ");
            scanf("%d",&diaAux);
        }else
        {
            diaValidado=1;
            unPropietario.fechaNacimiento.dia=diaAux;
        }


    }

    printf("Ingrese el mes : ");
    fflush(stdin);
    scanf("%d",&mesAux);
    while(mesValidado!=1)
     {
        if(mesAux<1 || mesAux>13)
        {
            printf("Ese numero no es valido ");
            mesValidado=0;
            printf("Ingrese el mes : ");
            scanf("%d",&mesAux);
        }else
        {
            mesValidado=1;
            unPropietario.fechaNacimiento.mes=mesAux;
        }


    }


    printf("Ingrese el anio : ");
    fflush(stdin);
    scanf("%d",&anioAux);
    while(anioValidado!=1)
     {
        if(anioAux<1900 || anioAux>2018)
        {
            printf("Ese numero no es valido ");
            anioValidado=0;
            printf("Ingrese el anio : ");
            scanf("%d",&anioAux);
        }else
        {
            anioValidado=1;
            unPropietario.fechaNacimiento.anio=anioAux;
        }


    }



    return unPropietario;
}

int validarNombre(char nombreAux[])
{
    int i;
    int retorno;
    int is_not_valid_name;


    do {
        //gets(nombreAux);
        for (i=0;i<strlen(nombreAux)-1;i++)
        {
            nombreAux[i] = tolower(nombreAux[i]);
            if ((nombreAux[i]<'a' || nombreAux[i]>'z') && nombreAux[i] != ' ')
            {
                is_not_valid_name = -1;
                printf("\nError en formato, ingrese solo letras y espacios: ");
                break;
            }
            else
            {
                if (i == 0 || nombreAux[i-1] == ' ')
                {
                    nombreAux[i] = toupper(nombreAux[i]);
                }
                is_not_valid_name = 0;
                retorno = 0;
            }
        }
    } while (is_not_valid_name);


    return retorno;
}

eFecha ingresarFecha()
{
    eFecha unaFecha;
    char diaAux[20];
    char mesAux[20];
    char anioAux[20];
    int diaAuxInt;
    int mesAuxInt;
    int anioAuxInt;

    printf("Ingrese el dia : ");
    fflush(stdin);
    scanf("%s",&diaAux);

    if(validarNumero(diaAux)==0)
    {
        diaAuxInt=atoi(diaAux);
        if(diaAuxInt<1 || diaAuxInt>31)
            unaFecha.dia=diaAuxInt;
            else
                printf("El dia debe ser entre 1 y 31 ");

    }

    printf("Ingrese el mes : ");
    fflush(stdin);
    scanf("%s",&mesAux);
    if(validarNumero(mesAux)==0)
    {
        mesAuxInt=atoi(mesAux);
        if(mesAuxInt<1 || mesAuxInt>12)
            unaFecha.mes=mesAuxInt;
            else
                printf("El mes debe ser entre 1 y 12 ");

    }

    printf("Ingrese el anio : ");
    fflush(stdin);
    scanf("%s",&anioAux);
    if(validarNumero(anioAux)==0)
    {
        anioAuxInt=atoi(anioAux);
        if(anioAuxInt<1900 || anioAuxInt>2018)
            unaFecha.anio=anioAuxInt;
            else
                printf("Año fuera de rango");



    }

    return unaFecha;
}



int validarNumero(char numeroAux[])
{
    int i;
    int is_not_valid_number = 0;
    int retorno;

    do
    {

        for (i=0; i<strlen(numeroAux)-1; i++) {
            if (numeroAux[i] < '0' || numeroAux[i] > '9'){
                is_not_valid_number = -1;
                retorno = 0;
                break;
            }
        }
        if (is_not_valid_number)
        {
            printf("Numero invalido!");
            //break;
        }
    } while (is_not_valid_number);


    return retorno;
}






void mostrarMenu()
{
    printf("\n****ESTACIONAMIENTO TE CHOCO TU COCHE S.A. ******\n\n");
    printf("\n Elija una opcion \n");
    printf("\n 1. Ingresar propietario \n 2. Mostrar \n 8. Salir\n ");
}

int elegirOpcion()
{
    int opcion;
    scanf("%d",&opcion);
    return opcion;
}

void mostrarPropietarios(ePropietario listaPropietarios[])
{
    int i;
    printf("\n \t Id \t Nombre \t Fecha Nacimiento \n");
    for(i=0;i<CANTIDAD;i++)
    {
        if(listaPropietarios[i].idPropietario!=0)
        {
        printf("\n \t %d \t %s \t %d / %d / %d \n", listaPropietarios[i].idPropietario, listaPropietarios[i].nombre,listaPropietarios[i].fechaNacimiento.dia, listaPropietarios[i].fechaNacimiento.mes, listaPropietarios[i].fechaNacimiento.anio);
        }
    }
}

void mostrarFechasNac(ePropietario listaPropietarios[])

{
    int i;
    printf("\n Fecha Nacimiento \n");
    for(i=0;i<CANTIDAD;i++)
    {

        printf("\n -- %d -- %s -- %d / %d / %d \n", listaPropietarios[i].idPropietario, listaPropietarios[i].nombre,listaPropietarios[i].fechaNacimiento.dia,listaPropietarios[i].fechaNacimiento.mes,listaPropietarios[i].fechaNacimiento.anio);
    }
}



void inicializarPropietarios (ePropietario listaPropietarios[])
{
    int i;
    for(i=0;i<CANTIDAD;i++)
    {

       listaPropietarios[i].idPropietario=0;
    }

}
