#include <iostream>

using namespace std;

int main(){

    int m=0;
    int i=0;
    int cont=0;

    printf("Ingrese valor m \n");
    scanf("%d",&m);

    while(i<m){

        cont=cont+3;

        if(cont%5!=0){

            printf("El valor: %d es multiplo de 3 y no es multiplo de 5 \n",cont);

            i++;
        }

    }


    return 0;
}
