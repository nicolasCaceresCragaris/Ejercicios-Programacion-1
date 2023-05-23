#include <iostream>

struct Contenedor{

    int id;
    float peso;
    int puerto;

};

float calcularPesoTotal(Contenedor totalContenedores[]){

    float total=0;

    for(int i=0;i<10;i++){
        total+=totalContenedores[i].peso;

    }

    return total;
}

void obtenerIdMayorPeso(Contenedor totalContenedores[], int &idMayor){

    float pesoMayor=0;

    for(int i=0;i<10;i++){
        if(i==0){
            idMayor=totalContenedores[i].id;
            pesoMayor=totalContenedores[i].peso;
        }
        if(i>0 && totalContenedores[i].peso>pesoMayor){
            idMayor=totalContenedores[i].id;
            pesoMayor=totalContenedores[i].peso;
        }
    }
}

void mostrarDestinos(Contenedor totalContenedores[]){

    int contadorDestinoUno=0;
    int contadorDestinoDos=0;
    int contadorDestinoTres=0;

    for(int i=0;i<10;i++){
        if(totalContenedores[i].puerto==1){
            contadorDestinoUno++;
        }
        if(totalContenedores[i].puerto==2){
            contadorDestinoDos++;
        }
        if(totalContenedores[i].puerto==3){
            contadorDestinoTres++;
        }
    }

    printf("Al puerto uno van: %d \n",contadorDestinoUno);
    printf("Al puerto dos van: %d \n",contadorDestinoDos);
    printf("Al puerto tres van: %d \n",contadorDestinoTres);

    return;
}


using namespace std;

int main(){

    Contenedor totalContenedores[]{
    {1,80.0,2},
    {2,40.5,1},
    {3,130.0,3},
    {4,55.3,1},
    {5,11.0,3},
    {6,33.3,1},
    {7,44.4,2},
    {8,11.0,2},
    {9,50.0,3},
    {10,80.0,3}
    };

    int opcion=0;
    int idMayor=0;
    float pesoTotal=0;




    printf("1)Calcular el peso total de la carga \n");
    printf("2)Identificar el contenedor de mayor peso \n");
    printf("3)Mostrar cantidad de destinos \n");

    scanf("%d",&opcion);

    while(opcion>0 && opcion<4){

        if(opcion==1){
            pesoTotal=calcularPesoTotal(totalContenedores);
            printf("El peso total del cargamento es de %4.2f kg\n",pesoTotal);
        }
        if(opcion==2){
            obtenerIdMayorPeso(totalContenedores,idMayor);
            printf("El id del contenedor con mayor peso es: %d \n",idMayor);
        }
        if(opcion==3){
            mostrarDestinos(totalContenedores);
        }

        printf("1)Calcular el peso total de la carga \n");
        printf("2)Identificar el contenedor de mayor peso \n");
        printf("3)Mostrar cantidad de destinos \n");

        scanf("%d",&opcion);


    }



    return 0;
}




