/**
 * Incluimos la biblioteca estandar que contiene 
 * las definiciones de las macros, las constantes, etc.
 */
#include <stdio.h>

/* Declaración de funciones */
int misterio1(int (*fun) (int), int);
void misterio2(void (*fun) (int), int);
int cuadrado_num(int);
void imprime_num(int);

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
	 * Se crea un puntero a una funcion que
	 * recibe un entero y retorna un entero.
	 */
	 int (*fun1) (int);
	/**
	 * Se crea un puntero a una funcion que
	 * recibe un entero y no retorna un valor.
	 */
	 void (*fun2) (int);
	 
	 // Le pasamos la direccion de las funciones las
	 // variables de funciones.
	 fun1 = &cuadrado_num;
	 fun2 = &imprime_num;
	 
	 // Declaramos una nueva varibale y le pasamos
	 // el puntero de la funcion y un valor que es 3.
	 // este mismo valor se le pasa a la funcion cuadrado.
	 int var = misterio1(fun1, 3);
	 // Le pasamos el puntero de la funcion y la variable
	 // var que abra retornado el cuadrado de 3.
	 // este mismo valor se le pasa a la funcion imprime.
	 misterio2(fun2, var);
	 
	 return 0;
}

/**
 * Funcion del tipo entera que recibe como parametro
 * un numero del tipo int y un puntero a un funcion
 * que recibe un entero y retorna un entero.
 */
int misterio1(int (*fun) (int), int num)
{
    return fun(num);
}

/**
 * Funcion que recibe como parametro un numero del 
 * tipo int y un puntero a un funcion que recibe un 
 * entero y no retorna nada.
 */
void misterio2(void (*fun) (int), int num)
{
    fun(num);
}

/**
 * Funcion del tipo entera que recibe como parametro
 * un numero del tipo int y retorna el cuadrado del
 * numero recibido.
 */
int cuadrado_num(int num)
{
    return num * num;
}

/**
 * Funcion del void que recibe como parametro
 * un numero del tipo int e imprime ese numero.
 */
void imprime_num(int num)
{
    printf("Tada: %d\n", num);
}
