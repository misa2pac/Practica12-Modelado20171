/**
 * Incluimos la biblioteca estandar que contiene 
 * las definiciones de las macros, las constantes, etc.
 */
#include <stdio.h>

/**
 * Declaramos la funcion main, todo programa en C tiene
 * una y solo una funcion main, esta funcion es el punto
 * de entrada al programa y tambien el punto de salida.
 * 
 * La funcion main etsa diseñada para devolver un entero 
 * (int) si se ejecuta completo y bien el programa.
 */
int main(){
	/**
	 * Para que muestre "¡Hola, mundo!", usamos la funcion
	 * printf que permite escribir bytes (caracteres) en 
	 * stdout utilizando el formato especificado.
	 * 
	 * La función printf retorna el número de caracteres impresos, 
	 * o un valor negativo si ocurre un error
	 */
	printf("¡Hola, mundo!");
	return 0;
}
