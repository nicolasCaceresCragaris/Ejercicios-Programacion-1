#include <iostream>


using namespace std;



int main(){

    int n=0;
    int contador=0;

    cout<<"Ingrese valores "<<endl;
    cin>>n;

    while(n>-1){

        contador++;
        cout<<"Ingrese valores "<<endl;
        cin>>n;
    }

    cout<<"Valores ingresados:"<<contador<<endl;

    return 0;
}
