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

// Declaración de las funciones
void FirstVoid();
int Sum(int num1, int num2);
void ReadArrayOfInt(int sizeOfArr,int int_arr[]);
void ReadArrayOfChar(int sizeOfArr, char ch_arr[]);

//Función principal del programa en C
int main(){
    //Mensaje por consola
    printf("1.\tHello world!\n\n");

    // ********* DECLARACIÓN DE VARIABLES ***********
    
    //Declaración de variable número entero
    int integerNum = 0;

    //Declaración de variable número real
    float realNum = 0.25;

    //Declaración de variable tipo caracter
    char character = "c";

    /**
     *Declaración de un array de enteros de 1 dimension
     *en [X] indicamos el tamaño del array, es decir el
     *número de posiciones que tendrá.
     *Ejemplo: Array de números del 1 al 5
     *
     * Declaración: 
     *      int arr_int[5] = {1,2,3,4,5};
     * Estructura:
     *      pos: [0][1][2][3][4]
     *      val:  1  2  3  4  5
     * Como se puede observar las posiciones van del 0-4 que es
     * un tamaño de 5. 
     * En cada posición se almacena un valor diferente.
     * 
     * Para su lectura es necesario un for que se puede encontrar
     * más abajo en la función ReadIntArray().
     *
     *Generalmente es buena idea guardarlo en una variable int
     *para tenerlo a mano a la hora de iterar sobre él en un
     *for.
     * Los arrays pueden estar compuesto por más de una fila, lo 
     * que conocemos como arrays de 2 dimensiones o matrices.
     * 
     * Su declaración es de la siguiente forma:
     *      int matrix[5][5];
     * Para recorrer este array necesitamos un for anidado para recorrer
     * las filas y las columnas del mismo.
     */
    int arrayOfInt[5] = {1,2,3,4,5};

    //Declaro un array que contiene mi nombre, son 5 caracteres
    char name[5] = {"Pablo"};


    // ********* FUNCIONES ***********

    /**
     * Las funciones son bloques de código que se utilizan para
     * modularizar un programa de forma que no se encuentre todo 
     * el código en la función principal. También cumplen con su
     * función de reutilización del código.
     * 
     * En Programación orientada a objetos (POO) son el pilar fundamental,
     * junto con los atributos de la clase, de los objetos(clases) por lo
     * que es importante manejarse con ellas con soltura.
     */      

    // *** HELLO WORLD DESDE UNA FUNCIÓN
    printf("2. Hello world desde una función:\n");
    //Llamada a la función FirstVoid
    FirstVoid();

    // *** SUMA DE DOS VARIABLES POR MEDIO DE UNA FUNCIÓN ***
    printf("3. Suma de dos variables por medio de una función:\n");
    /**
     * Llamada a la función Sum que devuelve la suma de dos enteros
     * Introducimos su valor en una variable.
     */ 
    int resultOfSum = Sum(6,12);
    // Imprimimos la variable de la suma, debería ser 18.
    printf("%d\n\n",resultOfSum);

    // *** LECTURA DEL ARRAY DE ENTEROS DESDE FUNCIÓN ***
    /**
     * Llamada a la función ReadIntArray() pasando como parámetro
     * el array declarado anteriormente y su tamaño
     */
    printf("4. Lectura de un array de números enteros desde una función:\n");
    ReadArrayOfInt(5,arrayOfInt);

    // *** LECTURA DEL ARRAY DE CARACTERES DESDE FUNCIÓN ***
    /**
     * Llamada a la función ReadArrayOfChar pasándole como parámetro
     * un array de caracteres que es mi nombre. Y la longitud del array
     */ 
    printf("5. Lectura de un array de caracteres desde una función:\n");
    ReadArrayOfChar(5,name);

    return 0;
}

/**
 * Función que imprime por pantalla "Hello world from VOID!"
 */
void FirstVoid(){
    printf("\tHello world from VOID!\n\n");
}

/**
 * Función que realiza la suma de dos números
 * @param int num1: primer término
 * @param int num2: segundo término
 * @return la suma de los dos términos
 */ 
int Sum(int num1,int num2){
    return num1 + num2;
}

/**
 * Función que imprime por pantalla un array de enteros
 * @param int - sizeOfArr: tamaño del array de int
 * @param char[] - ch_arr: array de int
 */
void ReadArrayOfInt(int sizeOfArr,int int_arr[]){
    printf("\tArray of int:{");
    for (int i = 0; i < sizeOfArr; i++)
    {
        printf(" %d ",int_arr[i]);
    }
    printf("}\n");
}  

/**
 * Función que imprime por pantalla "Hello <name>!"
 * @param int - sizeOfArr: tamaño del array de chars
 * @param char[] - ch_arr: array de chars
 */
void ReadArrayOfChar(int sizeOfArr,char ch_arr[]){
    printf("\tArray of chars:'");
    for (int i = 0; i < sizeOfArr; i++)
    {
        printf("%c",ch_arr[i]);
    }
    printf("'\n");
}  