
/*1 Enunciado
Hacer una calculadora. Para ello el programa iniciar� y contar� con un men� de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) �El resultado de A+B es: r�
b) �El resultado de A-B es: r�
c) �El resultado de A/B es: r� o �No es posible dividir por cero�
d) �El resultado de A*B es: r�
e) �El factorial de A es: r1 y El factorial de B es: r2�
5. Salir
� Todas las funciones matem�ticas del men� se deber�n realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
� En el men� deber�n aparecer los valores actuales cargados en los operandos A y B
(donde dice �x� e �y� en el ejemplo, se debe mostrar el n�mero cargado)
� Deber�n contemplarse los casos de error (divisi�n por cero, etc)
� Documentar todas las funciones
2 C�mo realizar y entregar el trabajo pr�ctico
El trabajo pr�ctico deber� ser entregado en el repositorio de GIT correspondiente al TP1 de la
materia.
El mismo consistir� en el proyecto de CodeBlocks con el programa funcionando y comentado,
respetando las reglas de estilo de la c�tedra. La compilaci�n no deber� arrojar mensajes de
error ni de warnings.
El proyecto deber� contar con la biblioteca descripta en la secci�n n�mero dos, y se deber�
hacer uso de dichas funciones para resolver la l�gica del programa.
*/

#include <stdio.h>
#include <stdlib.h>
#include "input.h"

int main(){
	int primerNumero;
	int segundoNumero;

	int respuestaSuma;
	int respuestaResta;
	int respuestaDivicion;
	int respuestaMultiplicacion;
	int respuestaFactorial;

	printf("Ingrese el primer numero ");
	scanf("%d",&primerNumero);

	printf("Ingrese el segundo numero");
	scanf("%d",&segundoNumero);

	respuestaSuma=calculoSuma( primerNumero, segundoNumero);
	respuestaResta=calculoResta( primerNumero, segundoNumero);
	respuestaDivicion=calculodivicion( primerNumero, segundoNumero);
	respuestaMultiplicacion=calculoMultiplicacion( primerNumero, segundoNumero);
	respuestaFactorial=calculoFactorial( primerNumero);

	printf("\n La suma de los dos numeros es de %d",respuestaSuma);
	printf("\n La resta de los dos numeros es de %d",respuestaResta);
	if(primerNumero==0){
		printf("\n No es posible dividir por cero ");
	}else{
		printf("\n La divicion de los dos numeros es de %d",respuestaDivicion);
	}
	printf("\n La multiplicacion de los dos numeros es de %d",respuestaMultiplicacion);

	printf("\n El factorial de %d es  %d ",primerNumero, respuestaFactorial);

	return 0;
}
