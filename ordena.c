/**
 * Incluimos la biblioteca estandar que contiene 
 * las definiciones de las macros, las constantes, etc.
 */
#include <stdio.h>

/**
 * Funcion bubble_sort la cual ordenara un arreglo de
 * punteros, recibe como parametros la longitud del
 * arreglo y el arreglo de punteros.
 * 
 * Como funciona?:
 * 
 * 1.- Comparamos el primer elemento con el segundo, etc.
 * Cunado el resultado de una comparacion sea "mayor que",
 * se intercambian los valores de los elementos comparados.
 * Con esto conseguiremos llevar el valor mator a la posicion n.
 * 
 * 2.- Repetimos el punto 1, ahora para los n-1 primeros elementos
 * de la lista. Con esto conseguimos llevar el valor mayor de estos 
 * a la posicion n-1.
 * 
 * 3.- Repetimos el punto 1, ahora para los n-2 y asi sucecivamente.
 * 
 * 4.- La ordenacion estara finalizada cuando al repetir el iesimo 
 * proceso de comparacion no haya habido ningun intercabio. 
 */
void bubble_sort(int *m[], int n){
	int *aux;
	int i, s = 1;
	while( s && (--n > 0 )){
		s = 0;
		for(i = 1; i <= n; i++)
		if(m[i-1] > m[i]){
			aux = m[i-1];
			m[i-1] = m[i];
			m[i] = aux;
			s = 1;
			}
		}
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
	
	/** Creamos dos variables y les damos su valor la primera
	 * tiene el valor del indice inicial que es 0, la segunda
	 * la longitud del arreglo de punteros.
	 */
	int i = 0, longitud = 10;
	// Creamos el arreglo de punteros con sus valores.
	int* s[] = {9,4,8,7,10,2,3,5,6,1};
	// Imprimimos el arreglo tal como esta.
	printf("Sin ordenar: [");
	for(i = 0; i < longitud;i++)
		printf("%d, ",s[i]);
	printf("]\n");
	// Llamamos a la funcion bubble sort para que ordene la
	// matriz de punteros.
	bubble_sort(s,longitud);
	// Imprimimos el arreglo ya ordenado.
	printf("Ordenada: [");
	for(i = 0; i < longitud;i++)
		printf("%d, ",s[i]);
	printf("]\n");
	
	return 0;
	}
