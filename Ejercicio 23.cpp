#include <iostream>



using namespace std;

int main(){

    float valor;
    float maxNeg;
    float minPos;
    float promedio;
    float minRange=27;
    float acumulador;
    int counter;

    printf("Ingrese un valor: \n");
    scanf("%f",&valor);

    while(valor!=0){
        counter++;




        //A) El valor maximo negativo
        if(valor<0){
            if(counter==1){
                maxNeg=valor;
            }
            if(counter>1){
                if(valor<maxNeg){
                    maxNeg=valor;
                }
            }
        }
        //--------------------------------------

        //B)El valor minimo positivo
        if(valor>0){
            if(counter==1){
                minPos=valor;
            }
            if(counter>1){
                if(valor<minPos){
                    minPos=valor;
                }
            }
        }
        //C)El valor minimo dentro del rango -17.3 y 26.9
        if(valor>=-17.3 && valor<=26.9){
            if(valor<minRange){
                minRange=valor;
            }
        }

        acumulador+=valor;

        printf("Ingrese un valor: \n");
        scanf("%f",&valor);
    }
    promedio=acumulador/counter;

    printf("El valor maximo negativo es: %f \n",maxNeg);
    printf("El valor minimo positivo es: %f \n",minPos);
    printf("El valor minimo dentro del rango es: %f \n",minRange);
    printf("Se procesaron %d valores, el promedio fue: %f",counter,promedio);

    return 0;
}
