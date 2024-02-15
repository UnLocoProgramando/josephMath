#include <stdio.h>
#include <stdbool.h>
#include "josephMath.h"

void test1ElevarX(){
	int infinito = 0;
	printf("Prueba 1: La Funcion de elevar un numero a cualquier exponente\n Que ocurre si la base es 0 y el exponente tambien es 0?\n");
	printf("La base 0 y el exponente 0 = %f ", elevarX(0,0,&infinito));
	printf("\n");
	printf("El valor de la bandera es %d", infinito);
	infinito = 0;
	printf("\n");	
	printf("\n");
	printf("Prueba 2: La Funcion de elevar un numero a cualquier exponente\n Que ocurre sin la base es 0 y el exponente es mayor a 0?\n");
	printf("La base es 0 y el exponente 5 = %f ",  elevarX(0,5,&infinito));
	printf("\n");
	printf("El valor de la bandera es %d", infinito);
	infinito = 0;
	printf("\n");
	printf("\n");
	printf("Prueba 3: La Funcion de elevar un numero a cualquier exponente\n Que ocurre sin la base es 0 y el exponente es menor a 0?\n");
	printf("La base es 0 y el exponente -5 = %f ", elevarX(0,-5,&infinito));
	printf("\n");
	printf("El valor de la bandera es %d", infinito);
	infinito = 0;
	printf("\n");
	printf("\n");
	printf("Prueba 4: La Funcion de elevar un numero a cualquier exponente\n Que ocurre sin la base es mayor que 0 y el exponente es 0?\n");
	printf("La base es 12 y el exponente es 0 = %f ", elevarX(12,0,&infinito));
	printf("\n");
	printf("El valor de la bandera es %d",  infinito);
	infinito = 0;
	printf("\n");
	printf("\n");
	printf("Prueba 5: La Funcion de elevar un numero a cualquier exponente\n Que ocurre sin la base es mayor que 0 y el exponente es mayor que 0?\n");
	printf("La base es 12 y el exponente es 4  = %f ", elevarX(12,4,&infinito));
	printf("\n");
	printf("El valor de la bandera es %d",  infinito);
	infinito = 0;
	printf("\n");
	printf("\n");
	printf("Prueba 6: La Funcion de elevar un numero a cualquier exponente\n Que ocurre sin la base es mayor que 0 y el exponente es menor que 0?\n");
	printf("La base es 12 y el exponente es -4  = %f ", elevarX(12,-4,&infinito));
	printf("\n");
	printf("El valor de la bandera es %d",  infinito);
	infinito = 0;
	printf("\n");
	printf("\n");
}
void test2ValorAbosultoX(){
	printf("Prueba 1: El valor absoluto de -1 es %f", valorAbsolutoX(-1));
	printf("\n");
	printf("\n");
	printf("Prueba 2: El valor absoluto de 0 es %f", valorAbsolutoX(0));
	printf("\n");
	printf("\n");
	printf("Prueba 3: El valor absoluto de 45 es %f", valorAbsolutoX(45));
	printf("\n");
	printf("\n");
	printf("Prueba 4: El valor absoluto de -237 es %f", valorAbsolutoX(-237));
	printf("\n");
	printf("\n");
}
int main(int argc, char **argv){
//	test1ElevarX();
	test2ValorAbosultoX();
	return 0;
}
