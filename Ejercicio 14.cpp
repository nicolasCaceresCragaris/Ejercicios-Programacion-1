#include <iostream>
#define MAX_ENTEROS 50

using namespace std;



int main(){

    int enteros[MAX_ENTEROS];
    int contador=0;
    int acumulador=0;
    int suma=0;
    float promedio=0;


    for(int i=0; i<MAX_ENTEROS;i++){
        cin>>enteros[i];
    }
    for(int i=0; i<MAX_ENTEROS;i++){
        if(enteros[i]>100){
            acumulador=acumulador+enteros[i];
            contador++;
        }
        if(enteros[i]<-10){
            suma=suma+(enteros[i]);
        }
    }
    promedio=acumulador/contador;

    cout<<"Promedio: "<<promedio<<endl;
    cout<<"Suma: "<<suma<<endl;


    return 0;
}
