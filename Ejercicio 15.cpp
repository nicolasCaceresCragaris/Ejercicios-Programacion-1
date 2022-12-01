#include <iostream>
#include <string>
#define INFRINGMENT 20

using namespace std;



int main(){

    int tipo=0;
    int contadorGrado=0;
    string motivo="";
    float multaValor=0;
    float totalValor=0;
    char grado;

    for(int i=0;i<INFRINGMENT;i++){
        cout<<"Ingrese el tipo de infraccion (1,2,3,4)"<<endl;
        cin>>tipo;

        cout<<"Ingrese el motivo de la infraccion"<<endl;
        cin>>motivo;

        cout<<"Gravedad de la infraccoin"<<endl;
        cin>>grado;

        if(grado=='L' || grado=='l'){
            multaValor=100.0;
            cout<<"Gravedad de tipo:"<<grado<<",tiene que pagar "<<multaValor<<endl;
        }
        if(grado=='M' || grado=='m'){
            multaValor=200.0;
            cout<<"Gravedad de tipo:"<<grado<<",tiene que pagar "<<multaValor<<endl;
        }
        if(grado=='G' || grado== 'g'){
            multaValor=300.0;
            cout<<"Gravedad de tipo:"<<grado<<",tiene que pagar "<<multaValor<<endl;
            if(tipo==3 || tipo==4){
                contadorGrado++;
            }
        }
        totalValor+=multaValor;
        multaValor=0;


    }
    cout<<"El total a pagar es:"<<totalValor<<endl;

    if(contadorGrado>3){
        cout<<"CLAUSURAR FABRICA"<<endl;
    }
    return 0;
}
