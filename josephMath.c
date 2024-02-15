#include "josephMath.h"
#include<stdbool.h>

float elevarX(float x, float  exponente, int *infinito) {
	float resultado = x;

	//Casos especiales
	if(x == 0 && exponente == 0) return 1;
	if(x == 0 && exponente < 0){
		*infinito = 1;
		return -999.123456;
	}
	if(x > 0 && exponente == 0) return 1;
	//n ^ -x = 1/n^x
	//Termina casos especiales

	for(int i = 1; i < exponente; i++){
		resultado = resultado * x;
	}
	return resultado;
}
float valorAbsolutoX(float x){
	if(x < 0){
		int opuesto = -1 * x;
		x = (opuesto * 2) + x;
		return x;
	} else {
		return x;
	}
}
