#include <stdio.h>
#include <stdlib.h>

double suma(double numero1, double numero2){
    double resultado=0;

    return resultado = numero1 + numero2;

}

double resta(double numero1, double numero2){
    double resultado=0;

    return resultado = numero1 - numero2;

}

double multiplicacion(double numero1, double numero2){
    double resultado=0;
    return resultado = numero1 * numero2;

}

double division(double numero1, double numero2){
    double resultado=0;
    return resultado = numero1 / numero2;

}

void error_operando( char *argv[2]){

    fprintf(stderr, "Please, you must introduce + - x or / \n");
    exit(EXIT_FAILURE);


}

void error( char *argv[0]){
    fprintf(stderr, "Usage: %s <number1> <operation_signal> <number2> \n ", argv[0]);

    exit(EXIT_FAILURE);

}

int main(int argc, char *argv[]){

    if(argc < 4)
	error(argv);

    double numero1 = atof(argv[1]), 
	   numero2 = atof(argv[3]),
	   resultado = 0;

    char operando = *argv[2];


    // If the user don't introduce + - x or /, the program exits.
    if(operando != '+' && operando != '-' && operando != 'x' && operando != '/')
	error_operando(argv);

    if(operando == '+') // When it's a sum
	resultado =	suma(numero1, numero2);

    else if(operando == '-') //When it's a subtraction, do this.
	resultado =	resta(numero1, numero2);

    else if(operando == 'x') //When it's a mutiplication.
	resultado =	multiplicacion(numero1, numero2);

    else if(operando == '/') // And when it's a division.
	resultado =	division(numero1, numero2);


    printf("\n \t %.2lf %c %.2lf = %.2lf \n\n", numero1, operando, numero2, resultado);

    return EXIT_SUCCESS;
}
