#include <iostream>
#include <string.h>



using namespace std;

float calcularPorcentajeDiferencia(int A ,int B){

    return (B-A)*100/(A+B);

}


int main(){

    int a;
    int b;
    float porcentaje=0;

    scanf("%d",&a);
    scanf("%d",&b);

    porcentaje=calcularPorcentajeDiferencia(a,b);

    printf("%f \n",porcentaje);

   return 0;
}
