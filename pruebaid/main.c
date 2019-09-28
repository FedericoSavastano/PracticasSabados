#include <stdio.h>
#include <stdlib.h>
#include "func.h"

int main()
{
    int idnumber=0;
    ePersona personas[3];
    int i;
    for(i=0;i<3;i++)
        {
         personas[i]=ingresardatos();
         personas[i].id=incrementarID(&idnumber);
        }

        mostrarPersonas(personas);


        for(i=0;i<3;i++)
        {
         personas[i]=ingresardatos();
         personas[i].id=incrementarID(&idnumber);
        }

        mostrarPersonas(personas);



    return 0;
}
