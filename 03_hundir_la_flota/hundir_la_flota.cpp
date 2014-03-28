#include <stdio.h>
#include <stdlib.h>

#define MAX 9

///aqui se pinta la matriz ya rellenada.
void pintar_matriz(char matriz[MAX][MAX]){
    system("clear");
    for(int fila=0; fila<MAX; fila++){
	for(int columna=0; columna < MAX; columna++)
	    printf(" %1c |", matriz[fila][columna]);
	printf("\n");
    }
}

// aqui se eligen los barcos 
void hacer_barcos(char matriz[MAX][MAX]){

    int fila, barco, columna;
    char columna_letra;
    bool hay_barco = false;

    barco = 0;
    //pida los barcos
    do{ 
	barco ++;
	do{ hay_barco = false;
	    pintar_matriz(matriz);
	    //Dependiendo del tamaño, vamos a un lado u otro.
	    switch(barco){
		case 1: 
		    printf("Insert column & file. 2 caracters: \n");
		    scanf(" %c%i", &columna_letra, &fila);
		    
		    /*if( fila == 0 || columna == 0)
			hacer_barcos(matriz);
*/
		    columna = columna_letra - 64;

		    for(int veces=0; veces<2; veces++)
			if(matriz[fila][columna+veces] == '*')
			    hay_barco = true;
		    if(hay_barco == false)
			for(int veces=0; veces<2; veces++)
			    matriz[fila][columna+veces] = '*';

		    break;

		case 2: 
		    printf("Insert column & file. 3 caracters: \n");
		    scanf(" %c%i", &columna_letra, &fila);
		    columna = columna_letra - 64;
		    for(int veces=0; veces<3; veces++)
			if(matriz[fila][columna+veces] == '*')
			    hay_barco = true;
		    if(hay_barco == false)
			for(int veces=0; veces<3; veces++)
			    matriz[fila][columna+veces] = '*';



		    break;

		case 3:
		    printf("Insert column & file. 5 caracters: \n ");
		    scanf(" %c%i", &columna_letra, &fila);
		    columna = columna_letra - 64;



		    for(int veces=0; veces<5; veces++)
			matriz[fila][columna+veces] = '*';


		    break;
	    }
	}while(hay_barco == true);
	pintar_matriz(matriz);
    }while(barco < 3);

}


//Se hace la matriz, con todo vacio.
void hacer_matriz(char matriz[MAX][MAX]){

    for(int fila=0; fila<MAX; fila++)
	for(int columna=0; columna < MAX; columna++){
	    matriz[0][0] = ' ';
	    matriz[0][columna] = 'A' + columna-1;
	    matriz[fila][0] = '0' + fila;
	    matriz[fila][columna] = ' ';
	}
}

void menu(){

    int opcion=0;

    system("figlet .........................");
    system("figlet HUNDIR LA FLOTA");
    system("figlet .........................");

}


int main(int argc, char *argv[]){

    char matriz[MAX][MAX];
    system("clear");

    menu();

    hacer_matriz(matriz);

    hacer_barcos(matriz);

    pintar_matriz(matriz); 



    return EXIT_SUCCESS;
}
