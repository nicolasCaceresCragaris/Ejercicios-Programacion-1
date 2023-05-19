#include <iostream>



void determinarMaximoValor(float valor,int contador,int contadorSublotes,int &subloteEncontrado,int &valorMaxConjunto,int &posicionEncontrado){

    if(valor>valorMaxConjunto){
        valorMaxConjunto=valor;
        posicionEncontrado=contador;
        subloteEncontrado=contadorSublotes;
    }


    return;
}



using namespace std;

int main(){

    float valor=0;
    float promedio=0;
    int contador=0;
    int acumulador=0;
    int contadorSublotes=1;
    int posicionEncontrado=0;
    int subloteEncontrado=0;
    int valorMaxConjunto=0;
    int valorMinSublote=0;


    printf("Sublote nro %d \n",contadorSublotes);

    printf("Ingrese un valor positivo \n");
    scanf("%f",&valor);

    valorMaxConjunto=valor;
    subloteEncontrado=contadorSublotes;
    posicionEncontrado=contador;


    while(valor>=0){

        if(valor==0 && contador==0){

            printf("El conjunto esta vacio \n");

            contadorSublotes++;

            //INICIA OTRO SUBLOTE LLEGADO A ESTE PUNTO

            printf("Sublote nro %d \n",contadorSublotes);
            acumulador=0;
            contador=0;

        }


        if(valor==0 && contador!=0){

            promedio=acumulador/contador;
            printf("El valor minimo de este sublote es: %d \n",valorMinSublote);
            printf("El promedio de los valores ingresados es: %f \n",promedio);

            contadorSublotes++;

            //INICIA OTRO SUBLOTE LLEGADO A ESTE PUNTO

            printf("Sublote nro %d \n",contadorSublotes);
            acumulador=0;
            contador=0;
        }
            //DETERMINAMOS EL PRIMER VALOR MINIMO PARA CADA SUBLOTE
           if(contador==0 && valor!=0){
                valorMinSublote=valor;
           }
           if(contador>0 && valor!=0){
                if(valor<valorMinSublote){
                    valorMinSublote=valor;
                }
           }


           if(valor!=0){

            determinarMaximoValor(valor,contador,contadorSublotes,subloteEncontrado,valorMaxConjunto,posicionEncontrado);

            printf("Pos: %d \n",contador+1);
            contador++;
            acumulador+=valor;
        }


        printf("Ingrese un valor positivo \n");
        scanf("%f",&valor);

    }

    printf("El valor maximo del conjunto fue: %d \n",valorMaxConjunto);
    printf("Fue encontrado en el sublote: %d en la posicion numero %d \n",subloteEncontrado,posicionEncontrado+1);

    printf("Fin del programa \n");

    return 0;
}




