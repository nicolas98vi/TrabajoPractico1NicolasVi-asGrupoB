
#include <stdio.h>
#include "input.h"


int calculoSuma(int primerNumero, int segundoNumero){
	int suma;

	suma=primerNumero+segundoNumero;

	return suma;
}
int calculoResta(int primerNumero, int segundoNumero){
	int resta;

	resta=primerNumero-segundoNumero;

	return resta;
}
int calculodivicion(int primerNumero, int segundoNumero){
	int divicion;

	divicion=primerNumero/segundoNumero;

	return divicion;
}
int calculoMultiplicacion(int primerNumero, int segundoNumero){
	int multiplicacion;

	multiplicacion=primerNumero*segundoNumero;

	return multiplicacion;
}
int calculoFactorial(int primerNumero){
	int factorial;
	factorial=1;
	int i;

	for (i=1; i <= primerNumero; i++){
		factorial*=i;
	}

	return factorial;
}
