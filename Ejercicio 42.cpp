#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct Calendario{
    char mes[31];
    int cant;
};

struct Fecha{
    int dia;
    int mes;
    int anio;

};

struct Persona{
    char nombre[31];
    char apellido[31];
    Fecha nacimiento;
    char sexo;
};

Persona obtenerDatos(){

    Persona persona;

    printf("Ingrese su nombre. \n");
    scanf("%s", persona.nombre);

    printf("Ingrese su apellido.\n");
    scanf("%s", persona.apellido);

    printf("Ingrese su dia de nacimiento. \n");
    scanf("%d",&persona.nacimiento.dia);

    printf("Ingrese su mes de nacimiento. \n");
    scanf("%d",&persona.nacimiento.mes);

    printf("Ingrese su anio de nacimiento. \n");
    scanf("%d",&persona.nacimiento.anio);

    printf("Ingrese su sexo que figura en el DNI. (M/F) \n");
    scanf(" %c", &persona.sexo);

    return persona;
}

void procesarNacimientos(Calendario cal[],Persona persona,int &antesDeJulio, int &mujeresPrimavera ){

    cal[persona.nacimiento.mes-1].cant++;

    if(persona.nacimiento.anio<1990){
        antesDeJulio++;
    }
    if(persona.nacimiento.anio==1990){
        if(persona.nacimiento.mes<7){
            antesDeJulio++;
        }
        if(persona.nacimiento.mes==7){
            if(persona.nacimiento.dia<9){
                antesDeJulio++;
            }
        }
    }

    if((persona.sexo=='f') && (persona.nacimiento.anio==1982)){
       if(persona.nacimiento.mes==9 && persona.nacimiento.dia>=23){
            mujeresPrimavera++;
       }
       if(persona.nacimiento.mes==12 && persona.nacimiento.dia<=22){
            mujeresPrimavera++;
       }
       if(persona.nacimiento.mes==10 || persona.nacimiento.mes==11){
            mujeresPrimavera++;
       }

    }


    return;
}




void determinarMasViejo(Persona persona, int contador, Persona &masVieja){

    if(contador==1){

        masVieja=persona;

    }else{

        if(persona.nacimiento.anio<masVieja.nacimiento.anio){
            masVieja=persona;
        }
        if(persona.nacimiento.anio==masVieja.nacimiento.anio){

            if(persona.nacimiento.mes<masVieja.nacimiento.mes){
                masVieja=persona;
            }
            if(persona.nacimiento.mes==masVieja.nacimiento.mes){

                if(persona.nacimiento.dia<masVieja.nacimiento.dia){
                    masVieja=persona;
                }
            }
        }
    }
    return;
}

int main(){

    Calendario cal[]={
    {"Enero",0},
    {"Febrero",0},
    {"Marzo",0},
    {"Abril",0},
    {"Mayo",0},
    {"Junio",0},
    {"Julio",0},
    {"Agosto",0},
    {"Septiembre",0},
    {"Octubre",0},
    {"Noviembre",0},
    {"Diciembre",0}
    };

    Persona personas[]={
        {"Mauro","Icardi",{2,10,1982},'m'},
        {"Wanda","Nara",{23,9,1982},'f'},
        {"Elva","Gallo",{22,9,1982},'f'},
        {"Santi","Delmoro",{5,4,1990},'m'},
        {"Gaston","Gaudio",{6,2,1993},'m'},
        {"Alejandro","Lerner",{24,1,2000},'m'},
        {"Veronica","Sanchez",{23,12,1982},'f'},
        {"Sandra","Minujin",{22,12,1982},'f'},
        {"Elias","Gomez",{22,12,1993},'m'},
        {"Carola","Gelen",{11,11,1982},'f'},
        {"Nicol","Nicki",{13,11,1982},'f'},
        {"Cale","Mase",{13,11,1982},'m'},
        {"Cele","Marquez",{13,11,1981},'f'},
        {"Rafael","Barana",{30,5,1998},'m'},
        {"Kilyan","Mbape",{22,2,1998},'m'},
        {"Pablo","Echarri",{22,2,1998},'m'},
        {"Soledad","Silveira",{22,2,1998},'f'},
        {"German","Paoloski",{1,1,2000},'m'},
        {"Peter","Pan",{3,6,1993},'m'},
        {"Cecilia","Gerson",{11,11,2011},'f'},
        };




    //Persona persona;
    int contadorPersonas=0;
    int antesDeJulio=0;
    int mujeresPrimavera=0;

    Persona personaMasVieja;

    //persona=obtenerDatos();


    /*while(persona.nacimiento.dia>0){
        contadorPersonas++;

        procesarNacimientos(cal,persona,antesDeJulio,mujeresPrimavera);
        determinarMasViejo(persona,contadorPersonas,personaMasVieja);

        persona=obtenerDatos();
    }
    */
    for(int i=0; i<20;i++){
        contadorPersonas++;

        procesarNacimientos(cal,personas[i],antesDeJulio,mujeresPrimavera);
        determinarMasViejo(personas[i],contadorPersonas,personaMasVieja);
    }



    printf("------------------------------------------- \n");

    for(int i=0; i<12;i++){
        printf("Nacimientos en %s : %d \n",cal[i].mes,cal[i].cant);
    }

    printf("======================== \n");
    printf("Datos de la persona mas vieja:\n");
    printf("%s %s \n",personaMasVieja.nombre,personaMasVieja.apellido);
    printf("%d/%d/%d \n",personaMasVieja.nacimiento.dia,personaMasVieja.nacimiento.mes,personaMasVieja.nacimiento.anio);
    printf("sexo:%c\n",personaMasVieja.sexo);


    printf("========================\n");

    printf("Nacimientos antes del 9 de julio de 1990: %d \n",antesDeJulio);
    printf("Nacimientos de mujeres en la primavera de 1982: %d \n",mujeresPrimavera);




    return 0;
}
