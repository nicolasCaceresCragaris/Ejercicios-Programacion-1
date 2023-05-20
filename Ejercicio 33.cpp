#include <iostream>


int calcularMaximoComunDivisor(int valorA, int valorB){

    int resto = valorA%valorB;

    if(resto==0){
        return valorB;
    }
    else{
        valorA=valorB;
        valorB=resto;
        resto=valorA%valorB;
    }
    return -1;
}



using namespace std;

int main(){

    int valorA=0;
    int valorB=0;
    int mcd;

    scanf("%d",&valorA);
    scanf("%d",&valorB);

    mcd=calcularMaximoComunDivisor(valorA,valorB);

    printf("El MCD entre %d y %d es: %d \n",valorA,valorB,mcd);

    return 0;
}
