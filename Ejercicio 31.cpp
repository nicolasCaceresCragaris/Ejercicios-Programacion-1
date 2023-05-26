#include <iostream>
#include <string.h>


struct Integrante{

    char nombre[21];
    char apellido[21];
    int edad;
    char sexo;
    char nivelEstudios;
    char estudiosIndicador;
};

struct Familia{

    char domicilio[30];
    char tipoVivienda;
    int cantidadIntegrantes;

};

void verificarSiCompletoPrimario(Integrante integrante,Integrante primarioCompleto[],int &contador){

    if((integrante.nivelEstudios=='p' &&integrante.estudiosIndicador=='c')||(integrante.nivelEstudios=='s')||(integrante.nivelEstudios=='t')||(integrante.nivelEstudios=='u')){

        primarioCompleto[contador]=integrante;
        contador++;
    }

    return;
}



void cargarIntegrantes(int integrantes, Integrante primarioCompleto[],int &contador){


    Integrante integrante;

    for(int i=0;i<integrantes;i++){

        printf("Ingrese el nombre de la persona: \n");
        scanf(" %s",integrante.nombre);

        printf("Ingrese el apellido: \n");
        scanf(" %s",integrante.apellido);

        printf("Ingrese la edad \n");
        scanf("%d",&integrante.edad);

        printf("Nivel de estudio alcansado \n");
        scanf(" %c",&integrante.nivelEstudios);

        printf("Ingrese si completo o no completo \n");
        scanf(" %c",&integrante.estudiosIndicador);

        verificarSiCompletoPrimario(integrante,primarioCompleto,contador);

    }

    printf("Fin de carga de datos exitosa \n");

    return;
}

void cargarFamilia(Familia &familia){

    printf("Ingrese la cantidad de integrantes del grupo familia \n");
    scanf("%d",&familia.cantidadIntegrantes);

    if(familia.cantidadIntegrantes>0){
        printf("Ingrese el tipo de domicilio C=Casa D=Depto \n");
        scanf(" %c",&familia.tipoVivienda);

        printf("Ingrese la direccion \n");
        scanf("%s",familia.domicilio);
    }


    return;
}

using namespace std;

int main(){

    Familia familia;
    int contador=0;

    Integrante primarioCompleto[50];

    cargarFamilia(familia);

    while(familia.cantidadIntegrantes>0){

        cargarIntegrantes(familia.cantidadIntegrantes,primarioCompleto,contador);

        cargarFamilia(familia);
    }
    
    

    return 0;
}



