#include <iostream>


int calcularFactorial(int valorA){

    int factorial=1;

    while(valorA>0){
        factorial=valorA*factorial;
        valorA--;
    }

    return factorial;
}



using namespace std;

int main(){

    int valorA=0;
    int factorial=0;

    scanf("%d",&valorA);
    factorial=calcularFactorial(valorA);

    printf("El factorial de %d es %d",valorA,factorial);


    return 0;
}

