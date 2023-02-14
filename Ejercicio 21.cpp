#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){


    int valor=0;
    int mayor=0;
    int menor=0;
    int pos=1;
    int posMax=0;
    int posMin=0;

    printf("Ingrese un valor : \n");
    scanf("%d",&valor);

    while(valor!=0){
        if(pos==1){
            mayor=valor;
            menor=valor;
            posMax=pos;
            posMin=pos;
        }
        if(pos!=1 && valor>mayor){
            mayor=valor;
            posMax=pos;
        }
        if(pos!=1 && valor<menor){

            menor=valor;
            posMin=pos;

        }
        pos++;

        printf("Ingrese un valor : \n");
        scanf("%d",&valor);
    }

    printf("El mayor es:%d y su posicion fue:%d \n",mayor,posMax);
    printf("El menor es:%d y su posicion fue:%d \n",menor,posMin);




    return 0;
}
