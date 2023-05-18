#include <iostream>
#include <string.h>

struct Persona{
    char nombre[30];
    int fecha;
};

void determinarSiEsMayor(Persona persona, Persona &mayor){

    int anioPer;
    int mesPer;
    int diaPer;
    int anioMay;
    int mesMay;
    int diaMay;
    int auxA;
    int auxB;

    //AAAAMMDD
    anioPer=persona.fecha/10000;
    auxA=persona.fecha%10000;
    mesPer=auxA/100;
    diaPer=auxA%100;

    anioMay=mayor.fecha/10000;
    auxB=mayor.fecha%10000;
    mesMay=auxB/100;
    diaMay=auxB%100;

    if(anioPer<anioMay){
        strcpy(mayor.nombre,persona.nombre);
        mayor.fecha=persona.fecha;
    }
    if(anioPer==anioMay && mesPer<mesMay){
        strcpy(mayor.nombre,persona.nombre);
        mayor.fecha=persona.fecha;

    }
    if(mesPer==mesMay && diaPer<diaMay){
        strcpy(mayor.nombre,persona.nombre);
        mayor.fecha=persona.fecha;

    }

    return;
}
void determinarSiEsMenor(Persona persona, Persona &menor){

    int anioPer;
    int mesPer;
    int diaPer;
    int anioMen;
    int mesMen;
    int diaMen;
    int auxA;
    int auxB;

    //AAAAMMDD
    anioPer=persona.fecha/10000;
    auxA=persona.fecha%10000;
    mesPer=auxA/100;
    diaPer=auxA%100;

    anioMen=menor.fecha/10000;
    auxB=menor.fecha%10000;
    mesMen=auxB/100;
    diaMen=auxB%100;

    if(anioPer>anioMen){
        strcpy(menor.nombre,persona.nombre);
        menor.fecha=persona.fecha;
    }
    if(anioPer==anioMen && mesPer>mesMen){
        strcpy(menor.nombre,persona.nombre);
        menor.fecha=persona.fecha;

    }
    if(mesPer==mesMen && diaPer>diaMen){
        strcpy(menor.nombre,persona.nombre);
        menor.fecha=persona.fecha;

    }

    return;
}

void mostrarPersonas(Persona mayor, Persona menor){

    printf("Nombre de la persona mas grande: %s \n",mayor.nombre);
    printf("Fecha de nacimiento: %d \n",mayor.fecha);

    printf("Nombre de la persona mas joven: %s \n",menor.nombre);
    printf("Fecha de nacimiento: %d \n",menor.fecha);

    return;
}

using namespace std;

int main(){

    Persona persona;
    Persona mayor;
    Persona menor;
    int counter=0;

    printf("Ingrese un nombre: \n");
    scanf("%s",persona.nombre);

    printf("Ingrese una fecha: \n");
    scanf("%d",&persona.fecha);

    while(strcmp(persona.nombre,"FIN")!=0){

        if(counter==0){
            strcpy(mayor.nombre,persona.nombre);
            strcpy(menor.nombre,persona.nombre);

            mayor.fecha=persona.fecha;
            menor.fecha=persona.fecha;
        }

        //DETERMINAR LA PERSONA MAS VIEJA

        determinarSiEsMayor(persona,mayor);
        determinarSiEsMenor(persona,menor);



        //DETERMINAR LA PERSONA MAS JOVEN


        counter++;

        printf("Ingrese un nombre: \n");
        scanf("%s",persona.nombre);

        if(strcmp(persona.nombre,"FIN")!=0){
            printf("Ingrese una fecha: \n");
            scanf("%d",&persona.fecha);
        }

    }

    mostrarPersonas(mayor, menor);



    return 0;
}


