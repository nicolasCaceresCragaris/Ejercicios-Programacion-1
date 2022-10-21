#include <iostream>

using namespace std;

/*
Dado un triángulo representado por sus lados L1, L2, L3, determinar e imprimir una leyenda según sea:
equilátero, isósceles o escalenos.

*/
int main(){

    float ladoA=0;
    float ladoB=0;
    float ladoC=0;
    cout<<"Ingrese los lados del triangulo"<<endl;
    cin>>ladoA;
    cin>>ladoB;
    cin>>ladoC;

    if(ladoA==ladoB && ladoA==ladoC){
        cout<<"Triangulo equilatero"<<endl;
    }
    if(ladoA!=ladoB && ladoA!=ladoC && ladoB!=ladoC){
        cout<<"Triangulo escaleno"<<endl;
    }
    if((ladoA==ladoB && ladoA!=ladoC)||(ladoB==ladoC && ladoB!=ladoA)||(ladoC==ladoA&&ladoC!=ladoB)){
        cout<<"Triangulo isosceles"<<endl;
    }
   return 0;
}
