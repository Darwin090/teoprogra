//Ejercicio  for 1
//Suma de los digitos de un num 
#include <stdio.h>

int main() {
    // Definimos la variable num y le asignamos el valor 98712
    int num = 98712;
    // Definimos la variable suma y la inicializamos en 0 para almacenar la suma de los digitos
    int suma = 0;

    // Iniciamos un bucle que se repetira mientras el valor de num sea diferente de cero
    // Cada iteracion del bucle reducira num dividiendolo por 10, lo que eliminara el ultimo digito
    for (; num != 0; num /= 10) {
        // Obtenemos el ultimo digito de num utilizando el operador modulo (%)
        int ultimoDigito = num % 10;
        // Sumamos el ultimo digito al valor actual de suma
        suma += ultimoDigito;
    }

    // Imprimimos el resultado de la suma de los digitos
    printf("La suma de los digitos del numero es: %d\n", suma);

    return 0;
}

//Ejercicio for 2
//inveerso de un num
#include <stdio.h>

int main() {
    // Definimos la variable num y le asignamos el valor 98713
    int num = 98713;
    // Inicializamos la variable inverso en 0 para almacenar el numero invertido
    int inverso = 0;

    // Iniciamos un bucle que se repetira mientras el valor de num sea diferente de cero
    // En cada iteracion del bucle, eliminamos el ultimo digito de num dividiendolo por 10
    for (; num != 0; num /= 10) {
        // Obtenemos el ultimo digito de num utilizando el operador modulo (%)
        int ultimoDigito = num % 10;
        // Construimos el numero inverso multiplicandolo por 10 y sumandole el ultimo digito
        inverso = inverso * 10 + ultimoDigito;
    }

    // Imprimimos el resultado del numero invertido
    printf("El inverso del numero es: %d\n", inverso);

    return 0;
} 

//Ejerccio for 3
#include <stdio.h> 

int main() {
    // Definimos la variable base y le asignamos el valor 5
    int base = 5;
    // Definimos la variable exponente y le asignamos el valor 5
    int exponente = 2;
    // Inicializamos la variable resultado en 1 para almacenar el resultado de la potencia
    int resultado = 1;

    // Iniciamos un bucle que se repetirá exponente veces
    // En cada iteración, multiplicamos la base por sí misma
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }

    // Imprimimos el resultado de la potencia
    printf("%d^%d = %d\n", base, exponente, resultado);

    return 0;
}

//Ejerccio for 4 

#include <stdio.h>

int main() {
    // Definimos la variable num y le asignamos el valor 12
    int num = 12;
    // Inicializamos la variable raiz en 0 para almacenar la raiz cubica
    int raiz = 0;

    // Realizamos restas sucesivas para encontrar la raiz cubica
    // El bucle se repetira mientras num sea mayor o igual a 0
    // En cada iteración, restamos el cubo del contador (i) a num
    for (int i = 1; num >= 0; i++) {
        num -= i * i * i; // Restamos el cubo de i a num
        // Si el resultado de la resta es positivo o cero, incrementamos la raiz
        if (num >= 0) {
            raiz++; // Incrementamos la raiz
        }
    }

    // Imprimimos el resultado de la raiz cubica
    printf("La raiz cubica del numero es: %d\n", raiz);

    return 0;
} 

//Ejercicio for 5
#include <stdio.h>

int main() {
    // Definimos la variable n y le asignamos el valor 10
    int n = 8;
    // Inicializamos las variables a y b como los primeros dos términos de la serie de Fibonacci
    int a = 0, b = 1, c;

    // Imprimimos un mensaje indicando que vamos a mostrar los primeros n términos de la serie de Fibonacci
    printf("Los primeros %d terminos de la serie de fibonacci son:\n", n);
    // Imprimimos los dos primeros términos (0 y 1)
    printf("%d\n%d\n", a, b);

    // Calculamos y mostramos los siguientes términos
    // Empezamos desde i = 2 porque los dos primeros términos ya se han mostrado
    for (int i = 2; i < n; i++) {
        c = a + b; // Calculamos el siguiente término sumando los dos anteriores
        printf("%d\n", c); // Mostramos el término calculado
        a = b; // Actualizamos a para que sea igual al segundo término anterior
        b = c; // Actualizamos b para que sea igual al término calculado (c)
    }

    return 0;
}

//Ejercio 6 for
#include <stdio.h>

int main() {
    // Definimos la variable n y le asignamos el valor 6
    int n = 6;
    // Inicializamos la variable factorial en 1 para almacenar el factorial del número
    int factorial = 1;

    // Calculamos el factorial del número
    // El bucle se repetirá desde i=1 hasta que i sea menor o igual a n
    // En cada iteración, multiplicamos factorial por el valor actual de i
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    // Imprimimos el resultado del factorial
    printf("El factorial de %d es: %d\n", n, factorial);

    return 0;
} 

//Ejercicio 7 for 
#include <stdio.h> 

int main() {
    int n, suma = 0; // Declaramos dos variables enteras: n y suma, inicializamos suma en 0

    printf("2,4,6,8"); // Mostramos un mensaje pidiendo al usuario que ingrese un número
    scanf("%d", &n); // Escaneamos el número ingresado por el usuario y lo almacenamos en la variable n

    printf("La serie es: "); // Mostramos un mensaje indicando que vamos a imprimir la serie

    // Iniciamos un bucle for que recorre desde 1 hasta n
    for (int i = 1; i <= n; i++) {
        suma += i; // Sumamos el valor de i a la variable suma
        printf("%d", i); // Imprimimos el valor de i, que es el término de la serie actual

        // Si i es menor que n, significa que no estamos en el último término de la serie
        // Entonces imprimimos un símbolo '+' para indicar que hay más términos por venir
        if (i < n) {
            printf(" + ");
        }
    }
    printf("\n"); // Imprimimos un salto de línea para separar la serie de la siguiente línea

    // Mostramos la suma de los términos de la serie
    printf("La suma de los primeros %d términos es: %d\n", n, suma);

    return 0; 
}

//Ejercicio 8 for 
#include <stdio.h>

int main() {
    // Definimos la variable n y le asignamos el valor 3
    int n = 3;
    // Inicializamos la variable producto en 1 para almacenar el producto de los términos
    int producto = 1;

    // Calculamos el producto de los primeros n términos de la serie geométrica
    // Empezamos desde i=0 y aumentamos i en cada iteración hasta llegar a n-1
    // En cada iteración, multiplicamos el producto por 2
    // Suponemos una serie geométrica con razón 2
    for (int i = 0; i < n; i++) {
        producto *= 2;
    }

    // Imprimimos el resultado del producto
    printf("El producto de los primeros %d terminos de la serie geometrica es: %d\n", n, producto);

    return 0;
}

//Ejercicio 9 for 
#include <stdio.h> 
int main() {
    int num = 45612; // Definimos una variable entera num y le asignamos el valor 45612
    int contador = 0; // Inicializamos un contador para contar los dígitos del número

    // Iniciamos un bucle for que continúa mientras num no sea igual a 0
    // y en cada iteración, dividimos num por 10 (para eliminar el último dígito) y actualizamos el valor de num
    for (; num != 0; num /= 10) {
        contador++; // Incrementamos el contador en 1 en cada iteración, lo que cuenta los dígitos del número
    }

    // Después del bucle, cuando num sea igual a 0, significa que hemos contado todos los dígitos del número

    // Imprimimos el número de dígitos contados
    printf("El número tiene %d dígitos\n", contador);

    return 0;  

    //Ejercicio 10 for 
#include <stdio.h>

int main() {
    // Definimos la variable num y le asignamos el valor 15
    int num = 15;
    // Inicializamos la variable es_primo en 1, suponiendo que el número es primo
    int es_primo = 1;

    // Verificamos si el número es divisible por algún otro número
    // Empezamos desde i=2 hasta la mitad del número (num / 2)
    // Si encontramos un divisor, cambiamos es_primo a 0 y salimos del bucle
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            es_primo = 0; // Si es divisible, no es primo
            /// beak para salir del bu
            break;
        }
    }

    // Imprimimos el resultado
    if (es_primo)
        printf("%d es primo\n", num);
    else
        printf("%d no es primo\n", num);

    return 0;
}

//ejercicio 11 while  
#include <stdio.h>

// Funcion para encontrar el MCD de dos numeros utilizando el algoritmo de Euclides
int encontrarMCD(int num1, int num2) {
    while (num1 != num2) { // Mientras los números no sean iguales
        if (num1 > num2) { // Si el primer número es mayor que el segundo
            num1 -= num2; // Restamos el segundo número del primero
        } else { // Si el segundo número es mayor que el primero
            num2 -= num1; // Restamos el primer número del segundo
        }
    }
    return num1; // O num2, ya que son iguales en este punto
}

int main() {
    int num1 = 54, num2 = 24; // Definimos los dos numeros para encontrar el MCD
    int mcd = encontrarMCD(num1, num2); // Llamamos a la funcion para encontrar el MCD
    printf("El MCD de %d y %d es %d\n", num1, num2, mcd); // Imprimimos el resultado
    return 0;
}

//ejercicio 12 while 
#include <stdio.h>

// Funcion para sumar los numeros impares hasta n
int sumaImpares(int n) {
    int suma = 0; // Inicializamos la suma en 0
    int num = 1; // Empezamos con el primer numero impar
    while (num <= n) { // Mientras el número actual sea menor o igual a n
        suma += num; // Sumamos el número actual a la suma
        num += 2; // Pasamos al siguiente numero impar
    }
    return suma; // Devolvemos la suma total
}

int main() {
    int n = 10; // Definimos el valor de n
    int resultado = sumaImpares(n); // Llamamos a la funcion para obtener la suma de impares
    printf("La suma de los números impares hasta %d es %d\n", n, resultado); // Imprimimos el resultado
    return 0;
}

//ejercicio 13 while 
#include <stdio.h>

// Funcion para sumar los numeros pares hasta n
int sumaPares(int n) {
    int suma = 0; // Inicializamos la suma en 0
    int num = 2; // Empezamos con el primer numero par
    while (num <= n) { // Mientras el número actual sea menor o igual a n
        suma += num; // Sumamos el numero actual a la suma
        num += 2; // Pasamos al siguiente numero par
    }
    return suma; // Devolvemos la suma total
}

int main() {
    int n = 10; // Definimos el valor de n
    int resultado = sumaPares(n); // Llamamos a la funcion para obtener la suma de pares
    printf("La suma de los números pares hasta %d es %d\n", n, resultado); // Imprimimos el resultado
    return 0;
}

//ejercicio 14 while 
#include <stdio.h>

// Funcion para sumar los cuadrados de los primeros n números naturales
int sumaCuadrados(int n) {
    int suma = 0; // Inicializamos la suma en 0
    int num = 1; // Empezamos con el primer numero
    while (num <= n) { // Mientras el numero actual sea menor o igual a n
        suma += num * num; // Sumamos el cuadrado del numero actual a la suma
        num++; // Pasamos al siguiente numero
    }
    return suma; // Devolvemos la suma total
}

int main() {
    int n = 3; // Definimos el valor de n
    int resultado = sumaCuadrados(n); // Llamamos a la funcion para obtener la suma de cuadrados
    printf("La suma de los cuadrados de los primeros %d números es %d\n", n, resultado); // Imprimimos el resultado
    return 0;
}

//ejercicio 15 while 
#include <stdio.h>

// Funcion para sumar los cubos de los primeros n  naturales
int sumaCubos(int n) {
    int suma = 0; // Inicializamos la suma en 0
    int num = 1; // Empezamos con el primer número
    while (num <= n) { // Mientras el n actual sea menor o igual a n
        suma += num * num * num; // Sumamos el cubo del n actual a la suma
        num++; // Pasamos al siguiente numero
    }
    return suma; // Devolvemos la suma total
}

int main() {
    int n = 3; // Definimos el valor de n
    int resultado = sumaCubos(n); // Llamamos a la funcion para obtener la suma de cubos
    printf("La suma de los cubos de los primeros %d numeros es %d\n", n, resultado); // Imprimimos el resultado
    return 0;
}

//ejercicio 16 do while 
#include <stdio.h>

// Funcion para calcular la suma de una serie de numeros fraccionarios hasta n
float sumaFraccionarios(int n) {
    float suma = 0.0f; // Inicializamos la suma en 0.0
    int i = 1; // Inicializamos el contador en 1
    do {
        suma += 1.0f / i; // Sumamos el inverso del contador a la suma
        i++; // Incrementamos el contador
    } while (i <= n); // Repetimos mientras el contador sea menor o igual a n
    return suma; // Devolvemos la suma total
}

int main() {
    int n = 3; // Definimos el valor de n
    float resultado = sumaFraccionarios(n); // Llamamos a la funcion para obtener la suma
    printf("La suma de la serie de numeros fraccionarios hasta %d es %.2f\n", n, resultado); // Imprimimos el resultado
    return 0;
}

//ejercicio 17 do while 
#include <stdio.h>

// Funcion para calcular el producto de una serie de numeros fraccionarios hasta n
float productoFraccionarios(int n) {
    float producto = 1.0f; // Inicializamos el producto en 1.0
    int i = 1; // Inicializamos el contador en 1
    do {
        producto *= 1.0f / i; // Multiplicamos el inverso del contador al producto
        i++; // Incrementamos el contador
    } while (i <= n); // Repetimos mientras el contador sea menor o igual a n
    return producto; // Devolvemos el producto total
}

int main() {
    int n = 3; // Definimos el valor de n
    float resultado = productoFraccionarios(n); // Llamamos a la funcion para obtener el producto
    printf("El producto de la serie de numeros fraccionarios hasta %d es %.2f\n", n, resultado); // Imprimimos el resultado
    return 0;
}

//ejercicio 18 do while 
#include <stdio.h>

// Funcion para verificar si un numero es primo
int esPrimo(int num) {
    if (num <= 1) return 0; // 0 y 1 no son primos
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Si es divisible por algun numero menor o igual que su raiz cuadrada, no es primo
    }
    return 1; // Si no se encontro divisor, es primo
}

// Funcion para contar los numeros primos hasta n
int contarPrimosHasta(int n) {
    int contador = 0; // Inicializamos el contador en 0
    int i = 2; // Inicializamos el numero a verificar en 2
    do {
        if (esPrimo(i)) contador++; // Si el numero es primo, incrementamos el contador
        i++; // Pasamos al siguiente numero
    } while (i <= n); // Repetimos mientras el numero sea menor o igual a n
    return contador; // Devolvemos la cantidad de numeros primos encontrados
}

int main() {
    int n = 10; // Definimos el valor de n
    int cantidadPrimos = contarPrimosHasta(n); // Llamamos a la funcion para contar los primos
    printf("Hay %d numeros primos hasta %d\n", cantidadPrimos, n); // Imprimimos el resultado
    return 0;
}

//ejercicio 19 do while 
#include <stdio.h>

// Funcion para calcular el n-esimo número triangular
int numeroTriangular(int n) {
    int suma = 0; // Inicializamos la suma en 0
    int i = 1; // Inicializamos el contador en 1
    do {
        suma += i; // Sumamos el contador a la suma
        i++; // Incrementamos el contador
    } while (i <= n); // Repetimos mientras el contador sea menor o igual a n
    return suma; // Devolvemos la suma
}

int main() {
    int n = 4; // Definimos el valor de n
    int resultado = numeroTriangular(n); // Llamamos a la funcion para obtener el número triangular
    printf("El %d-esimo numero triangular es %d\n", n, resultado); // Imprimimos el resultado
    return 0;
}

//ejercicio 20 do  while 
#include <stdio.h>

// Funcion para calcular el factorial de un numero
int factorial(int num) {
    int fact = 1; // Inicializamos el factorial en 1
    for (int i = 1; i <= num; i++) {
        fact *= i; // Multiplicamos el contador al factorial
    }
    return fact; // Devolvemos el factorial
}

// Funcion para calcular la suma de los factoriales de los primeros n números
int sumaFactoriales(int n) {
    int suma = 0; // Inicializamos la suma en 0
    int i = 1; // Inicializamos el contador en 1
    do {
        suma += factorial(i); // Sumamos el factorial del contador a la suma
        i++; // Incrementamos el contador
    } while (i <= n); // Repetimos mientras el contador sea menor o igual a n
    return suma; // Devolvemos la suma total
}

int main() {
    int n = 3; // Definimos el valor de n
    int resultado = sumaFactoriales(n); // Llamamos a la funcion para obtener la suma de factoriales
    printf("La suma de los factoriales de los primeros %d numeros es %d\n", n, resultado); // Imprimimos el resultado
    return 0;
}