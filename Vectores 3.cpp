#include <iostream>
#include <string.h>



using namespace std;



int main(){

    int n=0;
    int valor=0;
    int acumulador=1;
    int key=0;

    printf("Ingrese los n componentes \n");
    scanf("%d",&n);

    int vec[n];
    int fact[n];

    for(int i=0;i<n;i++){
        printf("Ingrese un valor \n");
        scanf("%d",&valor);
        vec[i]=valor;
    }

    for(int i=0;i<n;i++){
        key=vec[i];
        while(key!=0){

            acumulador*=key;
            key--;
        }
        fact[i]=acumulador;
        acumulador=1;
    }


    for(int i=0;i<n;i++){
        printf("%d) %d | %d \n",i,vec[i],fact[i]);
    }





   return 0;
}
