#include <iostream>
#include <sstream>
#include <limits>
#include <vector>
#include <fstream>


using namespace std;

int main()
{
    char caracter;

    //SE PUEDE USAR UN VECTOR DE 5 POSICIONES
    int contadorVocalA=0;
    int contadorVocalE=0;
    int contadorVocalI=0;
    int contadorVocalO=0;
    int contadorVocalU=0;
    int contadorPalabras=0;
    int contadorLetras=0;
    int palabraMasLarga=0;




    printf("Ingrese el caracter \n");
    cin.get(caracter);
    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');

    while(caracter!='.'){

        if(caracter!=' '){
        contadorLetras++;
        }
        if(caracter=='A'){
            contadorVocalA++;
        }
        if(caracter=='E'){
            contadorVocalE++;
        }
        if(caracter=='I'){
            contadorVocalI++;
        }
        if(caracter=='O'){
            contadorVocalO++;
        }
        if(caracter=='U'){
            contadorVocalU++;
        }
        if(caracter==' '){
            printf("hola \n");
            if(contadorPalabras==0){
                palabraMasLarga=contadorLetras;
            }
            if(contadorPalabras>0 && palabraMasLarga<contadorLetras){
                palabraMasLarga=contadorLetras;
            }
            contadorLetras=0;
            contadorPalabras++;
        }

        //revisar aca
        if(contadorPalabras==0){
            palabraMasLarga=contadorLetras;
        }
        if(contadorPalabras>0 && palabraMasLarga<contadorLetras){
            palabraMasLarga=contadorLetras;
        }



        printf("Ingrese el caracter \n");
        cin.get(caracter);
        cin.ignore(numeric_limits<std::streamsize>::max(), '\n');

    }

    contadorPalabras++;

    printf("Cantidad de letras A:%d \n",contadorVocalA);
    printf("Cantidad de letras E:%d \n",contadorVocalE);
    printf("Cantidad de letras I:%d \n",contadorVocalI);
    printf("Cantidad de letras O:%d \n",contadorVocalO);
    printf("Cantidad de letras U:%d \n",contadorVocalU);
    printf("Palabras totales de la oracion:%d \n",contadorPalabras);
    printf("Mayor cantidad de letras de la palabra mas larga:%d \n",palabraMasLarga);



    return 0;
}
