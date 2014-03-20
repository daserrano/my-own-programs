#include <stdio.h>
#include <stdlib.h>

char *menu(){

char *coche;
	system("clear");
	printf("-------------------------- \n");
	printf("---   Driving My Car   --- \n");
	printf("-------------------------- \n");
	
	printf("\t\t What's your favourite car? \n");
	scanf("\t\t %c \n", &coche);
	
	printf("Well! You have chosen %s! Nice car!", coche);
}


int main(int argc, char *argv[]){

    enum opciones{acelerar=1, frenar, freno_mano, salir}; // Los valores que puede tomar la variable opciones de tipo enum.

    enum opciones accion; // Una variable llamada accion con las opciones de la variable enum.

    int a=0;
    char abandonar;

    do{
	menu();
	scanf(" %i", &a);
	accion = (enum opciones) a; 

	switch(accion){ // En caso de que se seleccione una u otra hara cosas diferentes.
	    case 1: 
		printf("ACELERO\n");
		break;

	    case 2:
		printf("FRENO\n");
		break;

	    case 3:
		printf("FRENO DE MANOOOO!\n");
		break;

	    case 4:
		printf("¿Deseas abandonar? s/n");
		scanf(" %c", &abandonar);

		if(abandonar == 's')
		    return EXIT_SUCCESS;

		else
		    break;
	}

    }while(a);



}
