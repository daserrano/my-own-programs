#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415


int main(){

  int opcion, opcion_triangulo, opcion_cuadrado, opcion_circulo,
      base_triangulo, altura_triangulo, area_triangulo, perimetro_triangulo,
      lado1_triangulo, lado2_triangulo, lado3_triangulo,
      lado_cuadrado, area_cuadrado, perimetro_cuadrado;
  double  radio_circulo, area_circulo;

  //Hacer un menu que pida una figura de tres posibles y que quiera calcular el area el perímetro o apotema.
  system("clear");
  do{
    system("figlet bienvenido guaperas");

    printf("\n\n\t ¿Que quieres hacer?: \n\n"
	"\t\t 1.- Triangulo. \n"
	"\t\t 2.- Cuadrado. \n"
	"\t\t 3.- circulo. \n"
	"\t\t 4.- salir. \n"
	);

    printf("\n\n elige una opcion: ");
    scanf(" %i", &opcion);
  }while(opcion<1 || opcion>4);

  if(opcion<4)
    system("clear");
  switch(opcion){

    case 1: system("figlet TRIANGULO \n\n" );

	    printf("\n\t¿que quieres averiguar?\n\n"
		"\t\t 1.- Area. \n"
		"\t\t 2.- Perimetro. \n"
		"\t\t 3.- atras."
		);

	    printf("\n\n Elige una opcion: ");
	    scanf(" %i", &opcion_triangulo);

	    switch(opcion_triangulo){
	      case 1: system("figlet AREA");
		      printf("\n\nbase del triangulo: ");
		      scanf("\t\t %i", &base_triangulo);
		      printf("altura del triangulo: ");
		      scanf("\t\t %i", &altura_triangulo);

		      area_triangulo = ((base_triangulo * altura_triangulo) / 2);
		      printf("\n\nEl area es: %i", area_triangulo);
		      
		      break;

	      case 2: system("figlet PERIMETRO");
		      printf("\nPrimer lado: ");
		      scanf(" %i", &lado1_triangulo);
		      printf("\nSegundo lado: ");
		      scanf(" %i", &lado2_triangulo);
		      printf("\nTercer lado:" );           
		      scanf(" %i", &lado3_triangulo);

		      perimetro_triangulo = (lado1_triangulo + lado2_triangulo + lado3_triangulo) / 3;
		      printf("\n\nEl perimetro es: %i", perimetro_triangulo);
		      break;
	    
	      case 3: system("./menu");
		      break;
	    }

	    break;
    case 2: system("figlet CUADRADO");
	    
	    printf("\n\t¿que quieres averiguar?\n\n"
		"\t\t 1.- Area. \n"
		"\t\t 2.- Perimetro. \n"
		"\t\t 3.- Atras. \n");
                 
	    printf("\nElige una opcion: ");
	    scanf(" %i", &opcion_cuadrado);

	    switch(opcion_cuadrado){
            
	    case 1: system("figlet AREA");
		    printf("\n\n Lado del cuadrado: ");
		    scanf("\t\t %i", &lado_cuadrado);

		    area_cuadrado = (lado_cuadrado * lado_cuadrado);
		    printf("\n\n El area es: %i", area_cuadrado);
	            break;
	    
	    case 2: system("figlet PERIMETRO");
		    printf("\n\n Lado del cuadrado: ");
		    scanf("\t\t %i", &lado_cuadrado);

		    perimetro_cuadrado = (lado_cuadrado * 4);
		    printf("\n\n El perimetro es: %i", perimetro_cuadrado);
		    break;
	    
	    case 3: system("./menu");
		    break;
	    }

            break;
    case 3: system("figlet CIRCULO");
	    printf("\n\t ¿Que quieres averiguar?\n\n"
		"\t\t 1.- Area \n"
		"\t\t 2.- Atras \n");

	    printf("\nElige una opcion: ");
	    scanf(" %i", &opcion_circulo);

	    switch(opcion_circulo){
	    
	    case 1: system("figlet AREA");
	    	    printf("\n\n Radio del circulo: ");
		    scanf(" %lf", &radio_circulo);
		    
		    area_circulo = PI * (radio_circulo * radio_circulo);
		    printf("\n\nEl area es: %.2f", area_circulo);
		    break;
  	    
	    case 2: system("./menu");
	    }
	    break;
    case 4: system("figlet ADIOS !");
	    return EXIT_SUCCESS;
	    break;
  }

  printf("\n\n\n");
  return EXIT_SUCCESS;
}

