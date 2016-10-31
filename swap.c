/**
 * Incluimos la biblioteca estandar que contiene 
 * las definiciones de las macros, las constantes, etc.
 */
#include <stdio.h>

/**
 * Funcion swap que intercambia los valores de dos numeros
 * ejemplo si a = 3 y b = 2, se cambiaran los valores: a = 2 
 * y b = 3, recibe dos apuntadores del tipo int.
 */
void swap(int *a, int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
	}
	
/**
 * Declaramos la funcion main, todo programa en C tiene
 * una y solo una funcion main, esta funcion es el punto
 * de entrada al programa y tambien el punto de salida.
 * 
 * La funcion main etsa diseñada para devolver un entero 
 * (int) si se ejecuta completo y bien el programa.
 */
int main(){
	// Creamos dos variables int y les asignamos un valor.
	int a = 3;
	int b = 2;
	// Con & sacamos las direcciones de memoria de las variables
	// y se asignan a dos apuntadores.
	int *apA = &a;
	int *apB = &b;
	
	// Imprimimos los valores de las variables.
	printf("%d - %d\n",a , b);
	// Intercambiamos los valores usando la fucnion swap.
	swap(apA,apB);
	// Imprimimos los valores de las variables intercambiados.
	printf("%d - %d\n",a , b);
	
	return 0;
	}
