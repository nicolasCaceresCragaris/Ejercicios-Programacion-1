#include <iostream>
#include <string.h>



using namespace std;



int main(){

    int n=0;
    int valor=0;

    printf("Ingrese los n componentes \n");
    scanf("%d",&n);

    int vec[n];

    for(int i=0;i<n;i++){
        printf("Ingrese un valor \n");
        scanf("%d",&valor);
        vec[i]=valor;
    }


    if(vec[n-1]<10){
        for(int i=0;i<n;i++){
            if(vec[i]<0){
                printf("Valor:%d \n",vec[i]);
            }
        }
    }
    if(vec[n-1]>10){
        for(int i=0;i<n;i++){
            if(vec[i]>0){
                printf("Valor:%d \n",vec[i]);
            }
        }
    }

   return 0;
}
