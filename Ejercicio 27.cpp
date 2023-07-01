#include <iostream>

struct Partido{
    int numeroDeEquipo;
    char codigoResultado;
};

using namespace std;

int main()
{
    int totalEquipos=0;


    printf("Ingrese los equipos que participaran \n");
    scanf("%d",&totalEquipos);

    Partido partidos[totalEquipos][totalEquipos-1];
    int puntuaciones[totalEquipos];

    //CARGA DE DATOS

    for(int i=0;i<totalEquipos;i++){
        printf("Fixture del equipo: %d \n",i+1);
        for(int j=0;j<totalEquipos-1;j++){

            partidos[i][j].numeroDeEquipo=i+1;
            printf("Partido numero:%d \n",j);
            printf("Ingrese G = Ganado, P=Perdido,E=Empatado segun resultado \n");
            scanf(" %c",&partidos[i][j].codigoResultado);

        }
    }

    //PROCESAMIENTO DE DATOS

    for(int i=0;i<totalEquipos;i++){
        puntuaciones[i]=0;
        for(int j=0;j<totalEquipos-1;j++){
            if(partidos[i][j].codigoResultado=='E'){
                puntuaciones[i]=puntuaciones[i]+1;
            }
            if(partidos[i][j].codigoResultado=='G'){
                puntuaciones[i]=puntuaciones[i]+3;
            }
        }
    }
    //

    for(int i=0;i<totalEquipos;i++){
        printf("Equipo %d \n",i+1);
        printf("Puntuacion:%d \n",puntuaciones[i]);
    }



    return 0;
}
