
/*1 Enunciado
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones
2 Cómo realizar y entregar el trabajo práctico
El trabajo práctico deberá ser entregado en el repositorio de GIT correspondiente al TP1 de la
materia.
El mismo consistirá en el proyecto de CodeBlocks con el programa funcionando y comentado,
respetando las reglas de estilo de la cátedra. La compilación no deberá arrojar mensajes de
error ni de warnings.
El proyecto deberá contar con la biblioteca descripta en la sección número dos, y se deberá
hacer uso de dichas funciones para resolver la lógica del programa.
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
