/*H******************************************************************
 * Nombre del programa: programa_didaCtico.c    Versión: 1.0
 * 
 * Autor: Pablo Osés Andía
 * 
 * Descripcion:
 * 
 * Este programa está orientado a ver los básicos del lenguaje de 
 * programación C. Su distribución está permitida siempre y cuando
 * no se modifique el nombre del autor original.
 * 
 * Antes de comenzar comprueba que esta es la versión más reciente 
 * mirando en https://www.github.com/poses98/basicosEnC
 * 
 * 
 * 
 *H*/


#include <stdio.h>


//Función principal del programa en C
int main(){
    //Mensaje por consola
    printf("Hello world!");

    //Declaración de variable número entero
    int integerNum;

    //Declaración de variable número real
    float realNum;

    //Declaración de variable tipo caracter
    char character;

    /*
     *Declaración de un array de enteros de 1 dimension
     *en [X] indicamos el tamaño del array, es decir el
     *número de posiciones que tendrá.
     *Generalmente es buena idea guardarlo en una variable int
     *para tenerlo a mano a la hora de iterar sobre él en un
     *for.
     */
    int arrayOfInt[5];

    //Declaración de un array de enteros de 2 dimensiones (matriz)
    int matrixOfInt[5][5];

    //Llamada a la función vacía FirstVoid
    FirstVoid();

    //Llamada a la función vacía SayMyName con parámetro mi nombre
    SayMyName

    return 0;
}

/**
 * Función que imprime por pantalla "Hello world from VOID!"
 */
void FirstVoid(){
    printf("Hello world from VOID!");
}