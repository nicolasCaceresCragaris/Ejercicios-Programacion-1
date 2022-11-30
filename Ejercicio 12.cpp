#include <iostream>

using namespace std;

/*
Informar los primeros 100 números naturales y su sumatoria

*/

int main(){
    int suma=0;

    for(int i =0; i<101;i++){
        suma=suma+i;
        cout<<i<<endl;
        cout<<"Suma:"<<suma<<endl;
    }

    return 0;
}
