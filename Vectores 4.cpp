#include <iostream>
#include <string.h>



using namespace std;



int main(){

    int n=0;
    int valor=0;
    int acumulador=0;

    printf("Ingrese los n componentes \n");
    scanf("%d",&n);

    int vec[n];
    int fact[n];

    for(int i=0;i<n;i++){
        printf("Ingrese un valor \n");
        scanf("%d",&valor);
        acumulador+=valor;
        vec[i]=valor;
    }

    if(acumulador>0){
        for(int i=0;i<n;i++){
            if(vec[i]%2==0){
                printf("%d \n",vec[i]);
            }
        }

    }
    if(acumulador<=0){

        for(int i=0;i<n;i++){
            if(vec[i]%2!=0){
                printf("%d \n",vec[i]);
            }

        }

    }

   return 0;
}
