#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#define N 10

char menu(char coche[N]){ 

    system("clear");
    printf("+------------------------+ \n");
    printf("|     Driving My Car     | \n");
    printf("+------------------------+ \n");

    printf(" \n What's your favourite car? \n");
    gets (coche);  // Coge la informacion introducida por el usuario.
    __fpurge(stdin);

    return printf("Well! You have chosen %s !!! Nice car!\n", coche);

}


int main(int argc, char *argv[]){

    enum opciones{acelerar=1, frenar, freno_mano, salir}; // Los valores que puede tomar la variable opciones de tipo enum.

    enum opciones accion; // Una variable llamada accion con las opciones de la variable enum.

    int a=0;
    static int velocidad = 0; // Se almacenan los cambios hechos en la llamada a la variable.
    char abandonar;
    char coche[30];

    menu(coche);


    printf("What do you want?\n");
    printf("\t\t 1. Accelerate\n");
    printf("\t\t 2. Break\n");
    printf("\t\t 3. Stop\n");
    printf("\t\t 4. Exit\n");

    do{
	scanf(" %i", &a);
	__fpurge(stdin);
	if(a > 4)
	    printf("Possible options: 1-4\n\n");

	accion = (enum opciones) a; 

	switch(accion){ // En caso de que se seleccione una u otra hara cosas diferentes.
	    case 1: 
		velocidad += N;

		if(velocidad <= 120)
		    printf(" \t\t Velocity of %s : %i km/h\n", coche, velocidad);
		else if(velocidad > 200){
		    printf(" \t\t Your %s is burning! I have to go. Bye.\n\n", coche);
		    return EXIT_SUCCESS;
		}
		else
		    printf("\t\t YOU ARE SO FAST! %i km/h!!\n", velocidad);

		break;

	    case 2:
		if( velocidad > 0){
		    velocidad -= N;
		    printf(" \t\t Velocity of %s : %i km/h\n", coche, velocidad);
		}
		else 
		    printf(" \t\t You are stopped!\n");
		break;

	    case 3:
		velocidad = 0;
		printf(" \t\t You have stopped your %s : %i km/h\n", coche, velocidad);

		break;

	    case 4:

		printf("Do you want to exit? y/n\n");
		do{
		    scanf(" %c", &abandonar);
		    __fpurge(stdin);

		    if(abandonar == 'y' || abandonar == 'Y')
			return EXIT_SUCCESS;
		    else if(abandonar == 'n' || abandonar == 'N')
			break;
		    else
			printf("You must introduce y or n\n");
		}while(abandonar != 'y' || abandonar != 'Y' || abandonar != 'n' || abandonar != 'N');    
	}

    }while(a);

}
