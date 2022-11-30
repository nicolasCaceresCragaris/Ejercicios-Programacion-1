#include <iostream>

using namespace std;

//Dada una terna de números naturales que representan al día, al mes y al año de una determinada
//fecha informarla como un solo número natural de 8 dígitos con la forma (AAAAMMDD).


int main(){

    int fecha=0;
    int dia=0;
    int mes=0;
    int anio=0;

    cout<<"Ingrese un dia"<<endl;
    cin>>dia;

    cout<<"Ingrese un mes"<<endl;
    cin>>mes;

    cout<<"Ingrese un anio"<<endl;
    cin>>anio;

    fecha=(anio*10000)+(mes*100)+dia;

    cout<<"Fecha: "<<fecha<<endl;

    return 0;
}
