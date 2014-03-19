#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

enum opciones{acelerar=1, frenar, freno_mano };

enum opciones a;

switch(a){
    case 1: 
	printf("ACELERO");
   
	break;

    case 2:
	printf("FRENO");
	break;
	
    case 3:
	printf("FRENO DE MANOOOO!");
	break;
}




    return EXIT_SUCCESS;
}
