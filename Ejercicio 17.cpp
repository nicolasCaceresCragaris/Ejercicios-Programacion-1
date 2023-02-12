#include <iostream>

using namespace std;

int main(){

    float sueldo=0;
    int sueldosCategorias[]={0,0,0,0};

    printf("Ingrese el sueldo \n");
    scanf("%f",&sueldo);

    while(sueldo!=0){

        if(sueldo<1520){
            sueldosCategorias[0]++;
        }
        if(sueldo>=1520 && sueldo<2780){
            sueldosCategorias[1]++;
        }

        if(sueldo>=2780 && sueldo<5999){
            sueldosCategorias[2]++;
        }
        if(sueldo>=5999){
            sueldosCategorias[3]++;
        }
        printf("Ingrese el sueldo \n");
        scanf("%f",&sueldo);
    }

    printf("Empleados que ganan menos de 1520$: %d \n",sueldosCategorias[0]);
    printf("Empleados que ganan mas de 1519$ pero menos de 2780$: %d \n",sueldosCategorias[1]);
    printf("Empleados que ganan mas de 2779$ pero menos de 5999$: %d \n",sueldosCategorias[2]);
    printf("Empleados que ganan mas de 5999$: %d \n",sueldosCategorias[3]);


    return 0;
}
