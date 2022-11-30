#include <iostream>

using namespace std;

/*
Dados un mes y el año correspondiente informar cuántos días tiene el mes

*/
int main(){

    int mes=0;
    int anio=0;
    cout<<"Ingrese mes y anio"<<endl;
    cin>>mes;
    cin>>anio;

    switch (mes){

        case 1:
                cout<<"Mes: Enero Dias: 31"<<endl;
                break;
        case 2:
                cout<<"Mes: Febrero"<<endl;
                if(anio%4==0){
                    if(anio%100==0 && anio%400==0){
                        cout<<"Dias: 29"<<endl;
                    }
                    cout<<"Dias: 29"<<endl;
                }
                else{
                    cout<<"Dias: 28"<<endl;
                }
                break;
        case 3:
                cout<<"Mes: Marzo Dias: 31"<<endl;
                break;
        case 4:
                cout<<"Mes: Abril  Dias:30"<<endl;

                break;
        case 5:
                cout<<"Mes: Mayo Dias: 31"<<endl;
                break;
        case 6:
                cout<<"Mes: Junio Dias:30"<<endl;
                break;
        case 7:
                cout<<"Mes: Julio  Dias: 31"<<endl;
                break;
        case 8:
                cout<<"Mes: Agosto  Dias: 31"<<endl;
                break;
        case 9:
                cout<<"Mes: Septiembre Dias:30"<<endl;
                break;
        case 10:
                cout<<"Mes: Octubre Dias: 31"<<endl;
                break;
        case 11:
                cout<<"Mes: Noviembre Dias:30"<<endl;
                break;
        case 12:
                cout<<"Mes: Diciembre Dias: 31"<<endl;

    }

   return 0;
}
