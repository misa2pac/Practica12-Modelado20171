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
	 * Delcaramos un apuntador del tipo entero, que es un
	 * operador de indireccion, el operador *(indireccion)
	 * accede a un valor indirectamente a traves de una 
	 * direccion (un puntero). El resultado es el valor 
	 * direccionado por el operando, dicho de otra forma,
	 * el valor apuntado por el puntero.
	 * 
	 * Un puntero es una variable capaz de contener una 
	 * direccion de memoria que indica donde se localiza 
	 * un dato de un tipo especificado (por ejemplo, un entero).
	 */
	int *puntero;
	
	/**
	 * Para que muestre el tamaño de cada tipo, usamos la funcion 
	 * printf que permite escribir bytes (caracteres) en stdout 
	 * utilizando el formato especificado.
	 * 
	 * La función printf retorna el número de caracteres impresos, 
	 * o un valor negativo si ocurre un error
	 * 
	 * Usamos el operador sizeof que da como resultado el tamaño 
	 * en bytes de su operando. Dicho operando puede ser el 
	 * indentificador o el tipo de una variable previamente 
	 * declararada para obtener el mataño de bytes del tipo short.
	 * 
	 * Ademas usamos especificaciones de formato que especifica 
	 * como va a ser la salida y se usa el "%d" para mostrar
	 * el valor, usamos una secuencia de escape "\n" que es un
	 * salto de linea.
	 */
	printf("El tipo short tiene un tamaño de: %d bytes\n",sizeof(short));
	
	/**
	 * Para que muestre el tamaño de cada tipo, usamos la funcion 
	 * printf que permite escribir bytes (caracteres) en stdout 
	 * utilizando el formato especificado.
	 * 
	 * La función printf retorna el número de caracteres impresos, 
	 * o un valor negativo si ocurre un error
	 * 
	 * Usamos el operador sizeof que da como resultado el tamaño 
	 * en bytes de su operando. Dicho operando puede ser el 
	 * indentificador o el tipo de una variable previamente 
	 * declararada para obtener el mataño de bytes del tipo int.
	 * 
	 * Ademas usamos especificaciones de formato que especifica 
	 * como va a ser la salida y se usa el "%d" para mostrar
	 * el valor, usamos una secuencia de escape "\n" que es un
	 * salto de linea.
	 */
	printf("El tipo int tiene un tamaño de: %d bytes\n",sizeof(int));
	
	/**
	 * Para que muestre el tamaño de cada tipo, usamos la funcion 
	 * printf que permite escribir bytes (caracteres) en stdout 
	 * utilizando el formato especificado.
	 * 
	 * La función printf retorna el número de caracteres impresos, 
	 * o un valor negativo si ocurre un error
	 * 
	 * Usamos el operador sizeof que da como resultado el tamaño 
	 * en bytes de su operando. Dicho operando puede ser el 
	 * indentificador o el tipo de una variable previamente 
	 * declararada para obtener el mataño de bytes del tipo unsigned int.
	 * 
	 * Ademas usamos especificaciones de formato que especifica 
	 * como va a ser la salida y se usa el "%d" para mostrar
	 * el valor, usamos una secuencia de escape "\n" que es un
	 * salto de linea.
	 */
	printf("El tipo unsigned int tiene un tamaño de: %d bytes\n",sizeof(unsigned int));
	
	/**
	 * Para que muestre el tamaño de cada tipo, usamos la funcion 
	 * printf que permite escribir bytes (caracteres) en stdout 
	 * utilizando el formato especificado.
	 * 
	 * La función printf retorna el número de caracteres impresos, 
	 * o un valor negativo si ocurre un error
	 * 
	 * Usamos el operador sizeof que da como resultado el tamaño 
	 * en bytes de su operando. Dicho operando puede ser el 
	 * indentificador o el tipo de una variable previamente 
	 * declararada para obtener el mataño de bytes del tipo *puntero.
	 * 
	 * Ademas usamos especificaciones de formato que especifica 
	 * como va a ser la salida y se usa el "%d" para mostrar
	 * el valor, usamos una secuencia de escape "\n" que es un
	 * salto de linea.
	 */
	printf("El tipo apuntador a int tiene un tamaño de: %d bytes\n",sizeof(*puntero));

	/**
	 * Para que muestre el tamaño de cada tipo, usamos la funcion 
	 * printf que permite escribir bytes (caracteres) en stdout 
	 * utilizando el formato especificado.
	 * 
	 * La función printf retorna el número de caracteres impresos, 
	 * o un valor negativo si ocurre un error
	 * 
	 * Usamos el operador sizeof que da como resultado el tamaño 
	 * en bytes de su operando. Dicho operando puede ser el 
	 * indentificador o el tipo de una variable previamente 
	 * declararada para obtener el mataño de bytes del tipo char.
	 * 
	 * Ademas usamos especificaciones de formato que especifica 
	 * como va a ser la salida y se usa el "%d" para mostrar
	 * el valor, usamos una secuencia de escape "\n" que es un
	 * salto de linea.
	 */
	printf("El tipo char tiene un tamaño de: %d bytes\n",sizeof(char));
	
	/**
	 * Para que muestre el tamaño de cada tipo, usamos la funcion 
	 * printf que permite escribir bytes (caracteres) en stdout 
	 * utilizando el formato especificado.
	 * 
	 * La función printf retorna el número de caracteres impresos, 
	 * o un valor negativo si ocurre un error
	 * 
	 * Usamos el operador sizeof que da como resultado el tamaño 
	 * en bytes de su operando. Dicho operando puede ser el 
	 * indentificador o el tipo de una variable previamente 
	 * declararada para obtener el mataño de bytes del tipo float.
	 * 
	 * Ademas usamos especificaciones de formato que especifica 
	 * como va a ser la salida y se usa el "%d" para mostrar
	 * el valor, usamos una secuencia de escape "\n" que es un
	 * salto de linea.
	 */
	printf("El tipo float tiene un tamaño de: %d bytes\n",sizeof(float));
	
	/**
	 * Para que muestre el tamaño de cada tipo, usamos la funcion 
	 * printf que permite escribir bytes (caracteres) en stdout 
	 * utilizando el formato especificado.
	 * 
	 * La función printf retorna el número de caracteres impresos, 
	 * o un valor negativo si ocurre un error
	 * 
	 * Usamos el operador sizeof que da como resultado el tamaño 
	 * en bytes de su operando. Dicho operando puede ser el 
	 * indentificador o el tipo de una variable previamente 
	 * declararada para obtener el mataño de bytes del tipo double.
	 * 
	 * Ademas usamos especificaciones de formato que especifica 
	 * como va a ser la salida y se usa el "%d" para mostrar
	 * el valor, usamos una secuencia de escape "\n" que es un
	 * salto de linea.
	 */
	printf("El tipo double tiene un tamaño de: %d bytes\n",sizeof(double));
	
	return 0;
	}
