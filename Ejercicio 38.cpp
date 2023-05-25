#include <iostream>

int edadAGrupoEtario(int edad){

    int grupo=0;

    if(edad>0 && edad<15){
        grupo=1;
    }
    if(edad>15 && edad<22){
        grupo=2;
    }
    if(edad>22 && edad<29){
        grupo=3;
    }
    if(edad>28){
        grupo=4;
    }


    return grupo;
}


using namespace std;

int main(){

    int edad=0;


    printf("Ingrese la edad \n");
    scanf("%d",&edad);

    printf("grupo: %d",edadAGrupoEtario(edad));

    return 0;
}
