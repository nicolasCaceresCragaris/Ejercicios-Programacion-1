#include <iostream>


using namespace std;



int main(){

    int n=0;
    int valor=0;


    printf("Ingrese los n componentes \n");
    scanf("%d",&n);

    int conjuntoUno[n];
    int conjuntoDos[n];
    int conjuntoFinal[n];

    printf("Carga del conjunto uno \n");
    for(int i=0;i<n;i++){
        printf("Ingrese un valor \n");
        scanf("%d",&valor);
        conjuntoUno[i]=valor;
    }

    printf("Carga del conjunto dos \n");
    for(int i=0;i<n;i++){
        printf("Ingrese un valor \n");
        scanf("%d",&valor);
        conjuntoDos[i]=valor;
    }


    //GENERANDO EL CONJUNTO RESULTANTE

    for(int i=0;i<n;i++){
        if(i%2==0){
            conjuntoFinal[i]=conjuntoUno[i];
        }
        if(i%2!=0){
            conjuntoFinal[i]=conjuntoDos[i];
        }
    }

    for(int i=0;i<n;i++){
        printf("%d) %d \n",i,conjuntoFinal[i]);
    }

   return 0;
}
