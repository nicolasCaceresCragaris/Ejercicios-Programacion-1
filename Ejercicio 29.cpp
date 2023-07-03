#include <iostream>


using namespace std;

int main()
{
    int valor=0;
    int aux=0;
    int auxDos=0;
    int auxTres=0;
    int resto=0;
    int restoDos=0;
    int restoTres=0;
    int restoCuatro=0;
    int counter=0;
    char numeroRomano[10];

    printf("Ingrese un valor a calcular en numero romano 1 a 3999 \n");
    scanf("%d",&valor);

    if(valor>=1000 && valor<4000){

        aux=valor/1000;
        resto=valor%1000;

            if(aux==1){

                numeroRomano[counter]='M';
                counter++;
            }
            if(aux==2){

                for(int i=0;i<2;i++){
                    numeroRomano[counter]='M';
                    counter++;
                }

            }
            if(aux==3){

                for(int i=0;i<3;i++){
                    numeroRomano[counter]='M';
                    counter++;
                }

            }
            valor=resto;
    }

    if(valor>=100 && valor<1000){

            aux=valor/100;
            resto=valor%100;

                switch(aux){

                case 1:

                    numeroRomano[counter]='C';
                    counter++;

                    break;

                case 2:

                    numeroRomano[counter]='C';
                    counter++;
                    numeroRomano[counter]='C';
                    counter++;

                    break;

                case 3:

                    numeroRomano[counter]='C';
                    counter++;
                    numeroRomano[counter]='C';
                    counter++;
                    numeroRomano[counter]='C';
                    counter++;

                    break;

                case 4:

                    numeroRomano[counter]='C';
                    counter++;
                    numeroRomano[counter]='D';
                    counter++;

                    break;
                case 5:

                    numeroRomano[counter]='D';
                    counter++;

                    break;

                case 6:

                    numeroRomano[counter]='D';
                    counter++;
                    numeroRomano[counter]='C';
                    counter++;

                    break;

                case 7:

                    numeroRomano[counter]='D';
                    counter++;

                    numeroRomano[counter]='C';
                    counter++;

                    numeroRomano[counter]='C';
                    counter++;

                    break;

                case 8:

                    numeroRomano[counter]='D';
                    counter++;

                    numeroRomano[counter]='C';
                    counter++;

                    numeroRomano[counter]='C';
                    counter++;

                    numeroRomano[counter]='C';
                    counter++;



                    break;

                case 9:

                    numeroRomano[counter]='C';
                    counter++;

                    numeroRomano[counter]='M';
                    counter++;



                    break;
                }

                valor=resto;
    }


    if(valor>=10 && valor<100){

            aux=valor/10;
            resto=valor%10;

            switch(aux){

                case 1:

                    numeroRomano[counter]='X';
                    counter++;

                    break;

                case 2:

                    numeroRomano[counter]='X';
                    counter++;
                    numeroRomano[counter]='X';
                    counter++;

                    break;

                case 3:

                    numeroRomano[counter]='X';
                    counter++;
                    numeroRomano[counter]='X';
                    counter++;
                    numeroRomano[counter]='X';
                    counter++;

                    break;

                case 4:

                    numeroRomano[counter]='X';
                    counter++;
                    numeroRomano[counter]='L';
                    counter++;

                    break;
                case 5:

                    numeroRomano[counter]='L';
                    counter++;

                    break;

                case 6:

                    numeroRomano[counter]='L';
                    counter++;
                    numeroRomano[counter]='X';
                    counter++;

                    break;

                case 7:

                    numeroRomano[counter]='L';
                    counter++;

                    numeroRomano[counter]='X';
                    counter++;

                    numeroRomano[counter]='X';
                    counter++;

                    break;

                case 8:

                    numeroRomano[counter]='L';
                    counter++;

                    numeroRomano[counter]='X';
                    counter++;

                    numeroRomano[counter]='X';
                    counter++;

                    numeroRomano[counter]='X';
                    counter++;



                    break;

                case 9:

                    numeroRomano[counter]='X';
                    counter++;

                    numeroRomano[counter]='C';
                    counter++;



                    break;
                }
                valor=resto;
            }

    if(resto>0 && resto<10){


                switch(resto){

                case 1:

                    numeroRomano[counter]='I';
                    counter++;

                    break;

                case 2:

                    numeroRomano[counter]='I';
                    counter++;
                    numeroRomano[counter]='I';
                    counter++;

                    break;

                case 3:

                    numeroRomano[counter]='I';
                    counter++;
                    numeroRomano[counter]='I';
                    counter++;
                    numeroRomano[counter]='I';
                    counter++;

                    break;

                case 4:

                    numeroRomano[counter]='I';
                    counter++;
                    numeroRomano[counter]='V';
                    counter++;

                    break;
                case 5:

                    numeroRomano[counter]='V';
                    counter++;

                    break;

                case 6:

                    numeroRomano[counter]='V';
                    counter++;
                    numeroRomano[counter]='I';
                    counter++;

                    break;

                case 7:

                    numeroRomano[counter]='V';
                    counter++;

                    numeroRomano[counter]='I';
                    counter++;

                    numeroRomano[counter]='I';
                    counter++;

                    break;

                case 8:

                    numeroRomano[counter]='V';
                    counter++;

                    numeroRomano[counter]='I';
                    counter++;

                    numeroRomano[counter]='I';
                    counter++;

                    numeroRomano[counter]='I';
                    counter++;



                    break;

                case 9:

                    numeroRomano[counter]='I';
                    counter++;

                    numeroRomano[counter]='X';
                    counter++;



                    break;
                }




            }


    for(int i=0; i<counter;i++){
        printf("%c",numeroRomano[i]);
    }


        return 0;
}
