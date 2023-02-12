#include <iostream>

using namespace std;

int main(){

    int valor=0;
    int mayor=0;

    for(int i=0;i<10;i++){
        printf("Ingrese el valor: \n");
        scanf("%d",&valor);

        if(i==0){
            mayor=valor;
        }
        if(i>0 && valor>mayor){
            mayor=valor;
        }
    }

    printf("El mayor es: %d",mayor);

    return 0;
}
