#include <iostream>
#include <stdlib.h>

using namespace std;

struct Pack{
    int tinto;
    int blanco;
};

void determinarPredominante(int vinoTinto, int vinoBlanco, int &quitar, char &predominante){

    if(vinoBlanco>vinoTinto){
        predominante='b';
        quitar=vinoBlanco/vinoTinto;
    }
    if(vinoBlanco<vinoTinto){
        predominante='t';
        quitar=vinoTinto/vinoBlanco;
    }
    if(vinoBlanco==vinoTinto){
        predominante='i';
        quitar=1;
    }

    return;
}

void armarPaquetes(int vinoTinto, int vinoBlanco, int quitar, char predominante, int &packArmados, int &sobranteTinto, int&sobranteBlanco, Pack&pack){


    while(vinoBlanco!=0 && vinoTinto!=0){

        packArmados++;

        if(predominante=='b'){
            vinoBlanco=vinoBlanco-quitar;
            vinoTinto=vinoTinto-1;
            if(vinoTinto==0){
                pack.blanco=quitar;
                pack.tinto=1;
                sobranteBlanco=vinoBlanco;
                sobranteTinto=vinoTinto;
            }
        }
        if(predominante=='t'){

            vinoTinto=vinoTinto-quitar;
            vinoBlanco=vinoBlanco-1;

                if(vinoBlanco==0){
                    pack.tinto=quitar;
                    pack.blanco=1;
                    sobranteBlanco=vinoBlanco;
                    sobranteTinto=vinoTinto;
            }
        }

    }



    return;
}

void mostrarDatos(int armados, Pack pack, int sobranteTinto, int sobranteBlanco){

    printf("Pack armados: %d \n",armados);
    printf("El pack contiene %d vino tintos y %d vino blancos.\n",pack.tinto,pack.blanco);
    printf("Sobraron %d tintos y %d blancos.\n",sobranteTinto,sobranteBlanco);

    return;
}


int main(){


    char predominante;
    int quitar=0;
    int packArmados=0;
    int sobranteTinto;
    int sobranteBlanco;
    int vinoTinto;
    int vinoBlanco;
    Pack pack;

    printf("Ingrese el stock de vino tinto \n");
    scanf("%d",&vinoTinto);

    printf("Ingrese el stock de vino blanco \n");
    scanf("%d",&vinoBlanco);


    //CREANDO PAQUETES

    determinarPredominante(vinoTinto, vinoBlanco, quitar,predominante);
    armarPaquetes(vinoTinto, vinoBlanco, quitar, predominante, packArmados, sobranteTinto, sobranteBlanco,pack);

    //MOSTRANDO RESULTADO
    mostrarDatos(packArmados,pack,sobranteTinto,sobranteBlanco);

    return 0;
}
