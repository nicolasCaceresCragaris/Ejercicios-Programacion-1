#include <iostream>

using namespace std;

//6 Dadas dos fechas informar cual es la más reciente. Determine cuáles serían los datos de entrada y las leyendas
//a informar de acuerdo al proceso solicitado.

int crearFecha(int dia, int mes, int anio){
    int fecha=0;
    fecha=(anio*10000)+(mes*100)+dia;
    return fecha;
}


int main(){

    int diaUno=0;
    int diaDos=0;
    int mesUno=0;
    int mesDos=0;
    int anioUno=0;
    int anioDos=0;
    int fechaUno=0;
    int fechaDos=0;

    cout<<"Ingrese datos para la primer fecha"<<endl;
    cin>>diaUno;
    cin>>mesUno;
    cin>>anioUno;

    cout<<"Ingrese datos para la primer fecha"<<endl;
    cin>>diaDos;
    cin>>mesDos;
    cin>>anioDos;

    fechaUno=crearFecha(diaUno,mesUno,anioUno);
    fechaDos=crearFecha(diaDos,mesDos,anioDos);

    if(fechaUno>fechaDos){

        cout<<"La primer fecha: "<<fechaUno<< "es la fecha mas reciente"<<endl;
    }else{
        cout<<"La segunda fecha: "<<fechaDos<< "es la fecha mas reciente"<<endl;
    }

    return 0;
}
