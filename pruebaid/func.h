
typedef struct{


    int id;
    char nombre[10];
    char apellido[10];

    }ePersona;



    ePersona ingresardatos();
    void mostrarPersonas (ePersona lista[]);
    int incrementarID(int * numeroid);
