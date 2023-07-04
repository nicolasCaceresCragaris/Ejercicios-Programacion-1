#include <iostream>
#include <string.h>



using namespace std;



int main(){

    int n=0;

    printf("Ingrese los n componentes \n");
    scanf("%d",&n);

    int vec[n];

    for(int i=1;i<n+1;i++){
        vec[i-1]=i*2;
    }

    for(int i=1;i<n+1;i++){
        printf("Valor:%d \n",vec[i-1]);
    }

   return 0;
}
