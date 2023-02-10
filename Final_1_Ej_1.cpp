#include <iostream>
#include <string.h>

using namespace std;

struct Puesto{

    int id;
    char nombrePuesto[51];
    float valor;
};

struct Empleado{
    int dni;
    char nombre[41];
    int edad;
};

struct Obra{
    int id;
    char nombre[41];
    int dni;
    int idPuesto;
    float horasTrabajadas;
};

struct Sueldo{
    int dni;
    char nombre[41];
    char nombrePuesto[41];
    float horasTrabajadas;
    float sueldoBruto;
};

const char* buscarNombre(Empleado empleados[], int n, int valor){
	int inicio=0;
	int fin=n-1;
	while(fin>=inicio){
		int mitad=inicio+(fin-inicio)/2;
        if(empleados[mitad].dni==valor){
            return empleados[mitad].nombre;
        }
        if(empleados[mitad].dni>valor){
            fin= mitad-1;
        }else{
            inicio=mitad+1;
        }
    }
return "Null";
}

const char* buscarPuesto(Puesto puestos[], int n, int valor,float &valorHora){
	int inicio=0;
	int fin=n-1;
	while(fin>=inicio){

		int mitad=inicio+(fin-inicio)/2;

        if(puestos[mitad].id==valor){
            valorHora=puestos[mitad].valor;

            return puestos[mitad].nombrePuesto;
        }
        if(puestos[mitad].id>valor){
            fin= mitad-1;
        }else{
            inicio=mitad+1;
            }
        }
    return "Null";
}



void procesarListas(Obra lista[],int n, int &acumulador, Sueldo sueldos[],Empleado empleados[], Puesto puestos[]){
    int i=0;
    float valorHora=0;

    while(i<n){

        sueldos[i+acumulador].dni=lista[i].dni;
        strcpy(sueldos[i+acumulador].nombre,buscarNombre(empleados,15,lista[i].dni));
        strcpy(sueldos[i+acumulador].nombrePuesto,buscarPuesto(puestos,5,lista[i].idPuesto,valorHora));
        sueldos[i+acumulador].horasTrabajadas=lista[i].horasTrabajadas;
        sueldos[i+acumulador].sueldoBruto=(lista[i].horasTrabajadas*valorHora);
        valorHora=0;



        i++;
    }
    acumulador=acumulador+i;

    return;
}

void ordenarPorPuesto(Sueldo arr[], int n){
	Sueldo aux;
	for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if((strcmp(arr[j].nombrePuesto,arr[j+1].nombrePuesto))>0){
                aux=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=aux;


		}


	}

 }
}


void emitirListado(Sueldo sueldos[],int n){

    ordenarPorPuesto(sueldos,n);

	int i=0;
	Sueldo empleadoMax;
	empleadoMax.horasTrabajadas=0;

	char key[41];
	//Inicializamos contadores, acumuladores
	while(i<n){
	 //Guardo el valor de la clave o agrupador
        strcpy(key,sueldos[i].nombrePuesto);
        printf("Nombre del puesto: %s \n",key);
        while(i<n && (strcmp(key,sueldos[i].nombrePuesto)==0)){
            printf("DNI:%d \t Nombre:%s \t Sueldo bruto:%f \n",sueldos[i].dni,sueldos[i].nombre,sueldos[i].sueldoBruto);
            if(sueldos[i].horasTrabajadas>empleadoMax.horasTrabajadas){
                empleadoMax=sueldos[i];
            }
            i++;
        }
        printf("El empleado con mayor horas en el puesto es: \n");
        printf("DNI:%d \t Nombre:%s \t Horas:%f \n",empleadoMax.dni,empleadoMax.nombre,empleadoMax.horasTrabajadas);

        empleadoMax.horasTrabajadas=0;
	}
	return;
}






int main(){

    Puesto listaPuestos[]={
        {10,"Albanil",375.00},
        {20,"Electricista",500.00},
        {30,"Ingeniero Civil",1875.00},
        {40,"Arquitecto",1562.00},
        {50,"Pintor",450.00},
    };

    Empleado listaEmpleados[]={
        {35671823,"Ricardo Gutierrez",30}, /* 3*/
        {35888182,"German Pai", 40 },       /* 1-*/
        {35999999,"Analia Ferreira ", 40},/*1- */
        {36234123,"Sebastian Driussi ",41 },/*2 */
        {36333921,"Camila Eskio", 26},/* 1-*/
        {36934345,"German Indigo", 26},/*2 */
        {37123421,"Pablo Lopez", 23},/* 1*/
        {37123453,"Enzo Fernandez", 20},/*3 */
        {38124551,"Carlos Altamira", 33},/* 1*/
        {38423132,"Matias Fernandez ",36 },/* 3*/
        {39123234,"Juan Benitez ", 37},/*2 */
        {39200000,"Pedro Sanchez ",33 },/* 1*/
        {39933134,"Santiago Maradona", 33},/*3 */
        {40895761,"Candela Benitez ", 37},/*1 */
        {41431345,"India Carrera", 33},/* 2*/
    };

    Obra listaObraUno[]={
        {1,"ObraUno",35888182,20,48},
        {1,"ObraUno",35999999,10,50},
        {1,"ObraUno",36333921,20,50},
        {1,"ObraUno",37123421,40,55},
        {1,"ObraUno",38124551,30,44},
        {1,"ObraUno",39200000,40,48},
        {1,"ObraUno",40895761,10,48}
    };

    Obra listaObraDos[]={
        {2,"ObraDos",36234123,30,48},
        {2,"ObraDos",36934345,10,48},
        {2,"ObraDos",39123234,10,50},
        {2,"ObraDos",41431345,30,54}
    };

    Obra listaObraTres[]={
        {3,"ObraTres",35671823,20,48},
        {3,"ObraTres",37123453,20,48},
        {3,"ObraTres",38423132,50,50},
        {3,"ObraTres",39933134,10,50}
    };

    Sueldo sueldosEmpleados[15];

    int limite=0;
    int acumulador=0;


    printf("BIENVENIDO AL SISTEMA DE GESTION DE SUELDOS \n");

    /*SE CREA EL LISTADO GENERAL DE SUELDOS*/

    limite=(sizeof(listaObraUno)/sizeof(listaObraUno[0]));
    procesarListas(listaObraUno,limite,acumulador ,sueldosEmpleados,listaEmpleados,listaPuestos);
    limite=(sizeof(listaObraDos)/sizeof(listaObraDos[0]));
    procesarListas(listaObraDos,limite,acumulador, sueldosEmpleados,listaEmpleados,listaPuestos);
    limite=(sizeof(listaObraTres)/sizeof(listaObraTres[0]));
    procesarListas(listaObraTres,limite,acumulador, sueldosEmpleados,listaEmpleados,listaPuestos);

    /*==============================================*/

    limite=(sizeof(sueldosEmpleados)/sizeof(sueldosEmpleados[0]));
    emitirListado(sueldosEmpleados,limite);


    return 0;
}
