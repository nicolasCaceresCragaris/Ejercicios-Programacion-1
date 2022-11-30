#include <iostream>

using namespace std;

//Dados dos valores enteros y distintos, emitir una leyenda apropiada que informe cuál es el mayor entre ellos

int main(){
    int valorA=0;
    int valorB=0;
    cout<<"Ingrese el valorA y valorB"<<endl;
    cin>>valorA;
    cin>>valorB;

    if(valorA>valorB){

        cout<<"Valor A es mayor que valor B"<<endl;

    }else{
        cout<<"valor B es mayor que valor A"<<endl;
    }

    return 0;
}
