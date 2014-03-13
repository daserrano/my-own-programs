#include <stdio.h>
#include <stdlib.h>


void error( char *argv[0]){
    fprintf(stderr, "Usage: %s <number1> <operation_signal> <number2> \n ", argv[0]);

    exit(EXIT_FAILURE);

}


int main(int argc, char *argv[]){


    if(argc < 4)
	error(argv);


    enum Operando{ '+' = 1, '-', '*',  '/'};


    int numero1 = atof(argv[1]), 
	numero2 = atof(argv[3]);

    char Operando = *argv[2];

    printf("%s \n", Operando);


    return EXIT_SUCCESS;
}
